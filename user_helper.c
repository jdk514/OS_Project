PSEUDOCODE

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

		this functionality will be on the kernel side