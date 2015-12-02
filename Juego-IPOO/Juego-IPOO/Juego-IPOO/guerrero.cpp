#include "guerrero.h"

guerrero::guerrero()
{

	vidaJugador = 100;
	venenoJugador = 0;
	escudoJugador = 200;
	fuerzaJugador = 50;
	magiaJugador = 50;
	regeneracionMagia = 10;
	campaña = 0;
	pociones = 3;
	habilidad = 1;
}
void guerrero::atacar(enemigo &enemigo) {
	cout << nombreJugador << " hace " << fuerzaJugador*0.3 << " de daño a " << enemigo.getNombreEne() << endl;
	enemigo.setEscudoEne(enemigo.getEscuEne()-(fuerzaJugador*0.7));
	enemigo.setVidaEne(enemigo.getVidaEne() - fuerzaJugador*0.3);
}
void guerrero::ataqueEspecial(enemigo &enemigo) {
	cout << nombreJugador << " hace " <<fuerzaJugador*0.5 << " de daño a " << enemigo.getNombreEne() << endl;
	enemigo.setVidaEne(enemigo.getVidaEne() - fuerzaJugador*0.5);
}
void guerrero::curarEncantamientos() {
	cout << "Se te ha liberado de todas las maldiciones" << endl;
	venenoJugador = 0;
}
void guerrero::pocionSalud() {
	if (pociones <= 0) {
		cout << "   No tienes pociones" << endl;
	}
	else
	{
		cout << "Recuperas 40 puntos de vida" << endl;
		vidaJugador = vidaJugador + 40;
		pociones = pociones - 1;
	}
}


