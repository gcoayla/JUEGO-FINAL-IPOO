#pragma once
#include "jugador.h"
class guerrero :
	public jugador
{
private:

public:
	guerrero();
	void atacar(enemigo &enemigo);
	void ataqueEspecial(enemigo &enemigo);
	void curarEncantamientos();
	void pocionSalud();
};

