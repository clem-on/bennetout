cmd_drivers/media/radio/radio-shark.ko := arm-linux-gnueabihf-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o drivers/media/radio/radio-shark.ko drivers/media/radio/radio-shark.o drivers/media/radio/radio-shark.mod.o