#pragma once
#include <iostream>
#include <string>
#include <windows.h>
#include <stdlib.h>
using namespace std;
#include "menu.h"
#include "arte.h"
#include "jugador.h"
#include "enemigo.h"
#include "arquero.h"
#include "guerrero.h"
#include "mago.h"
#include "tutorial.h"
#include "nivel1.h"
int elegir();
void menu(int eleccion, guerrero &guerrero, arquero &arquero, mago &mago);
void creditos();
void estadisticas(int eleccion, guerrero &guerrero, arquero &arquero, mago &mago);
void iniciarJuego(int estadoCampaña,int eleccion, guerrero &guerrero, arquero &arquero, mago &mago);
void niveles(int eleccion, guerrero &guerrero, arquero &arquero, mago &mago);
int contCampaña();