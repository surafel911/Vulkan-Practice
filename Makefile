CC = clang

BINARY = vulkan-dev

CFLAGS = -m64 -Wall -Werror -std=c99

INCDIR =  -I include -I /usr/include/

LIBDIR = -L /usr/lib/

LIBRARIES = -l dl -l glfw

SOURCES = src/*.c test/main.c

all: debug

debug:
	$(CC) -g $(CFLAGS) -o bin/$(BINARY) $(INCDIR) $(LIBDIR) $(LIBRARIES) $(SOURCES)

release:
	$(CC) -O3 $(CFLAGS) -o bin/$(BINARY) $(INCDIR) $(LIBDIR) $(LIBRARIES) $(SOURCES)
