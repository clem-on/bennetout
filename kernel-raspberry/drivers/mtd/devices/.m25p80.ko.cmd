cmd_drivers/mtd/devices/m25p80.ko := arm-linux-gnueabihf-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o drivers/mtd/devices/m25p80.ko drivers/mtd/devices/m25p80.o drivers/mtd/devices/m25p80.mod.o