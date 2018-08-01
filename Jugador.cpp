#include "Mapa.h"
#include "Jugador.h"
Jugador::Jugador( Caracter Simbolo, Entero X, Entero H, Mapa porRef Nivel )
: Simbolo(Simbolo), X(X), H(H)
{
	Nivel.elimCar( esto -> X, esto -> H );
}

Procedimiento Jugador::Mover( Caracter porRef Teclado, Mapa porRef Nivel )
{
	segun( Teclado )
		caso 'w': 	si( Nivel.Comparar( PARED, X, H-1) ) entonces
						Nivel.elimCar( X, H ); H--; Nivel.remCar( '@', X, H );  
					finSi
	otroCaso 's': 	si( Nivel.Comparar( PARED, X, H+1) ) entonces
						Nivel.elimCar( X, H ); H++; Nivel.remCar( '@', X, H );
					finSi
	otroCaso 'a': si( Nivel.Comparar( PARED, X-1, H) ) entonces
						Nivel.elimCar( X, H ); X--; Nivel.remCar( '@', X, H );
					finSi
	otroCaso 'd': si( Nivel.Comparar( PARED, X+1, H) ) entonces
						Nivel.elimCar( X, H ); X++; Nivel.remCar( '@', X, H );
					finSi
		sale;
	finSegun
		
		Teclado = ' ';
}

Procedimiento Jugador::verPosicion()
{
	mostrar << "\t X: " << X << "  Y: " << H << salto; 
}
