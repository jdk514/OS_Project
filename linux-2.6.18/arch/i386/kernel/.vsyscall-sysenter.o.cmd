cmd_arch/i386/kernel/vsyscall-sysenter.o := gcc -m32 -Wp,-MD,arch/i386/kernel/.vsyscall-sysenter.o.d  -nostdinc -isystem /usr/lib/gcc/i386-redhat-linux/4.1.1/include -D__KERNEL__ -Iinclude  -include include/linux/autoconf.h -D__ASSEMBLY__ -Iinclude/asm-i386/mach-generic -Iinclude/asm-i386/mach-default -traditional   -c -o arch/i386/kernel/vsyscall-sysenter.o arch/i386/kernel/vsyscall-sysenter.S

deps_arch/i386/kernel/vsyscall-sysenter.o := \
  arch/i386/kernel/vsyscall-sysenter.S \
  arch/i386/kernel/vsyscall-sigreturn.S \
  include/asm/unistd.h \
  include/asm/asm-offsets.h \

arch/i386/kernel/vsyscall-sysenter.o: $(deps_arch/i386/kernel/vsyscall-sysenter.o)

$(deps_arch/i386/kernel/vsyscall-sysenter.o):
