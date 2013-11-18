cmd_drivers/md/raid6int1.c := perl /root/OS_Project/OS_Project/linux-2.6.18/drivers/md/unroll.pl 1 < drivers/md/raid6int.uc > drivers/md/raid6int1.c || ( rm -f drivers/md/raid6int1.c && exit 1 )
