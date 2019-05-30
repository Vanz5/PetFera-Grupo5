petfera: main.o consultar.o cadastrar.o classes.o
	g++ -Wall -ansi -pedantic -pg main.o consultar.o cadastrar.o classes.o -o petfera -std=c++11

main.o: main.cpp funcoes.h classes.h
	g++ -Wall -ansi -pedantic -g -O0 -pg -c main.cpp -std=c++11

consultar.o: consultar.cpp funcoes.h classes.h
	g++ -Wall -ansi -pedantic -g -O0 -pg -c consultar.cpp -std=c++11

cadastrar.o: cadastrar.cpp funcoes.h classes.h
	g++ -Wall -ansi -pedantic -g -O0 -pg -c cadastrar.cpp -std=c++11

classes.o: classes.cpp funcoes.h classes.h
	g++ -Wall -ansi -pedantic -g -O0 -pg -c classes.cpp -std=c++11
