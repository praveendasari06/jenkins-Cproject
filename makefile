ABC.exe:main.o big3.o fact.o rev.o palindrome.o date.o version.o
	gcc -o ABC.exe main.o big3.o fact.o rev.o palindrome.o date.o version.o
main.o:main.c
	gcc -c main.c
big3.o:big3.c
	gcc -c big3.c
fact.o:fact.c
	gcc -c fact.c
rev.o:rev.c
	gcc -c rev.c
palindrome.o:palindrome.c
	gcc -c palindrome.c
date.o:date.c
	gcc -c date.c
version.o:version.c
	gcc -c version.c
clean:
	rm -f *.o main

