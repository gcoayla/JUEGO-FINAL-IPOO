#pragma once
#include <iostream>
#include <string>
using namespace std;
class enemigo
{
protected:
	int vidaEnemigo;
	int escudoEnemigo;
	int fuerzaEnemigo;
	string nombreEnemigo;

public:
	enemigo();
	enemigo(int escudo, int vida, int fuerza,string nombre);
	int getVidaEne() { return vidaEnemigo; };
	int getEscuEne() { return escudoEnemigo; };
	int getFuerzaEne() { return fuerzaEnemigo; };
	string getNombreEne() { return nombreEnemigo; };
	void setVidaEne(int vida) { vidaEnemigo = vida; }
	void setEscudoEne(int escudo) { escudoEnemigo = escudo; }
};

