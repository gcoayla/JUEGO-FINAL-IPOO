#include "menu.h"
int elegir() {
	system("cls");
	int a;
	personajes();
	cout << "Seleccione su Personaje" << endl;
	cout << "" << endl;
	cout << "Luego puedes alternar entre los personajes" << endl;
	cin >> a;
	Sleep(1000);
	if (a > 0 && a < 4) {
		return a;
	}
	else
	{
		cout << "Solo numeros del 1 al 3" << endl;
		Sleep(2000);
		return elegir();
	}
}
void menu(int eleccion, guerrero &guerrero, arquero &arquero, mago &mago){
	system("cls");
	logo();
	cout << " " << endl;
	cout << " " << endl;
	cout << " 1_CAMPANA" << endl;
	cout << " 2_NIVELES" << endl;
	cout << " 3_ESTADISTICAS" << endl;
	cout << " 4_CAMBIAR DE PERSONAJE" << endl;
	cout << " 5_SALIR" << endl;
	cout << " 6_CREDITOS" << endl;
	cout << " " << endl;
	cout << " " << endl;
	cout << "							" << endl;
	cout << " " << endl;
	int elecOpcion;
	cout << "Bienvenido "<<guerrero.getNombre()<<" escoja una opcion: ";
	cin >> elecOpcion;
	if (elecOpcion == 1) {
		int estadoCampaña;
		if (eleccion == 1) {
			estadoCampaña = guerrero.getCampaña();
		}
		else if (eleccion == 2) {
			estadoCampaña = arquero.getCampaña();
		}
		else if (eleccion == 3) {
			estadoCampaña = mago.getCampaña();
		}
		iniciarJuego(estadoCampaña,eleccion,guerrero,arquero,mago);
	}
	else if (elecOpcion == 2) {
		niveles(eleccion, guerrero, arquero, mago);
	}
	else if (elecOpcion == 3) {
		system("cls");
		estadisticas(eleccion,guerrero,arquero,mago);
		menu(eleccion, guerrero, arquero, mago);
	}
	else if (elecOpcion == 4) {
		system("cls");
		eleccion = elegir();
		menu(eleccion, guerrero, arquero, mago);
	}
	else if (elecOpcion == 5) {
		system("cls");
		cout << "" << endl;
		cout << "" << endl;
		cout << "" << endl;
		cout << "           :D" << endl;
	}
	else if (elecOpcion == 6) {
		system("cls");
		creditos();
		menu(eleccion, guerrero, arquero, mago);
	}
	else {
		cout << " " << endl;
		cout << " No es una opción válida" << endl;
		Sleep(2000);
		menu(eleccion,guerrero,arquero,mago);
	}
}
void creditos() {
	system("cls");
	for (int i = 0; i<30; i++) {
		logo();
		for(int j = 0; j<i; j++) {
			cout << " " << endl;
		}

		cout << " Creado por: :" << endl;
		cout << "				Gonzalo Eduardo Coayla Zuniga" << endl;
		cout << " Ola q ase" << endl;
		cout << "				" << endl;
		Sleep(300);
		system("cls");
	}
}
void niveles(int eleccion, guerrero &guerrero, arquero &arquero, mago &mago) {
	system("cls");
	logo();
	cout << " " << endl;
	cout << " " << endl;
	cout << "     NIVELES: " << endl;
	cout << " " << endl;
	cout << "     0.-TUTORIAL" << endl;
	cout << "     1.-Nivel 1: " << endl;
	cout << "     2.-Nivel 2: " << endl;
	cout << "     3.-Nivel 3: " << endl;
	cout << "     4.-Nivel 4: " << endl;
	cout << "     5.-Nivel 5: " << endl;
	cout << "     6.-Volver al Menú" << endl;
	cout << " " << endl;
	int eleccionNivel;
	cout << "Escoja un Nivel: " << endl;
	cin >> eleccionNivel;
	if (eleccionNivel == 6) {
		menu(eleccion, guerrero, arquero, mago);
	}
	else if (eleccionNivel < 6 && eleccionNivel >= 0) {
		iniciarJuego(eleccionNivel, eleccion, guerrero, arquero, mago);
	}
	else {
		cout << "Elección no válida " << endl;
		Sleep(2000);
		niveles(eleccion, guerrero, arquero, mago);
	}
}
void estadisticas(int eleccion, guerrero &guerrero, arquero &arquero, mago &mago) {
	personajes();
	cout << "          1.- Guerrero                   2.- Arquero                         3.- Mago          " << endl;
	cout << " Vida:      " <<guerrero.getVida() <<"    //    " <<arquero.getVida()<<"    //    "<< mago.getVida()<< endl;
	cout << " Escudo:    " << guerrero.getEscudo() << "    //    " << arquero.getEscudo() << "    //    " << mago.getEscudo() << endl;
	cout << " Fuerza:    " << guerrero.getFuerza() << "    //    " << arquero.getFuerza() << "    //    " << mago.getFuerza() << endl;
	cout << " Pociones:  " << guerrero.getPociones() << "    //    " << arquero.getPociones() << "    //    " << mago.getPociones() << endl;
	if (eleccion == 1) {
		cout << "Tienes seleccionado al guerrero" << endl;
		if (guerrero.getHabilidad() >= 1) {
			cout << "Tienes " << guerrero.getHabilidad() << " puntos de habilidad" << endl;
			cout << "¿Deseas usar tus puntos?" << endl;
			string si;
			cin >> si;
			if (si == "si") {
				guerrero.setHabilidad(guerrero.getHabilidad() - 1);
				cout << "" << endl;
				cout << "¿que habilidad deseas subir??" << endl;
				cout << "" << endl;
				cout << "1.-Salud" << endl;
				cout << "2.-Escudo" << endl;
				cout << "3.-Fuerza" << endl;
				int habi;
				cin >> habi;
				if (habi == 1) {
					guerrero.setVida(guerrero.getVida() + 10);
				}
				else if (habi == 2) {
					guerrero.setEscudo(guerrero.getEscudo() + 10);
				}
				else if (habi == 3) {
					guerrero.setFuerza(guerrero.getFuerza() + 10);
				}
				cout << "Completado, hasta luego :D" << endl;
			}
			else {
				cout << "Hasta luego :D" << endl;
			}
		}
	}
	else if (eleccion == 2) {
		cout << "Tienes seleccionado al arquero" << endl;
		if (arquero.getHabilidad() >= 1) {
			cout << "Tienes " << arquero.getHabilidad() << " puntos de habilidad" << endl;
			cout << "¿Deseas usar tus puntos?" << endl;
			string si;
			cin >> si;
			if (si == "si") {
				arquero.setHabilidad(arquero.getHabilidad() - 1);
				cout << "" << endl;
				cout << "¿que habilidad deseas subir??" << endl;
				cout << "" << endl;
				cout << "1.-Salud" << endl;
				cout << "2.-Escudo" << endl;
				cout << "3.-Fuerza" << endl;
				int habi;
				cin >> habi;
				if (habi == 1) {
					arquero.setVida(arquero.getVida() + 10);
				}
				else if (habi == 2) {
					arquero.setEscudo(arquero.getEscudo() + 10);
				}
				else if (habi == 3) {
					arquero.setFuerza(arquero.getFuerza() + 10);
				}
				cout << "Completado, hasta luego :D" << endl;
			}
			else {
				cout << "Hasta luego :D" << endl;
			}
		}
	}
	else if (eleccion == 3) {
		cout << "Tienes seleccionado al mago" << endl;
		if (mago.getHabilidad() >= 1) {
			cout << "Tienes " << mago.getHabilidad() << " puntos de habilidad" << endl;
			cout << "¿Deseas usar tus puntos?" << endl;
			string si;
			cin >> si;
			if (si == "si") {
				mago.setHabilidad(mago.getHabilidad()-1);
				cout << "" << endl;
				cout << "¿que habilidad deseas subir??" << endl;
				cout << "" << endl;
				cout << "1.-Salud" << endl;
				cout << "2.-Escudo" << endl;
				cout << "3.-Fuerza" << endl;
				int habi;
				cin >> habi;
				if (habi == 1) {
					mago.setVida(mago.getVida() + 10);
				}
				else if (habi == 2) {
					mago.setEscudo(mago.getEscudo() + 10);
				}
				else if (habi == 3) {
					mago.setFuerza(mago.getFuerza() + 10);
				}
				cout << "Completado, hasta luego :D" << endl;
			}
			else {
				cout << "Hasta luego :D" << endl;
			}
		}
	}
	Sleep(10000);
}
void iniciarJuego(int estadoCampaña, int eleccion, guerrero &guerrero, arquero &arquero, mago &mago) {
	if (estadoCampaña == 0) {
		tutorial tutorial;
		if (eleccion == 1) {
			tutorial.enfrentar(guerrero);
		}
		else if (eleccion == 2) {
			tutorial.enfrentar(arquero);
		}
		else if (eleccion == 3) {
			tutorial.enfrentar(mago);
		}
		int seguir=contCampaña();
		if (seguir == 3) { menu(eleccion, guerrero, arquero, mago); }
		else if(seguir==2){
			estadoCampaña = estadoCampaña + 1;
			iniciarJuego(estadoCampaña, eleccion, guerrero, arquero, mago);
		}
		else if(seguir==1){ iniciarJuego(estadoCampaña, eleccion, guerrero, arquero, mago); }
	}
	else if (estadoCampaña == 1) {
		tutorial tutorial(1,3);
		if (eleccion == 1) {
			tutorial.enfrentar(guerrero);
		}
		else if (eleccion == 2) {
			tutorial.enfrentar(arquero);
		}
		else if (eleccion == 3) {
			tutorial.enfrentar(mago);
		}
		int seguir = contCampaña();
		if (seguir == 3) { menu(eleccion, guerrero, arquero, mago); }
		else if (seguir == 2) {
			estadoCampaña = estadoCampaña + 1;
			iniciarJuego(estadoCampaña, eleccion, guerrero, arquero, mago);
		}
		else if (seguir == 1) { iniciarJuego(estadoCampaña, eleccion, guerrero, arquero, mago); }
	}
	else if (estadoCampaña == 2) {
		tutorial tutorial(2, 4);
		if (eleccion == 1) {
			tutorial.enfrentar(guerrero);
		}
		else if (eleccion == 2) {
			tutorial.enfrentar(arquero);
		}
		else if (eleccion == 3) {
			tutorial.enfrentar(mago);
		}
		int seguir = contCampaña();
		if (seguir == 3) { menu(eleccion, guerrero, arquero, mago); }
		else if (seguir == 2) {
			estadoCampaña = estadoCampaña + 1;
			iniciarJuego(estadoCampaña, eleccion, guerrero, arquero, mago);
		}
		else if (seguir == 1) { iniciarJuego(estadoCampaña, eleccion, guerrero, arquero, mago); }
	}
	else if (estadoCampaña == 3) {
		tutorial tutorial(3, 5);
		if (eleccion == 1) {
			tutorial.enfrentar(guerrero);
		}
		else if (eleccion == 2) {
			tutorial.enfrentar(arquero);
		}
		else if (eleccion == 3) {
			tutorial.enfrentar(mago);
		}
		int seguir = contCampaña();
		if (seguir == 3) { menu(eleccion, guerrero, arquero, mago); }
		else if (seguir == 2) {
			estadoCampaña = estadoCampaña + 1;
			iniciarJuego(estadoCampaña, eleccion, guerrero, arquero, mago);
		}
		else if (seguir == 1) { iniciarJuego(estadoCampaña, eleccion, guerrero, arquero, mago); }
	}
	else if (estadoCampaña == 4) {
		tutorial tutorial(4, 6);
		if (eleccion == 1) {
			tutorial.enfrentar(guerrero);
		}
		else if (eleccion == 2) {
			tutorial.enfrentar(arquero);
		}
		else if (eleccion == 3) {
			tutorial.enfrentar(mago);
		}
		int seguir = contCampaña();
		if (seguir == 3) { menu(eleccion, guerrero, arquero, mago); }
		else if (seguir == 2) {
			estadoCampaña = estadoCampaña + 1;
			iniciarJuego(estadoCampaña, eleccion, guerrero, arquero, mago);
		}
		else if (seguir == 1) { iniciarJuego(estadoCampaña, eleccion, guerrero, arquero, mago); }
	}
	else if (estadoCampaña == 5) {
		tutorial tutorial(5, 7);
		if (eleccion == 1) {
			tutorial.enfrentar(guerrero);
		}
		else if (eleccion == 2) {
			tutorial.enfrentar(arquero);
		}
		else if (eleccion == 3) {
			tutorial.enfrentar(mago);
		}
		menu(eleccion, guerrero, arquero, mago);
	}
}
int contCampaña() {
	system("cls");
	cout << "" << endl;
	cout << "" << endl;
	cout << "      ¿Desea continuar jugando? " << endl;
	cout << " " << endl;
	cout << "     1.-Volver a jugar este nivel" << endl;
	cout << "     2.-Sig. Nivel: " << endl;
	cout << "     3.-Regresar al Menu: " << endl;
	cout << " " << endl;
	cout << "Seleccione una opción " << endl;
	int a;
	cin >> a;
	if (a < 4 && a>0) {
		return a;
	}
	else
	{
		cout << "   Número invalido " << endl;
		Sleep(2000);
		return contCampaña();
	}
}