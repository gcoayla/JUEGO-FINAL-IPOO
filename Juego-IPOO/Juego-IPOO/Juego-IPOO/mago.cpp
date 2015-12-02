#include "mago.h"

mago::mago()
{
	vidaJugador = 250;
	venenoJugador = 0;
	escudoJugador = 50;
	fuerzaJugador = 20;
	magiaJugador = 150;
	regeneracionMagia = 40;
	campaña = 0;
	pociones = 4;
	habilidad = 1;
}
void mago::atacar(enemigo &enemigo) {
	cout << nombreJugador << " hace " << fuerzaJugador*0.3 << " de daño a " << enemigo.getNombreEne() << endl;
	enemigo.setEscudoEne(enemigo.getEscuEne() - (fuerzaJugador*0.7));
	enemigo.setVidaEne(enemigo.getVidaEne() - fuerzaJugador*0.3);
}
void mago::ataqueEspecial(enemigo &enemigo) {
	cout << nombreJugador << " hace " << fuerzaJugador*0.5 << " de daño a " << enemigo.getNombreEne() << endl;
	enemigo.setVidaEne(enemigo.getVidaEne() - fuerzaJugador*0.5);
}
void mago::curarEncantamientos() {
	cout << "Se te ha liberado de todas las maldiciones" << endl;
	venenoJugador = 0;
}
void mago::pocionSalud() {
	if (pociones <= 0) {
		cout << "   No tienes pociones" << endl;
	}
	else
	{
		cout << "Recuperas 40 puntos de vida" << endl;
		vidaJugador = vidaJugador + 40;
	}
}

