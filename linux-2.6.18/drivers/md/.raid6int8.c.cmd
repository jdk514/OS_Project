cmd_drivers/md/raid6int8.c := perl /root/OS_Project/OS_Project/linux-2.6.18/drivers/md/unroll.pl 8 < drivers/md/raid6int.uc > drivers/md/raid6int8.c || ( rm -f drivers/md/raid6int8.c && exit 1 )
