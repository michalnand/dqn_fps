
INC+= -I.
INC+= -I../libs

LIBS+= ../libs/libs_dqn_fps.a

CC = g++
LD = g++



CFLAGS = $(DEGUBFLAGS) -O2 -Os -s -Wall -Wextra -pedantic -std=c++17 $(INC)
LDFLAGS = $(DEGUBFLAGS) -lstdc++fs -lm -lpthread -pthread -std=c++17 -lglut -lGL -lGLU -lX11 -ljsoncpp -L/usr/local/cuda/lib64 -lcuda -lcudart

SRCS+= $(shell find -name '*.cpp')

OBJS = $(SRCS:.cpp=.o)

ELFS = $(SRCS:.cpp=.elf)

OUTPUT_DIR = ../bins/

all: $(ELFS)

%.elf: %.o
	$(LD) -o $(OUTPUT_DIR)$@ $< $(LIBS) $(LDFLAGS)

%.o: %.cpp
	$(CC) -c $(CFLAGS) $< -o $@

clean:
	rm $(OBJS) -f
	rm $(ELFS) -f
