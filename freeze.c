#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>

/* includes for device */
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/* include to read args from commnad line */
#include <unistd.h>

/* copy file to restore from later */
copy_file(char* source){

	printf("The path is %s\n", source);
	printf("reached copy_file\n");
	/* only copy the file if it does not exist in the destination directory */
	//system n | cp source destination

	//Check for /root/OS_Project/restore if does not exist create directory

	char system_call[120] = "n | cp -i "; //10 chars
	//Need to alter if we are going to keep directory structure
	char destination[26] = " /root/OS_Project/restore"; //25 chars - need to add 80 for directory hierarchy
    strcat(system_call,source);
    strcat(system_call,destination);
    printf("%s\n",system_call);
    system((char *)system_call);
}

void read_to_log(int device_id){
	FILE *logFile;
	logFile = fopen("log.csv", "a");
	/* read integer */
	int read_successful, write_success, fd;
	/* char buffer */
	char* output = (char *)malloc(80*sizeof(char));
	/* process output if it exists, else spin */
	while(1){
		/* read from the device */
		fd = open("/dev/hello", O_RDWR);
		read_successful = read(fd, (void*) output, 80);
		printf("Did read work %d\n", read_successful);
		/* print out the output */
		printf("Read: %s\n", (char*) output);
		if(read_successful>0 && output[0] == '/'){
			copy_file(output);
			write_success = write(device_id, (void*) output, 80);
			printf("Write worked %d\n", write_success);
			// time already has newline in it so no need to add to end
			fprintf(logFile, "%s\n",(char*) output);
		}
		else{
			printf("nothing read\n");
		}
		close(fd);
	}
	free(output);
	fclose(logFile);

}


void open_device(){

	//printf("beginning of open_device\n");

	/* device identifier */
	int opened;

	/* open the device */
	opened = open("/dev/hello", O_RDWR);

	/* end if we fail to open the device */
	if(opened == -1){
		printf("failed to open device\n");
		return;
	}

	/* pass the device identifier to read function */
	read_to_log(opened);

}


int main(){

	/* insert module */
	char system_call[120] = "insmod /root/OS_Project/joel_chardev/chardev.ko"; //47 chars
	char system_call2[120] = "mknod /dev/hello c 253 0";//24
	system((char *)system_call);
	system((char *)system_call2);
	/* copy and remove any existing log file before freezing */
	char copy_log_freeze[120] = "cp /root/OS_Project/log.csv /root/OS_Project/old_log_freeze.csv";
	printf("%s\n",copy_log_freeze);
   	system((char *)copy_log_freeze);
	char remove_log_freeze[120] = "rm /root/OS_Project/log.csv";
	printf("%s\n",remove_log_freeze);
    system((char *)remove_log_freeze);
    /* open the device */
    open_device();
	
}
