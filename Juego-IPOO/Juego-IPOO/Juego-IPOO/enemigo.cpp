#include "enemigo.h" 
enemigo::enemigo(){
	nombreEnemigo = "Moustruo de las Cavernas";
	escudoEnemigo = 20;
	fuerzaEnemigo = 10;
	vidaEnemigo = 50;
}
enemigo::enemigo(int escudo, int vida, int fuerza, string nombre) {
	nombreEnemigo =nombre;
	escudoEnemigo = escudo;
	fuerzaEnemigo = fuerza;
	vidaEnemigo = vida;
}


