CAL.exe:main.o big2.o big3.o fact.o fibonacci.o palindrome.o sorting.o reverse.o sumof2.o
	gcc -o CAL.exe main.o big2.o big3.o fact.o fibonacci.o palindrome.o sorting.o reverse.o sumof2.o
main.o:main.c
	gcc -c main.c
big2.o:big2.c
	gcc -c big2.c
big3.o:big3.c
	gcc -c big3.c
fact.o:fact.c
	gcc -c fact.c
fibonacci.o:fibonacci.c
	gcc -c fibonacci.c
palindrome.o:palindrome.c
	gcc -c palindrome.c
sorting.o:sorting.c
	gcc -c sorting.c
reverse.o:reverse.c
	gcc -c reverse.c
sumof2.o:sumof2.c
	gcc -c sumof2.c

