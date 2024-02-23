TARGET	=	pacman
CC			= gcc
CFLAGS	= -Wall -Wextra -Werror
SOURCES =	./src/main.c
OBJECTS	=	$(SOURCES:.c=.o)

all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CC) $(CFLAGS) $^ -o $@

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJECTS) $(TARGET)

run: $(TARGET)
	./$(TARGET)

.PHONY: all clean run 
