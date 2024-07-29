obj-m := test.o
KDIR := $(HOME)/Desktop/linux
PWD := $(shell pwd)

default:
	make ARCH=arm64 CROSS_COMPILE=aarch64-linux-gnu- KBUILD_MODPOST_WARN=1 -C $(KDIR) M=$(PWD) modules

clean:
	make -C $(KDIR) M=$(PWD) clean
