cmd_drivers/bluetooth/btmrvl_sdio.ko := arm-linux-gnueabihf-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o drivers/bluetooth/btmrvl_sdio.ko drivers/bluetooth/btmrvl_sdio.o drivers/bluetooth/btmrvl_sdio.mod.o