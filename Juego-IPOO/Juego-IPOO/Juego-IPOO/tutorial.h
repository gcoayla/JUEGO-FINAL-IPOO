#pragma once
#include <iostream>
#include <string>
#include <windows.h>
#include <stdlib.h>
#include <time.h> 
using namespace std;
#include "menu.h"
#include "arte.h"
#include "jugador.h"
#include "enemigo.h"

class tutorial
{
private:
	int numeroNivel;
	int numeroEnemigos;
public:
	tutorial();
	tutorial(int a,int b);
	int getNumeroNivel() { return numeroNivel; };
	int getNumeroEnemigos() { return numeroEnemigos; };
	void enfrentar(guerrero &guerrero);
	void enfrentar(arquero &arquero);
	void enfrentar(mago &mago);
	int turnoGuerrero(guerrero &soldado, enemigo &enemigo);
	int turnoMounstruo(guerrero &soldado, enemigo &enemigo);
	int turnoArquero(arquero &soldado, enemigo &enemigo);
	int turnoMounstruo(arquero &soldado, enemigo &enemigo);
	int turnoMounstruo(mago &soldado, enemigo &enemigo);
	int turnoMago(mago &soldado, enemigo &enemigo);
	
};

