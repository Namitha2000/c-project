CFLAGS = -Wall -fPIE
LDFLAGS = -no-pie

ABC.exe: main.o biggest3.o factorial.o
	gcc $(LDFLAGS) -o ABC.exe main.o biggest3.o factorial.o

main.o: main.c
	gcc $(CFLAGS) -c main.c

biggest3.o: biggest3.c
	gcc $(CFLAGS) -c biggest3.c

factorial.o: factorial.c
	gcc $(CFLAGS) -c factorial.c

clean:
	rm -f *.o ABC.exe

