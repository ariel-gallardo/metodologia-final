#include "Mapa.h"
Mapa::Mapa( Entero Ancho, Entero Alto )
: Alto(Alto), Ancho(Ancho)
{
	si( Ancho > 0 Y Ancho < 50 Y Alto > 0 Y Alto < 20 ) entonces
		variarMas1( Alto , 1, esto -> Alto )
			variarMas1( Ancho , 1, esto -> Ancho )
				si( Alto > 1 Y Alto < esto -> Alto ) entonces
					si( Ancho ES 1 O Ancho ES esto -> Ancho ) entonces
						Contenido[Ancho][Alto] = PARED;
					sino
						Contenido[Ancho][Alto] = ' ';
					finSi
				sino
						Contenido[Ancho][Alto] = PARED;
				finSi
			finVariar
					Contenido[Ancho][Alto] = '\n';
		finVariar
		Visibilidad = FALSO;
		
	finSi
	variar( Ancho, 0, esto -> Ancho -3, 1 )
		si(esPar(Ancho)) entonces
			remCadH( "######## ",Ancho+2,2 );
		sino
			remCadH( "######## ",Ancho+1,2 );
		finSi
		
		
	finVariar
}

Logico Mapa::Ver()
{
	Entero X = 0, H = 0;
	
	variarMas1( H, 1, Alto )
		variarMas1( X, 1, Ancho )
			mostrar << Contenido[X][H] << flush; 
		finVariar
		mostrar << salto;
	finVariar

	regresa( Visibilidad );
}

Logico Mapa::Comparar( Caracter Simbolo, Entero X, Entero H )
{
	si( Contenido[X][H] NOES Simbolo ) entonces
		regresa( VERDADERO );
	finSi
		
	regresa( FALSO );
}

Procedimiento Mapa::remCar( Caracter Letra, Entero X, Entero H )
{
	Contenido[X][H] = Letra;
}


Procedimiento Mapa::remCadX( Cadena Palabra, Entero X, Entero H )
{
	variarMas1( X, 1, tamanio(Palabra) )
		Contenido[X][H] = Palabra[X-1];
	finVariar
}

Procedimiento Mapa::remCadH( Cadena Palabra, Entero X, Entero H )
{
	variarMas1( H, 1, tamanio(Palabra) )
		Contenido[X][H] = Palabra[H-1];
	finVariar
}


Procedimiento Mapa::elimCar( Entero X, Entero H )
{
	Contenido[X][H] = ' ';
}


Procedimiento Mapa::elimCadX( Entero X, Entero H, Entero Ancho )
{
	variarMas1( X, 1, Ancho )
		Contenido[X][H] = ' ';
	finVariar
}

Procedimiento Mapa::elimCadH( Entero X, Entero H, Entero Alto )
{
	variarMas1( H, 1,  Alto )
		Contenido[X][H] = ' ';
	finVariar
}
