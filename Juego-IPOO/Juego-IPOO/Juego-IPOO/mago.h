#pragma once
#include "jugador.h"
class mago :
	public jugador
{
private:

public:
	mago();
	void atacar(enemigo &enemigo);
	void ataqueEspecial(enemigo &enemigo);
	void curarEncantamientos();
	void pocionSalud();
};

