.DEFAULT_GOAL = c

c:
	gcc -g -Wall -v tools.c server.c -I/usr/local/include -L/usr/local/lib -lhttp_parser -lzlog -o server

s:
	ldd server
	./server

sd:
	./server -D

clean:
