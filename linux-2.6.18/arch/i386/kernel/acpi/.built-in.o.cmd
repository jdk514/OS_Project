cmd_arch/i386/kernel/acpi/built-in.o :=  ld -m elf_i386 -m elf_i386  -r -o arch/i386/kernel/acpi/built-in.o arch/i386/kernel/acpi/boot.o arch/i386/kernel/acpi/earlyquirk.o arch/i386/kernel/acpi/sleep.o arch/i386/kernel/acpi/wakeup.o arch/i386/kernel/acpi/cstate.o arch/i386/kernel/acpi/processor.o
