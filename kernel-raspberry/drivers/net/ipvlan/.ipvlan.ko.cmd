cmd_drivers/net/ipvlan/ipvlan.ko := arm-linux-gnueabihf-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o drivers/net/ipvlan/ipvlan.ko drivers/net/ipvlan/ipvlan.o drivers/net/ipvlan/ipvlan.mod.o
