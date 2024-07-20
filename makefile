devops.exe : main.o hello.o add2no.o
	gcc -o devops.exe main.o hello.o add2no.o
main.o : main.c
	gcc -c main.c
hello.o : hello.c
	gcc -c hello.c
add2no.o : add2no.c
	gcc -c add2no.c
