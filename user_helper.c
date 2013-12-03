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

/*

 

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
copy_file(){

	//this will be replaced with parameter
	char source[40] = "/root/copy_test.txt";
	/* only copy the file if it does not exist in the destination directory */
	//system n | cp source destination
	char system_call[30] = "n | cp -i ";
	char destination[40] = " /root/OS_Project/restore";
    strcat(system_call,source);
    strcat(system_call,destination);
    printf("%s\n",system_call);
    system((char *)system_call);
}

void* read_to_log(void* arg){

	FILE *logFile;
	logFile = fopen("log", "a");

	/* device identifier */
	int opened = *(int*)arg;
	/* read integer */
	int read_successful;
	/* char buffer */
	char output[80];

	/* process output if it exists, else spin */
	while(1){
		/* read from the device */
		read_successful = read(opened, (void*) output, 80);
		printf("Did read work %d\n", read_successful);
		/* print out the output */
		printf("Read: %s\n", (char*) output);
		if(read_successful>0){
			fprintf(logFile, "%s\n", (char*) output);
		}
		else{
			printf("nothing read\n");
		}
	}

	fclose(logFile);

}

void* read_to_log1(){

	printf("read to log1 beginning\n");

	FILE *logFile;
	logFile = fopen("log.csv", "a");

	time_t current_time;
    char* c_time_string;

    char* printed = "printed to log file";
 
    /* Obtain current time as seconds elapsed since the Epoch. */
    current_time = time(NULL);
 
 
    /* Convert to local time format. */
    c_time_string = ctime(&current_time);
 	


    // time already has newline in it so no need to add to end
	fprintf(logFile, "%s,%s",printed,c_time_string);

	// will have to take path parameter as a string
	copy_file();

	fclose(logFile);

	printf("end of log1\n");

}


void open_device(){

	printf("beginning of open_device\n");

	/* device identifier */
	int opened;

	/* open the device */
	opened = open("/dev/osqueue", O_RDWR);

	//comment out for now, until we can acutally open the device
	/* end if we fail to open the device */
	/*if(opened == -1){
		printf("failed to open device\n");
		return;
	}*/

	printf("device opened\n");

	/* pass the device identifier to read function */
	//read_to_log(opened);
	read_to_log1();

}


int main(){

	printf("beginning of main\n");
	open_device();
	printf("end of main\n");
}

        