cmd_drivers/bluetooth/hci_uart.ko := arm-linux-gnueabihf-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o drivers/bluetooth/hci_uart.ko drivers/bluetooth/hci_uart.o drivers/bluetooth/hci_uart.mod.o
