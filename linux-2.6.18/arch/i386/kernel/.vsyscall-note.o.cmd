cmd_arch/i386/kernel/vsyscall-note.o := gcc -m32 -Wp,-MD,arch/i386/kernel/.vsyscall-note.o.d  -nostdinc -isystem /usr/lib/gcc/i386-redhat-linux/4.1.1/include -D__KERNEL__ -Iinclude  -include include/linux/autoconf.h -D__ASSEMBLY__ -Iinclude/asm-i386/mach-generic -Iinclude/asm-i386/mach-default -traditional   -c -o arch/i386/kernel/vsyscall-note.o arch/i386/kernel/vsyscall-note.S

deps_arch/i386/kernel/vsyscall-note.o := \
  arch/i386/kernel/vsyscall-note.S \
  include/linux/uts.h \
  include/linux/version.h \

arch/i386/kernel/vsyscall-note.o: $(deps_arch/i386/kernel/vsyscall-note.o)

$(deps_arch/i386/kernel/vsyscall-note.o):
