cmd_arch/i386/kernel/built-in.o :=  ld -m elf_i386 -m elf_i386  -R arch/i386/kernel/vsyscall-syms.o -r -o arch/i386/kernel/built-in.o arch/i386/kernel/process.o arch/i386/kernel/semaphore.o arch/i386/kernel/signal.o arch/i386/kernel/entry.o arch/i386/kernel/traps.o arch/i386/kernel/irq.o arch/i386/kernel/ptrace.o arch/i386/kernel/time.o arch/i386/kernel/ioport.o arch/i386/kernel/ldt.o arch/i386/kernel/setup.o arch/i386/kernel/i8259.o arch/i386/kernel/sys_i386.o arch/i386/kernel/pci-dma.o arch/i386/kernel/i386_ksyms.o arch/i386/kernel/i387.o arch/i386/kernel/bootflag.o arch/i386/kernel/quirks.o arch/i386/kernel/i8237.o arch/i386/kernel/topology.o arch/i386/kernel/alternative.o arch/i386/kernel/i8253.o arch/i386/kernel/tsc.o arch/i386/kernel/cpu/built-in.o arch/i386/kernel/acpi/built-in.o arch/i386/kernel/reboot.o arch/i386/kernel/apm.o arch/i386/kernel/smp.o arch/i386/kernel/smpboot.o arch/i386/kernel/trampoline.o arch/i386/kernel/mpparse.o arch/i386/kernel/apic.o arch/i386/kernel/nmi.o arch/i386/kernel/io_apic.o arch/i386/kernel/machine_kexec.o arch/i386/kernel/relocate_kernel.o arch/i386/kernel/crash.o arch/i386/kernel/crash_dump.o arch/i386/kernel/kprobes.o arch/i386/kernel/module.o arch/i386/kernel/sysenter.o arch/i386/kernel/vsyscall.o arch/i386/kernel/time_hpet.o arch/i386/kernel/efi.o arch/i386/kernel/efi_stub.o arch/i386/kernel/doublefault.o arch/i386/kernel/vm86.o arch/i386/kernel/early_printk.o arch/i386/kernel/hpet.o arch/i386/kernel/k8.o
