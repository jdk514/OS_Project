cmd_drivers/net/built-in.o :=  ld -m elf_i386 -m elf_i386  -r -o drivers/net/built-in.o drivers/net/Space.o drivers/net/loopback.o drivers/net/tokenring/built-in.o drivers/net/pcmcia/built-in.o drivers/net/wireless/built-in.o drivers/net/tulip/built-in.o
