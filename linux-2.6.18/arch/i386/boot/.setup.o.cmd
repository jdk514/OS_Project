cmd_arch/i386/boot/setup.o := gcc -m32 -Wp,-MD,arch/i386/boot/.setup.o.d  -nostdinc -isystem /usr/lib/gcc/i386-redhat-linux/4.1.1/include -D__KERNEL__ -Iinclude  -include include/linux/autoconf.h -D__ASSEMBLY__ -Iinclude/asm-i386/mach-generic -Iinclude/asm-i386/mach-default -traditional -DSVGA_MODE=NORMAL_VGA  -D__BIG_KERNEL__   -c -o arch/i386/boot/setup.o arch/i386/boot/setup.S

deps_arch/i386/boot/setup.o := \
  arch/i386/boot/setup.S \
    $(wildcard include/config/x86/voyager.h) \
    $(wildcard include/config/x86/speedstep/smi.h) \
    $(wildcard include/config/x86/speedstep/smi/module.h) \
    $(wildcard include/config/apm.h) \
    $(wildcard include/config/apm/module.h) \
    $(wildcard include/config/x86/elan.h) \
  include/asm/segment.h \
  include/linux/utsrelease.h \
  include/linux/compile.h \
  include/asm/boot.h \
  include/asm/e820.h \
  include/asm/page.h \
    $(wildcard include/config/x86/use/3dnow.h) \
    $(wildcard include/config/x86/pae.h) \
    $(wildcard include/config/hugetlb/page.h) \
    $(wildcard include/config/highmem4g.h) \
    $(wildcard include/config/highmem64g.h) \
    $(wildcard include/config/page/offset.h) \
    $(wildcard include/config/physical/start.h) \
    $(wildcard include/config/flatmem.h) \
  include/asm-generic/memory_model.h \
    $(wildcard include/config/discontigmem.h) \
    $(wildcard include/config/sparsemem.h) \
    $(wildcard include/config/out/of/line/pfn/to/page.h) \
  include/asm-generic/page.h \
  arch/i386/boot/edd.S \
    $(wildcard include/config/edd.h) \
    $(wildcard include/config/edd/module.h) \
  include/linux/edd.h \
  include/asm/setup.h \
  include/linux/pfn.h \
  arch/i386/boot/video.S \
    $(wildcard include/config/video/.h) \
    $(wildcard include/config/video/svga.h) \
    $(wildcard include/config/video/vesa.h) \
    $(wildcard include/config/video/compact.h) \
    $(wildcard include/config/video/retain.h) \
    $(wildcard include/config/video/local.h) \
    $(wildcard include/config/video/400/hack.h) \
    $(wildcard include/config/video/gfx/hack.h) \
    $(wildcard include/config/video/select.h) \
    $(wildcard include/config/firmware/edid.h) \
  include/linux/config.h \
    $(wildcard include/config/h.h) \

arch/i386/boot/setup.o: $(deps_arch/i386/boot/setup.o)

$(deps_arch/i386/boot/setup.o):
