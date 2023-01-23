CC=gcc

blinkies: main.c
	$(CC) -Wall -O0 -o blinkies main.c

leakcheck:
	valgrind --leak-check=full --leak-resolution=med --track-origins=yes ./blinkies
