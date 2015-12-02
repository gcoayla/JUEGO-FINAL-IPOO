#include "arquero.h"

arquero::arquero()
{
	
	vidaJugador = 200;
	venenoJugador = 0;
	escudoJugador = 100;
	fuerzaJugador = 40;
	magiaJugador = 100;
	regeneracionMagia = 20;
	campaña = 0;
	pociones = 4;
	habilidad = 1;
}
void arquero::atacar(enemigo &enemigo) {
	cout << nombreJugador << " hace " << fuerzaJugador*0.3 << " de daño a " << enemigo.getNombreEne() << endl;
	enemigo.setEscudoEne(enemigo.getEscuEne() - (fuerzaJugador*0.7));
	enemigo.setVidaEne(enemigo.getVidaEne() - fuerzaJugador*0.3);
}
void arquero::ataqueEspecial(enemigo &enemigo) {
	cout << nombreJugador << " hace " << fuerzaJugador*0.5 << " de daño a " << enemigo.getNombreEne() << endl;
	enemigo.setVidaEne(enemigo.getVidaEne() - fuerzaJugador*0.5);
}
void arquero::curarEncantamientos() {
	cout << "Se te ha liberado de todas las maldiciones" << endl;
	venenoJugador = 0;
}
void arquero::pocionSalud() {
	if (pociones <= 0) {
		cout << "   No tienes pociones" << endl;
	}
	else
	{
		cout << "Recuperas 40 puntos de vida" << endl;
		vidaJugador = vidaJugador + 40;
	}
}


