cmd_arch/i386/kernel/entry.o := gcc -m32 -Wp,-MD,arch/i386/kernel/.entry.o.d  -nostdinc -isystem /usr/lib/gcc/i386-redhat-linux/4.1.1/include -D__KERNEL__ -Iinclude  -include include/linux/autoconf.h -D__ASSEMBLY__ -Iinclude/asm-i386/mach-generic -Iinclude/asm-i386/mach-default -traditional   -c -o arch/i386/kernel/entry.o arch/i386/kernel/entry.S

deps_arch/i386/kernel/entry.o := \
  arch/i386/kernel/entry.S \
    $(wildcard include/config/preempt.h) \
    $(wildcard include/config/trace/irqflags.h) \
    $(wildcard include/config/vm86.h) \
    $(wildcard include/config/x86/mce.h) \
    $(wildcard include/config/stack/unwind.h) \
  include/linux/linkage.h \
  include/asm/linkage.h \
    $(wildcard include/config/x86/alignment/16.h) \
  include/asm/thread_info.h \
    $(wildcard include/config/4kstacks.h) \
    $(wildcard include/config/debug/stack/usage.h) \
  include/linux/compiler.h \
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
  include/asm/asm-offsets.h \
  include/asm/irqflags.h \
  include/asm/errno.h \
  include/asm-generic/errno.h \
  include/asm-generic/errno-base.h \
  include/asm/segment.h \
  include/asm/smp.h \
    $(wildcard include/config/x86/local/apic.h) \
    $(wildcard include/config/x86/io/apic.h) \
    $(wildcard include/config/smp.h) \
    $(wildcard include/config/hotplug/cpu.h) \
  include/asm/desc.h \
  include/asm/ldt.h \
  include/asm/dwarf2.h \
    $(wildcard include/config/unwind/info.h) \
  include/linux/config.h \
    $(wildcard include/config/h.h) \
  include/asm-i386/mach-default/irq_vectors.h \
  include/asm-i386/mach-default/irq_vectors_limits.h \
    $(wildcard include/config/pci/msi.h) \
  include/asm-i386/mach-default/entry_arch.h \
    $(wildcard include/config/x86/smp.h) \
    $(wildcard include/config/x86/mce/p4thermal.h) \
  arch/i386/kernel/syscall_table.S \

arch/i386/kernel/entry.o: $(deps_arch/i386/kernel/entry.o)

$(deps_arch/i386/kernel/entry.o):
