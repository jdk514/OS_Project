cmd_arch/i386/kernel/k8.o := ld -m elf_i386 -m elf_i386  -R arch/i386/kernel/vsyscall-syms.o -r -o arch/i386/kernel/k8.o arch/i386/kernel/../../x86_64/kernel/k8.o
