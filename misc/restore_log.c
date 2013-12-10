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

int main(){
	/* open log file */    
    FILE *logFile;
	logFile = fopen("log.csv", "r");
	char* source = (char *)malloc(80*sizeof(char));
	char* copy = "cp ";
	char* destination = " /freeze";
	/* iterate through log files and copy each */
	while(fgets(source, 80, logFile) != NULL) {
		char* command = (char *)malloc(200*sizeof(char));
		strcat(command,copy);
		strcat(command,source);
		strcat(command,destination);
		printf("%s\n", command);
	}
}
