cmd_arch/i386/lib/checksum.o := gcc -m32 -Wp,-MD,arch/i386/lib/.checksum.o.d  -nostdinc -isystem /usr/lib/gcc/i386-redhat-linux/4.1.1/include -D__KERNEL__ -Iinclude  -include include/linux/autoconf.h -D__ASSEMBLY__ -Iinclude/asm-i386/mach-generic -Iinclude/asm-i386/mach-default    -c -o arch/i386/lib/checksum.o arch/i386/lib/checksum.S

deps_arch/i386/lib/checksum.o := \
  arch/i386/lib/checksum.S \
    $(wildcard include/config/x86/use/ppro/checksum.h) \
  include/asm/errno.h \
  include/asm-generic/errno.h \
  include/asm-generic/errno-base.h \

arch/i386/lib/checksum.o: $(deps_arch/i386/lib/checksum.o)

$(deps_arch/i386/lib/checksum.o):
