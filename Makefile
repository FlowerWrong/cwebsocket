.DEFAULT_GOAL = c

c:
	gcc server.c -o server -I/usr/local/include -L/usr/local/lib -lzlog

s:
	./server

sd:
	./server -D
