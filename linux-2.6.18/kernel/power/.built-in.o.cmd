cmd_kernel/power/built-in.o :=  ld -m elf_i386 -m elf_i386  -r -o kernel/power/built-in.o kernel/power/main.o kernel/power/process.o kernel/power/console.o kernel/power/pm.o kernel/power/swsusp.o kernel/power/disk.o kernel/power/snapshot.o kernel/power/swap.o kernel/power/user.o kernel/power/smp.o kernel/power/poweroff.o
