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

	/* kill freeze */
	system("pkill freeze_system");

	/* remove module */
	char rmmod_call[120] = "rmmod chardev";
	printf("%s\n",rmmod_call);
    system((char *)rmmod_call);
    char rm_call[120] = "rm /dev/hello";
	printf("%s\n",rm_call);
    system((char *)rm_call); 

	/* copy everything from restore directory back to freeze directory*/
	//char copy_files[120] = "cp /root/OS_Project/restore/* /freeze/";
	char copy_files[120] = "cp -r /root/OS_Project/restore/freeze/* /freeze/";
	printf("%s\n",copy_files);
    system((char *)copy_files);

	/* remove all files from restore directory at end of restore */
	char remove_files[120] = "rm -rf /root/OS_Project/restore/*";
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

int main(){
	restore_files();
}
