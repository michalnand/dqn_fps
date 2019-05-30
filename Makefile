LIBS_RYSY_PATH=$(HOME)/libs/rysy

export LIBS_RYSY_PATH


all:
	cd libs && make -j4
	cd src && make -j4


clean:
	cd libs && make clean
	cd src && make clean
