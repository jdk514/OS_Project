cmd_lib/errno.o := gcc -m32 -Wp,-MD,lib/.errno.o.d  -nostdinc -isystem /usr/lib/gcc/i386-redhat-linux/4.1.1/include -D__KERNEL__ -Iinclude  -include include/linux/autoconf.h -Wall -Wundef -Wstrict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -Os -pipe -msoft-float -mpreferred-stack-boundary=2  -march=i686 -mtune=generic -mregparm=3 -ffreestanding -Iinclude/asm-i386/mach-generic -Iinclude/asm-i386/mach-default -fomit-frame-pointer -g  -fno-stack-protector -Wdeclaration-after-statement -Wno-pointer-sign    -D"KBUILD_STR(s)=\#s" -D"KBUILD_BASENAME=KBUILD_STR(errno)"  -D"KBUILD_MODNAME=KBUILD_STR(errno)" -c -o lib/.tmp_errno.o lib/errno.c

deps_lib/errno.o := \
  lib/errno.c \

lib/errno.o: $(deps_lib/errno.o)

$(deps_lib/errno.o):
