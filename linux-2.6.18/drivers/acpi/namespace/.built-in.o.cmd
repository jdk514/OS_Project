cmd_drivers/acpi/namespace/built-in.o :=  ld -m elf_i386 -m elf_i386  -r -o drivers/acpi/namespace/built-in.o drivers/acpi/namespace/nsaccess.o drivers/acpi/namespace/nsload.o drivers/acpi/namespace/nssearch.o drivers/acpi/namespace/nsxfeval.o drivers/acpi/namespace/nsalloc.o drivers/acpi/namespace/nseval.o drivers/acpi/namespace/nsnames.o drivers/acpi/namespace/nsutils.o drivers/acpi/namespace/nsxfname.o drivers/acpi/namespace/nsdump.o drivers/acpi/namespace/nsinit.o drivers/acpi/namespace/nsobject.o drivers/acpi/namespace/nswalk.o drivers/acpi/namespace/nsxfobj.o drivers/acpi/namespace/nsparse.o