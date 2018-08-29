
prac_compo: programa4.cpp Rectangulo.o
	g++ programa4.cpp Rectangulo.o Coordenada.o -o programa4
Rectangulo.o: Rectangulo.cpp Coordenada.o Rectangulo.h
	g++ Rectangulo.cpp -c
Coordenada.o: Coordenada.cpp Coordenada.h
	g++ Coordenada.cpp -c
