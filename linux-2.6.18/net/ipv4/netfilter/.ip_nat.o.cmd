cmd_net/ipv4/netfilter/ip_nat.o := ld -m elf_i386 -m elf_i386  -r -o net/ipv4/netfilter/ip_nat.o net/ipv4/netfilter/ip_nat_core.o net/ipv4/netfilter/ip_nat_helper.o net/ipv4/netfilter/ip_nat_proto_unknown.o net/ipv4/netfilter/ip_nat_proto_tcp.o net/ipv4/netfilter/ip_nat_proto_udp.o net/ipv4/netfilter/ip_nat_proto_icmp.o