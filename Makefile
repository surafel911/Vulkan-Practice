CC = clang

CFLAGS = \
		-m64 \
		-Wall \
		-Werror \
		-std=c99 \

INCDIR = \
		-Iinclude \
		-I/usr/include/ \
		-I/usr/include/vulkan \

LIBDIR = -L/usr/lib/

LIBRARIES = \
		-lvulkan

SOURCES = src/*.c

all: test

test:
	$(CC) -g $(CFLAGS) -o bin/$@ $(INCDIR) $(LIBDIR) $(LIBRARIES) $(SOURCES)

perf:
	$(CC) -O3 $(CFLAGS) -o bin/$@ $(INCDIR) $(LIBDIR) $(LIBRARIES) $(SOURCES)
