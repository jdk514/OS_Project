cmd_drivers/video/built-in.o :=  ld -m elf_i386 -m elf_i386  -r -o drivers/video/built-in.o drivers/video/fb_notify.o drivers/video/fb.o drivers/video/console/built-in.o drivers/video/logo/built-in.o drivers/video/backlight/built-in.o
