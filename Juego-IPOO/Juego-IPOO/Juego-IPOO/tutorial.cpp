#include "tutorial.h"

tutorial::tutorial()
{
	numeroEnemigos = 1;
	numeroNivel = 0;
}
tutorial::tutorial(int a, int b) {
	numeroEnemigos = b;
	numeroNivel = a;
}
void tutorial::enfrentar(guerrero &soldado) {
	int ganar=1;
	guerrero hombre = soldado;
	for (int i = 0; i < numeroEnemigos; i++) {
		srand(time(0));
		int enemigoRand = rand() % 10 + 1;
		int finalizacion;
		if (enemigoRand == 1) {
			enemigo mounstruo(60, 100, 40, "rockball");
			cout << "Te ataca un " <<mounstruo.getNombreEne()<<" !!!!"<< endl;
			finalizacion = turnoGuerrero(hombre, mounstruo);
		}
		else if (enemigoRand == 2) {
			enemigo mounstruo(70, 150, 50, "cuadropter");
			cout << "Te ataca un " << mounstruo.getNombreEne() << " !!!!" << endl;
			finalizacion = turnoGuerrero(hombre, mounstruo);
		}
		else if (enemigoRand == 3) {
			enemigo mounstruo;
			cout << "Te ataca un " << mounstruo.getNombreEne() << " !!!!" << endl;
			finalizacion = turnoGuerrero(hombre, mounstruo);
		}
		else if (enemigoRand == 4) {
			enemigo mounstruo;
			cout << "Te ataca un " << mounstruo.getNombreEne() << " !!!!" << endl;
			finalizacion = turnoGuerrero(hombre, mounstruo);
		}
		else if (enemigoRand == 5) {
			enemigo mounstruo;
			cout << "Te ataca un " << mounstruo.getNombreEne() << " !!!!" << endl;
			finalizacion = turnoGuerrero(hombre, mounstruo);
		}
		else if (enemigoRand == 6) {
			enemigo mounstruo;
			cout << "Te ataca un " << mounstruo.getNombreEne() << " !!!!" << endl;
			finalizacion = turnoGuerrero(hombre, mounstruo);
		}
		else if (enemigoRand == 7) {
			enemigo mounstruo;
			cout << "Te ataca un " << mounstruo.getNombreEne() << " !!!!" << endl;
			finalizacion = turnoGuerrero(hombre, mounstruo);
		}
		else if (enemigoRand == 8) {
			enemigo mounstruo;
			cout << "Te ataca un " << mounstruo.getNombreEne() << " !!!!" << endl;
			finalizacion = turnoGuerrero(hombre, mounstruo);
		}
		else if (enemigoRand == 9) {
			enemigo mounstruo;
			cout << "Te ataca un " << mounstruo.getNombreEne() << " !!!!" << endl;
			finalizacion = turnoGuerrero(hombre, mounstruo);
		}
		else if (enemigoRand == 10) {
			enemigo mounstruo;
			cout << "Te ataca un " << mounstruo.getNombreEne() << " !!!!" << endl;
			finalizacion = turnoGuerrero(hombre, mounstruo);
		}
		if (finalizacion == 0) {
			ganar = 0;
			break;
		}
	}
	if (ganar == 0) {
		cout << "Perdiste" << endl;
	}
	else {
		soldado.setCampaña(getNumeroNivel());
		soldado.setHabilidad(soldado.getHabilidad() + 1);
		cout << "Ganaste" << endl;
	}
}
void tutorial::enfrentar(arquero &soldado) {
	int ganar = 1;
	arquero hombre = soldado;
	for (int i = 0; i < numeroEnemigos; i++) {
		srand(time(0));
		int enemigoRand = rand() % 10 + 1;
		int finalizacion;
		if (enemigoRand == 1) {
			enemigo mounstruo;
			cout << "Te ataca un " << mounstruo.getNombreEne() << " !!!!" << endl;
			finalizacion = turnoArquero(hombre, mounstruo);
		}
		else if (enemigoRand == 2) {
			enemigo mounstruo;
			cout << "Te ataca un " << mounstruo.getNombreEne() << " !!!!" << endl;
			finalizacion = turnoArquero(hombre, mounstruo);
		}
		else if (enemigoRand == 3) {
			enemigo mounstruo;
			cout << "Te ataca un " << mounstruo.getNombreEne() << " !!!!" << endl;
			finalizacion = turnoArquero(hombre, mounstruo);
		}
		else if (enemigoRand == 4) {
			enemigo mounstruo;
			cout << "Te ataca un " << mounstruo.getNombreEne() << " !!!!" << endl;
			finalizacion = turnoArquero(hombre, mounstruo);
		}
		else if (enemigoRand == 5) {
			enemigo mounstruo;
			cout << "Te ataca un " << mounstruo.getNombreEne() << " !!!!" << endl;
			finalizacion = turnoArquero(hombre, mounstruo);
		}
		else if (enemigoRand == 6) {
			enemigo mounstruo;
			cout << "Te ataca un " << mounstruo.getNombreEne() << " !!!!" << endl;
			finalizacion = turnoArquero(hombre, mounstruo);
		}
		else if (enemigoRand == 7) {
			enemigo mounstruo;
			cout << "Te ataca un " << mounstruo.getNombreEne() << " !!!!" << endl;
			finalizacion = turnoArquero(hombre, mounstruo);
		}
		else if (enemigoRand == 8) {
			enemigo mounstruo;
			cout << "Te ataca un " << mounstruo.getNombreEne() << " !!!!" << endl;
			finalizacion = turnoArquero(hombre, mounstruo);
		}
		else if (enemigoRand == 9) {
			enemigo mounstruo;
			cout << "Te ataca un " << mounstruo.getNombreEne() << " !!!!" << endl;
			finalizacion = turnoArquero(hombre, mounstruo);
		}
		else if (enemigoRand == 10) {
			enemigo mounstruo;
			cout << "Te ataca un " << mounstruo.getNombreEne() << " !!!!" << endl;
			finalizacion = turnoArquero(hombre, mounstruo);
		}
		if (finalizacion == 0) {
			ganar = 0;
			break;
		}
	}
	if (ganar == 0) {
		cout << "Perdiste" << endl;
	}
	else {
		soldado.setCampaña(getNumeroNivel());
		soldado.setHabilidad(soldado.getHabilidad() + 1);
		cout << "Ganaste" << endl;
	}
}
void tutorial::enfrentar(mago &soldado) {
	int ganar = 1;
	mago hombre=soldado;
	for (int i = 0; i < numeroEnemigos; i++) {
		srand(time(0));
		int enemigoRand = rand() % 5 + 1;
		int finalizacion;
		if (enemigoRand == 1) {
			enemigo mounstruo;
			cout << "Te ataca un " << mounstruo.getNombreEne() << " !!!!" << endl;
			finalizacion = turnoMago(hombre, mounstruo);
		}
		else if (enemigoRand == 2) {
			enemigo mounstruo;
			cout << "Te ataca un " << mounstruo.getNombreEne() << " !!!!" << endl;
			finalizacion = turnoMago(hombre, mounstruo);
		}
		else if (enemigoRand == 3) {
			enemigo mounstruo;
			cout << "Te ataca un " << mounstruo.getNombreEne() << " !!!!" << endl;
			finalizacion = turnoMago(hombre, mounstruo);
		}
		else if (enemigoRand == 4) {
			enemigo mounstruo;
			cout << "Te ataca un " << mounstruo.getNombreEne() << " !!!!" << endl;
			finalizacion = turnoMago(hombre, mounstruo);
		}
		else if (enemigoRand == 5) {
			enemigo mounstruo;
			cout << "Te ataca un " << mounstruo.getNombreEne() << " !!!!" << endl;
			finalizacion = turnoMago(hombre, mounstruo);
		}
		else if (enemigoRand == 6) {
			enemigo mounstruo;
			cout << "Te ataca un " << mounstruo.getNombreEne() << " !!!!" << endl;
			finalizacion = turnoMago(hombre, mounstruo);
		}
		else if (enemigoRand == 7) {
			enemigo mounstruo;
			cout << "Te ataca un " << mounstruo.getNombreEne() << " !!!!" << endl;
			finalizacion = turnoMago(hombre, mounstruo);
		}
		else if (enemigoRand == 8) {
			enemigo mounstruo;
			cout << "Te ataca un " << mounstruo.getNombreEne() << " !!!!" << endl;
			finalizacion = turnoMago(hombre, mounstruo);
		}
		else if (enemigoRand == 9) {
			enemigo mounstruo;
			cout << "Te ataca un " << mounstruo.getNombreEne() << " !!!!" << endl;
			finalizacion = turnoMago(hombre, mounstruo);
		}
		else if (enemigoRand == 10) {
			enemigo mounstruo;
			cout << "Te ataca un " << mounstruo.getNombreEne() << " !!!!" << endl;
			finalizacion = turnoMago(hombre, mounstruo);
		}
		if (finalizacion == 0) {
			ganar = 0;
			break;
		}
	}
	if (ganar == 0) {
		cout << "Perdiste" << endl;
	}
	else {
		soldado.setCampaña(getNumeroNivel());
		soldado.setHabilidad(soldado.getHabilidad() + 1);
		cout << "Ganaste" << endl;
	}
}
int tutorial::turnoGuerrero(guerrero &soldado, enemigo &enemigo) {
	system("cls");
	catacumbas1();
	cout << "   Turno de " << soldado.getNombre() << "!!!" << endl;
	cout << "" << endl;
	cout << "   ¿Que desear hacer?" << endl;
	cout << "" << endl;
	cout << "     1.-Ataque con espada" << endl;
	cout << "     2.-Ataque Especial " << endl;
	cout << "     3.-Tomar Pocion de vida " << endl;
	cout << "     4.-Curarse Encantamientos " << endl;
	cout << " " << endl;
	cout << "Seleccione una opcíon";
	int opcion;
	cin >> opcion;
	if (opcion == 1) {
		soldado.atacar(enemigo);
	}
	else if (opcion == 2) {
		soldado.ataqueEspecial(enemigo);
	}
	else if (opcion == 3) {
		soldado.pocionSalud();
	}
	else if (opcion == 4) {
		soldado.curarEncantamientos();
	}
	soldado.setVida(soldado.getVida() - soldado.getVeneno());
	cout << "" << endl;
	cout << "Tienes " << soldado.getVida() << " puntos de vida" << endl;
	cout << "  A " <<enemigo.getNombreEne() <<" le queda "<<enemigo.getVidaEne()<<" de vida"<< endl;
	Sleep(5000);
	if (enemigo.getVidaEne() <= 0) {
		return 1;
	}
	else
	{
		return turnoMounstruo(soldado, enemigo);
	}
}
int tutorial::turnoMounstruo(guerrero &soldado, enemigo &enemigo) {
	system("cls");
	catacumbas1();
	cout << "Turno de " << enemigo.getNombreEne() << "!!!" << endl;
	cout << "" << endl;
	srand(time(0));
	int ataque = rand() % 4 + 1;
	if (ataque == 1) {
		cout << enemigo.getNombreEne() << " realiza un ataque normal" << endl;
		soldado.setEscudo(soldado.getEscudo() - (enemigo.getFuerzaEne() *0.3));
		soldado.setVida(soldado.getVida() - (enemigo.getFuerzaEne()*0.3));
	}
	else if (ataque == 2) {
		cout << enemigo.getNombreEne() << " realiza un ataque Fuerte" << endl;
		soldado.setVida(soldado.getVida() - (enemigo.getFuerzaEne()*0.2));
	}
	else if (ataque == 3) {
		cout << enemigo.getNombreEne() << "envenena a " << soldado.getNombre() << " con 10 de daño" << endl;
		soldado.setVeneno(10);
	}
	else if (ataque == 4) {
		cout << enemigo.getNombreEne() << " se cura " << endl;
		enemigo.setVidaEne(enemigo.getVidaEne() + 10);
	}
	cout << "" << endl;
	cout << "Tienes " << soldado.getVida() << " puntos de vida" << endl;
	cout << "  A " << enemigo.getNombreEne() << " le queda " << enemigo.getVidaEne() << " de vida" << endl;
	Sleep(5000);
	if (soldado.getVida() <= 0) {
		return 0;
	}
	else
	{
		return turnoGuerrero(soldado, enemigo);
	}
}
int tutorial::turnoArquero(arquero &soldado, enemigo &enemigo) {
	system("cls");
	catacumbas1();
	cout << "   Turno de " << soldado.getNombre() << "!!!" << endl;
	cout << "" << endl;
	cout << "   ¿Que desear hacer?" << endl;
	cout << "" << endl;
	cout << "     1.-Ataque con arco" << endl;
	cout << "     2.-Ataque Especial " << endl;
	cout << "     3.-Tomar Pocion de vida " << endl;
	cout << "     4.-Curarse Encantamientos " << endl;
	cout << " " << endl;
	cout << "Seleccione una opcíon";
	int opcion;
	cin >> opcion;
	if (opcion == 1) {
		soldado.atacar(enemigo);
	}
	else if (opcion == 2) {
		soldado.ataqueEspecial(enemigo);
	}
	else if (opcion == 3) {
		soldado.pocionSalud();
	}
	else if (opcion == 4) {
		soldado.curarEncantamientos();
	}
	soldado.setVida(soldado.getVida() - soldado.getVeneno());
	cout << "" << endl;
	cout << "Tienes " << soldado.getVida() << " puntos de vida" << endl;
	cout << "  A " << enemigo.getNombreEne() << " le queda " << enemigo.getVidaEne() << " de vida" << endl;
	Sleep(5000);
	if (enemigo.getVidaEne() <= 0) {
		return 1;
	}
	else
	{
		return turnoMounstruo(soldado, enemigo);
	}
}
int tutorial::turnoMounstruo(arquero &soldado, enemigo &enemigo) {
	system("cls");
	catacumbas1();
	cout << "Turno de " << enemigo.getNombreEne() << "!!!" << endl;
	cout << "" << endl;
	srand(time(0));
	int ataque = rand() % 4 + 1;
	if (ataque == 1) {
		cout << enemigo.getNombreEne() << " realiza un ataque normal" << endl;
		soldado.setEscudo(soldado.getEscudo() - (enemigo.getFuerzaEne()*0.8));
		soldado.setVida(soldado.getVida() - (enemigo.getFuerzaEne()*0.2));
	}
	else if (ataque == 2) {
		cout << enemigo.getNombreEne() << " realiza un ataque Fuerte" << endl;
		soldado.setVida(soldado.getVida() - (enemigo.getFuerzaEne()*0.5));
	}
	else if (ataque == 3) {
		cout << enemigo.getNombreEne() << "envenena a " << soldado.getNombre() << " con 10 de daño" << endl;
		soldado.setVeneno(10);
	}
	else if (ataque == 4) {
		cout << enemigo.getNombreEne() << "se cura" << endl;
		enemigo.setVidaEne(enemigo.getVidaEne() + 10);
	}
	cout << "" << endl;
	cout << "Tienes " << soldado.getVida() << " puntos de vida" << endl;
	cout << "  A " << enemigo.getNombreEne() << " le queda " << enemigo.getVidaEne() << " de vida" << endl;
	Sleep(5000);
	if (soldado.getVida() <= 0) {
		return 0;
	}
	else
	{
		return turnoArquero(soldado, enemigo);
	}
}
int tutorial::turnoMounstruo(mago &soldado, enemigo &enemigo) {
	system("cls");
	catacumbas1();
	cout << "Turno de " << enemigo.getNombreEne() << "!!!" << endl;
	cout << "" << endl;
	srand(time(0));
	int ataque = rand() % 4 + 1;
	if (ataque == 1) {
		cout << enemigo.getNombreEne() << " realiza un ataque normal" << endl;
		soldado.setEscudo(soldado.getEscudo() - (enemigo.getFuerzaEne()*0.8));
		soldado.setVida(soldado.getVida() - (enemigo.getFuerzaEne()*0.2));
	}
	else if (ataque == 2) {
		cout << enemigo.getNombreEne() << " realiza un ataque Fuerte" << endl;
		soldado.setVida(soldado.getVida() - (enemigo.getFuerzaEne()*0.5));
	}
	else if (ataque == 3) {
		cout << enemigo.getNombreEne() << "envenena a " << soldado.getNombre() << " con 10 de daño" << endl;
		soldado.setVeneno(10);
	}
	else if (ataque == 4) {
		cout << enemigo.getNombreEne() << "se cura" << endl;
		enemigo.setVidaEne(enemigo.getVidaEne() + 10);
	}
	cout << "" << endl;
	cout << "Tienes " << soldado.getVida() << " puntos de vida" << endl;
	cout << "  A " << enemigo.getNombreEne() << " le queda " << enemigo.getVidaEne() << " de vida" << endl;
	Sleep(5000);
	if (soldado.getVida() <= 0) {
		return 0;
	}
	else
	{
		return turnoMago(soldado, enemigo);
	}
}

int tutorial::turnoMago(mago &soldado, enemigo &enemigo) {
	system("cls");
	catacumbas1();
	cout << "   Turno de " << soldado.getNombre() << "!!!" << endl;
	cout << "" << endl;
	cout << "   ¿Que desear hacer?" << endl;
	cout << "" << endl;
	cout << "     1.-Ataque magico básico" << endl;
	cout << "     2.-Ataque Especial " << endl;
	cout << "     3.-Tomar Pocion de vida " << endl;
	cout << "     4.-Curarse Encantamientos " << endl;
	cout << " " << endl;
	cout << "Seleccione una opcíon";
	int opcion;
	cin >> opcion;
	if (opcion == 1) {
		soldado.atacar(enemigo);
	}
	else if (opcion == 2) {
		soldado.ataqueEspecial(enemigo);
	}
	else if (opcion == 3) {
		soldado.pocionSalud();
	}
	else if (opcion == 4) {
		soldado.curarEncantamientos();
	}
	soldado.setVida(soldado.getVida() - soldado.getVeneno());
	cout << "" << endl;
	cout << "Tienes " << soldado.getVida() << " puntos de vida" << endl;
	cout << "  A " << enemigo.getNombreEne() << " le queda " << enemigo.getVidaEne() << " de vida" << endl;
	Sleep(5000);
	if (enemigo.getVidaEne() <= 0) {
		return 1;
	}
	else
	{
		return turnoMounstruo(soldado, enemigo);
	}
}