devops.exe : main.o hello.o add2no.o oddoreven.o
	gcc -o devops.exe main.o hello.o add2no.o oddoreven.o
main.o : main.c
	gcc -c main.c
hello.o : hello.c
	gcc -c hello.c
add2no.o : add2no.c
	gcc -c add2no.c
oddoreven.o : oddoreven.c
	gcc -c oddoreven.c
