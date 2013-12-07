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

/* restore files */
void restore_files(){

	printf("reached restore\n");

	/* remove module */
	char rmmod_call[120] = "rmmod chardev";
	printf("%s\n",rmmod_call);
    system((char *)rmmod_call);
    char rm_call[120] = "rm /dev/hello";
	printf("%s\n",rm_call);
    system((char *)rm_call); 

	/* copy everything from restore directory back to freeze directory*/
	char copy_files[120] = "cp /root/OS_Project/restore/* /freeze/";
	printf("%s\n",copy_files);
    system((char *)copy_files);

	/* remove all files from restore directory at end of restore */
	char remove_files[120] = "rm -rf /root/OS_Project/restore/*.*";
	printf("%s\n",remove_files);
    system((char *)remove_files);

	/* copy and then remove log file at end of restore */
	char copy_log_restore[120] = "cp /root/OS_Project/log.csv /root/OS_Project/old_log_restore.csv";
	printf("%s\n",copy_log_restore);
    system((char *)copy_log_restore);
	char remove_log[120] = "rm /root/OS_Project/log.csv";
	printf("%s\n",remove_log);
    system((char *)remove_log);

}

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

	time_t current_time;
    char* c_time_string;
	/* read integer */
	int read_successful, write_success, fd;
	/* char buffer */
	char* output = (char *)malloc(80*sizeof(char));
	 /* Obtain current time as seconds elapsed since the Epoch. */
    current_time = time(NULL);
 
 
    /* Convert to local time format. */
    c_time_string = ctime(&current_time);

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
			fprintf(logFile, "%s, %s\n",(char*) output,c_time_string);
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


int main(int argc, char *argv[]){

	/* Error if more than two command line arguments */
	if(argc!=2){
		printf("Please enter freeze or restore as a sole argument\n");
		return;
	}

	printf("beginning of main\n");
	/* string for command */
	char* command = (char *)malloc(8*sizeof(char));
	/* set command equal to command line argument */
	strcat(command,argv[1]);
	//printf("%s\n",command);
	int restore = strcmp("restore",command);
	int freeze = strcmp("freeze",command);
	if(restore==0){
		printf("restore\n");
		restore_files();
	}
	else if(freeze==0){
		printf("freeze\n");
		char system_call[120] = "insmod /root/OS_Project/joel_chardev/chardev.ko"; //47 chars
		char system_call2[120] = "mknod /dev/hello c 253 0";//24
	    system((char *)system_call);
	    system((char *)system_call2);
		open_device();
		/* copy and remove any existing log file before freezing */
		char copy_log_freeze[120] = "cp /root/OS_Project/log.csv /root/OS_Project/old_log_freeze.csv";
		printf("%s\n",copy_log_freeze);
   	 	system((char *)copy_log_freeze);
		char remove_log_freeze[120] = "rm /root/OS_Project/log.csv";
		printf("%s\n",remove_log_freeze);
    	system((char *)remove_log_freeze);
	}
	else{
		printf("Please enter freeze or restore as a sole argument\n");
	}	
	printf("end of main\n");
}
