cmd_arch/i386/crypto/aes-i586-asm.o := gcc -m32 -Wp,-MD,arch/i386/crypto/.aes-i586-asm.o.d  -nostdinc -isystem /usr/lib/gcc/i386-redhat-linux/4.1.1/include -D__KERNEL__ -Iinclude  -include include/linux/autoconf.h -D__ASSEMBLY__ -Iinclude/asm-i386/mach-generic -Iinclude/asm-i386/mach-default   -DMODULE -c -o arch/i386/crypto/aes-i586-asm.o arch/i386/crypto/aes-i586-asm.S

deps_arch/i386/crypto/aes-i586-asm.o := \
  arch/i386/crypto/aes-i586-asm.S \
  include/asm/asm-offsets.h \

arch/i386/crypto/aes-i586-asm.o: $(deps_arch/i386/crypto/aes-i586-asm.o)

$(deps_arch/i386/crypto/aes-i586-asm.o):
