cmd_drivers/md/raid6int4.c := perl /root/OS_Project/OS_Project/linux-2.6.18/drivers/md/unroll.pl 4 < drivers/md/raid6int.uc > drivers/md/raid6int4.c || ( rm -f drivers/md/raid6int4.c && exit 1 )
