cmd_fs/partitions/built-in.o :=  ld -m elf_i386 -m elf_i386  -r -o fs/partitions/built-in.o fs/partitions/check.o fs/partitions/amiga.o fs/partitions/mac.o fs/partitions/msdos.o fs/partitions/osf.o fs/partitions/sgi.o fs/partitions/sun.o fs/partitions/efi.o fs/partitions/karma.o
