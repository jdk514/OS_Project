cmd_security/built-in.o :=  ld -m elf_i386 -m elf_i386  -r -o security/built-in.o security/keys/built-in.o security/security.o security/dummy.o security/inode.o security/selinux/built-in.o security/commoncap.o security/capability.o
