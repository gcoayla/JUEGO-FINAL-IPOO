#pragma once
#include "jugador.h"
class arquero :
	public jugador
{
private:

public:
	arquero();
	void atacar(enemigo &enemigo);
	void ataqueEspecial(enemigo &enemigo);
	void curarEncantamientos();
	void pocionSalud();
};

