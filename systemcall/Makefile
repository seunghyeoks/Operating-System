
all: p1 p2 p3 p4

clean:
	rm -f p1 p2 p3 p4

p1: p1_fork.c
	gcc -o p1 p1_fork.c -Wall

p2: p2_wait.c
	gcc -o p2 p2_wait.c -Wall

p3: p3_exec.c
	gcc -o p3 p3_exec.c -Wall

p4: p4_open.c
	gcc -o p4 p4_open.c -Wall

