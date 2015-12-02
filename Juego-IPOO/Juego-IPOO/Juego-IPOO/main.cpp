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
#include "nivel.h"
#include "arquero.h"
#include "guerrero.h"
#include "mago.h"
#include "tutorial.h"
#include "nivel1.h"
void main() {
	logo();
	Sleep(2000);
	system("cls");
	int eleccionJugador = elegir();
	cout << "Escoja un nick:" << endl;
	string nombre;
	cin >> nombre;
	system("cls");
	guerrero guerrero;
	arquero arquero;
	mago mago;
	guerrero.setNombre(nombre);
	arquero.setNombre(nombre);
	mago.setNombre(nombre);
	menu(eleccionJugador, guerrero, arquero, mago);




}