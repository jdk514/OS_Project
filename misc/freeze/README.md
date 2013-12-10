OS_Project
==========

Freezing File System for OS

1. Only freeze one directory (i.e. /freezer/)

2. Use user level helper to 
	tell kernel to freeze FS
	Notify kernel to restore frozen FS
	Also keep track of written files/directories

3. Use Chardev to communicate between kernel and user level

4. Understand Kernel
	Key paths in kernel where FS is modified
		Start with existing files first, then expand
		write system call is sys_write
	Wait queses
		use them to prevent threads from writing prior to helper copying the files
		DIFFICULT

START - getting chardev setup to work fluently and read through sys_write and wait-queues.
	Also write pseudo code that lays out the project



Functions:
	Strace
	
	filepointers to paths to determine file being processed:
	path_lookup
		dpath


Userspace Helper:
	1. Log Kernel space to User space
		Establish hooks in FS modifying syscalls
	2. Tack Changes
		Modify logging to detect changes to FS (start with only writes)
			Make sure logger doesnt detect itself (infinite loop)
	3. Backing up files and directories
		Use the tracking to backup files that will be modified
	4. Auto Restore
		Extend userspace app to roll back changes.

This is a test - 12:35 - 12/8
