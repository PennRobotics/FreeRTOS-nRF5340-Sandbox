CC=gcc

blinkies: main.c
	$(CC) -Wall -O0 -Ibuild -o build/blinkies main.c

leakcheck:
	valgrind --leak-check=full --leak-resolution=med --track-origins=yes ./build/blinkies
