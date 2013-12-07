/* PSEUDOCODE

chardev.c 

	//adjust size of msg[] string based on length of log
	//change name of struct "request" to "logs"

	device_read()

		read log from stack instead of request

	device_write()

		write log to stack instead of request

user_helper.c 

	read()

		read log from stack into variable

		print variable to log file

	write()

	 //freeze system 

*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>

/* includes for device */
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/* restore files */

//iterate through log
//for each file

//set some sort of status (boolean) that stops files from being modifed (waitques?),
//that stops the logging (and subsquently copying of files)
//to avoid recursion

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
	int read_successful, write_success;
	/* char buffer */
	char* output = (char *)malloc(80*sizeof(char));
	 /* Obtain current time as seconds elapsed since the Epoch. */
    current_time = time(NULL);
 
 
    /* Convert to local time format. */
    c_time_string = ctime(&current_time);

	/* process output if it exists, else spin */
	//while(1){
		/* read from the device */
		read_successful = read(device_id, (void*) output, 80);
		printf("Did read work %d\n", read_successful);
		/* print out the output */
		printf("Read: %s\n", (char*) output);
		if(read_successful>0){
			copy_file(output);
			write_success = write(device_id, (void*) output, 80);
			printf("Write worked %d\n", write_success);
			// time already has newline in it so no need to add to end
			fprintf(logFile, "%s, %s\n",(char*) output,c_time_string);
		}
		else{
			printf("nothing read\n");
		}
	//}
	free(output);
	fclose(logFile);

}


void open_device(){

	printf("beginning of open_device\n");

	/* device identifier */
	int opened;

	/* open the device */
	opened = open("/dev/hello", O_RDWR);

	//comment out for now, until we can acutally open the device
	/* end if we fail to open the device */
	if(opened == -1){
		printf("failed to open device\n");
		return;
	}

	//printf("device opened\n");

	/* pass the device identifier to read function */
	read_to_log(opened);
	//read_to_log1();

}


int main(){

	printf("beginning of main\n");
	open_device();
	printf("end of main\n");
}
