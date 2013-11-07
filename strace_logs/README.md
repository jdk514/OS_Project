This is a list of sys_calls we should monitor

From vim:
	
From open:
	execve()
	access()
	open()
	read()
	maybe ioctl(), but this seems to need to use open, so it may be redundant
	Probs dont need get/setuid

From touch:
	execve() - execute a binary executable/script
        access() - check if process has the right to read/write
        open() - returns the fd for further function, probably the source sys_call we need to watch for
	read() - read from a file, probably not worth noting
	fstat64 - returns information about file descriptor - such as last modified date, may be useful in determining if file has been modified??
From rm:
	munmap - unmap pages of memory, probably the call that actually removes the file so good to catch file removal/deletion
	unlink - deletes link/name from FS, this will be necessary to catch to recreate files
From recursive_rm:
	rm_dir - removes directory that must be empty - need to track to know what directories need to be recreated
From mkdir:
	mkdir - same as rm_dir, but creates - need to log new directories
