#include <program1.h>
#include "Mapa.h"
#include "Jugador.h"

principal
	
	Mapa Nivel(20,10);
	  Logico GameOver = FALSO;
	Caracter  Teclado = ' ';
	Jugador J1('@', 2, 3, Nivel);
	
	repetir
		J1.verPosicion();
		Nivel.Ver();
		leeTecla(Teclado);
		limpiar;
		J1.Mover(Teclado,Nivel);
		
	hasta( GameOver )
	
finPrincipal

/*
	H*Alto+X+H
	3*Alto+1+3
12
23
	12+12-1 = 23
34
	23+12-1 = 34
	
	*/
