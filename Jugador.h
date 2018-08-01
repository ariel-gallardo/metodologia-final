#ifndef JUGADOR_H
#define JUGADOR_H
#include <program1.h>

Estructura Jugador
{
	protegido:
		Caracter Simbolo;
		Entero X;
		Entero H;
		
	publico:
		Jugador( Caracter Simbolo, Entero X, Entero H, Mapa porRef );
		Procedimiento Mover( Caracter porRef, Mapa porRef Nivel );
		Procedimiento verPosicion();
};

#endif
