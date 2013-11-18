cmd_.tmp_kallsyms3.o := gcc -m32 -Wp,-MD,./..tmp_kallsyms3.o.d -D__ASSEMBLY__ -Iinclude/asm-i386/mach-generic -Iinclude/asm-i386/mach-default   -nostdinc -isystem /usr/lib/gcc/i386-redhat-linux/4.1.1/include -D__KERNEL__ -Iinclude  -include include/linux/autoconf.h    -c -o .tmp_kallsyms3.o .tmp_kallsyms3.S

deps_.tmp_kallsyms3.o := \
  .tmp_kallsyms3.S \
  include/asm/types.h \
    $(wildcard include/config/highmem64g.h) \
    $(wildcard include/config/lbd.h) \
    $(wildcard include/config/lsf.h) \

.tmp_kallsyms3.o: $(deps_.tmp_kallsyms3.o)

$(deps_.tmp_kallsyms3.o):
