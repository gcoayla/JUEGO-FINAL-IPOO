#pragma once
#include <iostream>
#include <string>
#include <windows.h>
#include <stdlib.h>
#include <time.h> 
#include "enemigo.h"
using namespace std;
class jugador{
protected:
	string nombreJugador;
	int vidaJugador;
	int venenoJugador;
	int fuerzaJugador;
	int magiaJugador;
	int escudoJugador;
	int regeneracionMagia;
	int campa�a;
	int pociones;
	int habilidad;
public:
	int getVida() { return vidaJugador; };
	int getVeneno() { return venenoJugador; };
	int getFuerza() { return fuerzaJugador; };
	int getMagia() { return magiaJugador; };
	int getEscudo() { return escudoJugador; };
	int getRegeMagia() { return regeneracionMagia; };
	int getCampa�a() { return campa�a; };
	int getPociones() { return pociones; };
	int getHabilidad() { return habilidad; };
	void setCampa�a(int avance) { campa�a = avance; }
	void setVida(int vida) { vidaJugador = vida; }
	void setEscudo(int escudo) { vidaJugador = escudo; }
	void setVeneno(int veneno) { venenoJugador = veneno; }
	void setHabilidad(int hab) { habilidad = hab; }
	void setFuerza(int hab) { fuerzaJugador = hab; }
	void setNombre(string nombre) { nombreJugador = nombre; }
	string getNombre() { return nombreJugador; };

};

