programa5_1: programa5_1.cpp PoligonoIrreg.o
	g++ programa5_1.cpp PoligonoIrreg.o Coordenada.o -o programa5_1
	g++ programa5_1_2.cpp PoligonoIrreg.o Coordenada.o -o programa5_1_2

PoligonoIrreg.o: PoligonoIrreg.cpp PoligonoIrreg.h Coordenada.o
	g++ PoligonoIrreg.cpp -c
Coordenada.o: Coordenada.cpp Coordenada.h
	g++ Coordenada.cpp -c
	