TARGET	=	pacman
CC			= gcc
CFLAGS	= -Wall -Wextra -Werror -I./raylib/src
LDFLAGS	=	-L./raylib/src -lraylib -lGL -lm -lpthread -ldl -lrt -lX11
SOURCES =	./src/main.c	\
					./src/player/player.c
OBJECTS	=	$(SOURCES:.c=.o)

all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CC) $(CFLAGS) $^ -o $@ $(LDFLAGS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@ $(LDFLAGS)

init:
	git clone https://github.com/raysan5/raylib.git raylib
	make -C raylib/src PLATFORM=PLATFORM_DESKTOP

clean:
	rm -rf $(OBJECTS) $(TARGET)

clean_all: clean
	rm -rf raylib

re: clean all

reset: clean_all init all

run: all
	./$(TARGET)

.PHONY: all init clean re reset run 
