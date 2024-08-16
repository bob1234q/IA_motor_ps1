# Variables
CC = gcc
CFLAGS = -Wall -O2
LDFLAGS =

# Archivos
TARGET = psx_game.exe
OBJS = main.o engine.o model.o

# Regla principal
all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(LDFLAGS) -o $@ $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	del *.o $(TARGET)

.PHONY: all clean
