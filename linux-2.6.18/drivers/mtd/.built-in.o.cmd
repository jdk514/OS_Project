cmd_drivers/mtd/built-in.o :=  ld -m elf_i386 -m elf_i386  -r -o drivers/mtd/built-in.o drivers/mtd/cmdlinepart.o drivers/mtd/chips/built-in.o drivers/mtd/maps/built-in.o drivers/mtd/devices/built-in.o drivers/mtd/nand/built-in.o drivers/mtd/onenand/built-in.o
