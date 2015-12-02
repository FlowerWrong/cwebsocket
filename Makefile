.DEFAULT_GOAL = c

c:
	gcc main.c -o server -I/usr/local/include -L/usr/local/lib -lzlog
