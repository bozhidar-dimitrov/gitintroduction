main.out: main.c
	gcc main.c -o main.out

clean:
	rm -f *.o *.out