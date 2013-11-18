cmd_net/ipv4/netfilter/ip_conntrack_helper_h323_asn1.o := gcc -m32 -Wp,-MD,net/ipv4/netfilter/.ip_conntrack_helper_h323_asn1.o.d  -nostdinc -isystem /usr/lib/gcc/i386-redhat-linux/4.1.1/include -D__KERNEL__ -Iinclude  -include include/linux/autoconf.h -Wall -Wundef -Wstrict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -Os -pipe -msoft-float -mpreferred-stack-boundary=2  -march=i686 -mtune=generic -mregparm=3 -ffreestanding -Iinclude/asm-i386/mach-generic -Iinclude/asm-i386/mach-default -fomit-frame-pointer -g  -fno-stack-protector -Wdeclaration-after-statement -Wno-pointer-sign   -DMODULE -D"KBUILD_STR(s)=\#s" -D"KBUILD_BASENAME=KBUILD_STR(ip_conntrack_helper_h323_asn1)"  -D"KBUILD_MODNAME=KBUILD_STR(ip_conntrack_h323)" -c -o net/ipv4/netfilter/.tmp_ip_conntrack_helper_h323_asn1.o net/ipv4/netfilter/ip_conntrack_helper_h323_asn1.c

deps_net/ipv4/netfilter/ip_conntrack_helper_h323_asn1.o := \
  net/ipv4/netfilter/ip_conntrack_helper_h323_asn1.c \
  include/linux/kernel.h \
    $(wildcard include/config/preempt/voluntary.h) \
    $(wildcard include/config/debug/spinlock/sleep.h) \
    $(wildcard include/config/printk.h) \
  /usr/lib/gcc/i386-redhat-linux/4.1.1/include/stdarg.h \
  include/linux/linkage.h \
  include/asm/linkage.h \
    $(wildcard include/config/x86/alignment/16.h) \
  include/linux/stddef.h \
  include/linux/compiler.h \
  include/linux/compiler-gcc4.h \
    $(wildcard include/config/forced/inlining.h) \
  include/linux/compiler-gcc.h \
  include/linux/types.h \
    $(wildcard include/config/uid16.h) \
    $(wildcard include/config/resources/64bit.h) \
  include/linux/posix_types.h \
  include/asm/posix_types.h \
  include/asm/types.h \
    $(wildcard include/config/highmem64g.h) \
    $(wildcard include/config/lbd.h) \
    $(wildcard include/config/lsf.h) \
  include/linux/bitops.h \
  include/asm/bitops.h \
  include/asm/alternative.h \
    $(wildcard include/config/smp.h) \
  include/asm-generic/bitops/sched.h \
  include/asm-generic/bitops/hweight.h \
  include/asm-generic/bitops/fls64.h \
  include/asm-generic/bitops/ext2-non-atomic.h \
  include/asm-generic/bitops/le.h \
  include/asm/byteorder.h \
    $(wildcard include/config/x86/bswap.h) \
  include/linux/byteorder/little_endian.h \
  include/linux/byteorder/swab.h \
  include/linux/byteorder/generic.h \
  include/asm-generic/bitops/minix.h \
  include/asm/bug.h \
    $(wildcard include/config/bug.h) \
    $(wildcard include/config/debug/bugverbose.h) \
  include/asm-generic/bug.h \
  include/linux/netfilter_ipv4/ip_conntrack_helper_h323_asn1.h \
  include/linux/netfilter_ipv4/ip_conntrack_helper_h323_types.h \
  net/ipv4/netfilter/ip_conntrack_helper_h323_types.c \

net/ipv4/netfilter/ip_conntrack_helper_h323_asn1.o: $(deps_net/ipv4/netfilter/ip_conntrack_helper_h323_asn1.o)

$(deps_net/ipv4/netfilter/ip_conntrack_helper_h323_asn1.o):
