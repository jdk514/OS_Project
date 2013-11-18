cmd_drivers/media/video/pwc/pwc-timon.o := gcc -m32 -Wp,-MD,drivers/media/video/pwc/.pwc-timon.o.d  -nostdinc -isystem /usr/lib/gcc/i386-redhat-linux/4.1.1/include -D__KERNEL__ -Iinclude  -include include/linux/autoconf.h -Wall -Wundef -Wstrict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -Os -pipe -msoft-float -mpreferred-stack-boundary=2  -march=i686 -mtune=generic -mregparm=3 -ffreestanding -Iinclude/asm-i386/mach-generic -Iinclude/asm-i386/mach-default -fomit-frame-pointer -g  -fno-stack-protector -Wdeclaration-after-statement -Wno-pointer-sign -DCONFIG_PWC_DEBUG=0  -DMODULE -D"KBUILD_STR(s)=\#s" -D"KBUILD_BASENAME=KBUILD_STR(pwc_timon)"  -D"KBUILD_MODNAME=KBUILD_STR(pwc)" -c -o drivers/media/video/pwc/.tmp_pwc-timon.o drivers/media/video/pwc/pwc-timon.c

deps_drivers/media/video/pwc/pwc-timon.o := \
  drivers/media/video/pwc/pwc-timon.c \
  drivers/media/video/pwc/pwc-timon.h \
  include/media/pwc-ioctl.h \
  include/linux/types.h \
    $(wildcard include/config/uid16.h) \
    $(wildcard include/config/resources/64bit.h) \
  include/linux/posix_types.h \
  include/linux/stddef.h \
  include/linux/compiler.h \
  include/linux/compiler-gcc4.h \
    $(wildcard include/config/forced/inlining.h) \
  include/linux/compiler-gcc.h \
  include/asm/posix_types.h \
  include/asm/types.h \
    $(wildcard include/config/highmem64g.h) \
    $(wildcard include/config/lbd.h) \
    $(wildcard include/config/lsf.h) \
  include/linux/version.h \

drivers/media/video/pwc/pwc-timon.o: $(deps_drivers/media/video/pwc/pwc-timon.o)

$(deps_drivers/media/video/pwc/pwc-timon.o):
