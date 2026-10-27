TARGET      := IlluminateX
APPID       := ILUMX0001
CONTENTID   := UP0000-${APPID}_00-0000000000000001

PS3DEV      := /usr/local/ps3dev
PSL1GHT     := $(PS3DEV)/psl1ght
PORTLIBS    := $(PS3DEV)/portlibs/ppu
PATH        := $(PS3DEV)/ppu/bin:$(PATH)

CC          := ppu-gcc
CFLAGS      := -O2 -Wall -mcpu=cell -I$(PSL1GHT)/ppu/include -I$(PORTLIBS)/include
LDFLAGS     := -L$(PSL1GHT)/ppu/lib -L$(PORTLIBS)/lib -lsysfs -lsysutil -lsysprocess -lsysss -lsyssm -lio -lrt -lm

OBJS        := source/main.o source/system.o source/hardware.o source/storage.o source/pkg.o source/network.o source/debug.o

all: $(TARGET).pkg

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(TARGET).elf: $(OBJS)
	$(CC) $(OBJS) $(LDFLAGS) -o $@

$(TARGET).self: $(TARGET).elf
	make_self $(TARGET).elf $(TARGET).self --npdrm

$(TARGET).pkg: $(TARGET).self assets/PARAM.SFO assets/ICON0.PNG
	mkdir -p pkg/USRDIR
	cp $(TARGET).self pkg/USRDIR/EBOOT.BIN
	cp assets/ICON0.PNG pkg/ICON0.PNG
	cp assets/PARAM.SFO pkg/PARAM.SFO
	pkg.py --contentid $(CONTENTID) pkg/ $(TARGET).pkg
	rm -rf pkg
