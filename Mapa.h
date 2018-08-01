#ifndef MAPA_H
#define MAPA_H
#define PARED 																	'#'

#include <program1.h>


Estructura Mapa
{
	privado:
		Entero  Alto;
		Entero Ancho;
		
		Caracter Contenido[30][20];
		
		Logico Visibilidad;	
		
	publico:
			Mapa( Entero Ancho, Entero Alto );
	
			Logico Ver();
	
		   Logico   Comparar( Caracter Simbolo, Entero X, Entero H );
	Procedimiento  remCar( Caracter   Letra, Entero X, Entero H );
	Procedimiento remCadX( Cadena Palabra, Entero X, Entero H );
	Procedimiento remCadH( Cadena Palabra, Entero X, Entero H );
	
	Procedimiento elimCar( Entero X, Entero H );
	
	Procedimiento elimCadX( Entero X, Entero H, Entero Ancho );
	Procedimiento elimCadH( Entero X, Entero H, Entero  Alto );
};

#endif
