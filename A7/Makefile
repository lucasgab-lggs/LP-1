#SEU MAKEFILE
PROG = aluno
CC = g++
FLAGS = -Wall -pedantic -Iinclude

$(PROG):	main.o aluno.o
	$(CC) $(FLAGS) -o $(PROG) main.o aluno.o
	mkdir bin
	mv aluno bin/

main.o:		src/main.cpp include/aluno.h
	$(CC) $(FLAGS) -c src/main.cpp

aluno.o:	src/aluno.cpp include/aluno.h
	$(CC) $(FLAGS) -c src/aluno.cpp

clean:
	rm *.o $(PROG)