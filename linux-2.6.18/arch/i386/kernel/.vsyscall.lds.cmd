cmd_arch/i386/kernel/vsyscall.lds := gcc -m32 -E -Wp,-MD,arch/i386/kernel/.vsyscall.lds.d  -nostdinc -isystem /usr/lib/gcc/i386-redhat-linux/4.1.1/include -D__KERNEL__ -Iinclude  -include include/linux/autoconf.h  -P -C -Ui386 -D__ASSEMBLY__ -o arch/i386/kernel/vsyscall.lds arch/i386/kernel/vsyscall.lds.S

deps_arch/i386/kernel/vsyscall.lds := \
  arch/i386/kernel/vsyscall.lds.S \
  include/asm/asm-offsets.h \

arch/i386/kernel/vsyscall.lds: $(deps_arch/i386/kernel/vsyscall.lds)

$(deps_arch/i386/kernel/vsyscall.lds):
