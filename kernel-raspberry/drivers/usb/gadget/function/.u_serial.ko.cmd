cmd_drivers/usb/gadget/function/u_serial.ko := arm-linux-gnueabihf-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o drivers/usb/gadget/function/u_serial.ko drivers/usb/gadget/function/u_serial.o drivers/usb/gadget/function/u_serial.mod.o