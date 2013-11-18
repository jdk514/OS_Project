cmd_arch/i386/kernel/relocate_kernel.o := gcc -m32 -Wp,-MD,arch/i386/kernel/.relocate_kernel.o.d  -nostdinc -isystem /usr/lib/gcc/i386-redhat-linux/4.1.1/include -D__KERNEL__ -Iinclude  -include include/linux/autoconf.h -D__ASSEMBLY__ -Iinclude/asm-i386/mach-generic -Iinclude/asm-i386/mach-default -traditional   -c -o arch/i386/kernel/relocate_kernel.o arch/i386/kernel/relocate_kernel.S

deps_arch/i386/kernel/relocate_kernel.o := \
  arch/i386/kernel/relocate_kernel.S \
  include/linux/linkage.h \
  include/asm/linkage.h \
    $(wildcard include/config/x86/alignment/16.h) \

arch/i386/kernel/relocate_kernel.o: $(deps_arch/i386/kernel/relocate_kernel.o)

$(deps_arch/i386/kernel/relocate_kernel.o):
