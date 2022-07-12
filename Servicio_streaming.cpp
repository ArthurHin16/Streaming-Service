#include <iostream>
#include <conio.h>
#include "CVideo.h"
#include "CPelicula.h"
#include "CEpisodio.h"
#include "CSerie.h"
using namespace std;
int main() {

	CVideo* Americanas[6];
	Americanas[0] = new CPelicula(1601,100,"Los Increibles","familiar");
	Americanas[0]->calificacion = 5;
	Americanas[1] = new CPelicula(1602,143,"The Hunger Games","ciencia ficcion");
	Americanas[1]->calificacion = 3;
	Americanas[2] = new CPelicula(1603,128,"La la land","musical");
	Americanas[2]->calificacion = 4;
	Americanas[3] = new CPelicula(1604,133,"Bohemian Rhapsody","musical");
	Americanas[3]->calificacion = 4;
	Americanas[4] = new CPelicula(1605,93,"Halloween (2018)","terror");
	Americanas[4]->calificacion = 5;
	CSerie *Black = new CSerie(2125, 3, 1, "Black Mirror", "drama");
	Black->episodios[0].ID = 2548;
	Black->episodios[0].nombre = "Himno Nacional";
	Black->episodios[0].temporada = 1;
	Black->episodios[0].duracion = 44;
	Black->episodios[0].calificacion = 2;

	Black->episodios[1].ID = 2549;
	Black->episodios[1].nombre = "Quince millones de meritos";
	Black->episodios[1].temporada = 1;
	Black->episodios[1].duracion = 62;
	Black->episodios[1].calificacion = 5;

	Black->episodios[2].ID = 2550;
	Black->episodios[2].nombre = "Toda tu historia";
	Black->episodios[2].temporada = 1;
	Black->episodios[2].duracion = 49;
	Black->episodios[2].calificacion = 1;

	bool x = 1, y = 1;
	int opc;
	string gen;
	int i, d,c;
	string g, n;
	cout << "********* Welcome to Amazon Prime TEC21 *********" << endl;

	while (x != false) {
		cout << endl;
		cout << "Menu Principal:" << endl;
		cout << "1 ) Cargar archivos de datos" << endl;
		cout << "2 ) Mostrar los videos en general con una cierta calificacion o de un cierto genero" << endl;
		cout << "3 ) Mostrar los episodios de una determinada serie con una calificacion determinada" << endl;
		cout << "4 ) Mostrar las peliculas con cierta calificacion" << endl;
		cout << "5 ) Calificar un video" << endl;
		cout << "0 ) Salir" << endl;
		try {
			cout << "Ingrese su opcion: "; cin >> opc;
			if (opc > 5 or opc < 0) {
				throw opc;
			}
			switch (opc) {
			case 1:
				int r1;
				cout << "Cargar archivos" << endl;
				cout << "Desea cargar una pelicula (1) o serie(2) :" << endl; cin >> r1;
				switch (r1) {
				case 1:
					cout << "ID: "; cin >> i;
					cout << "Duracion: "; cin >> d;
					cout << "Nombre: "; getline(cin, n); getline(cin, n);
					cout << "Genero: "; getline(cin, g);
					cout << "Calificacion: "; cin >> c;
					Americanas[6] = new CPelicula(i, d, n, g);
					Americanas[6]->calificacion = c;
					break;
				case 2:
					Black->episodios[3].setDatos();
					break;
				}
				break;
			case 2:
				int r;
				cout << "Desea ver los videos de:\nCierto genero (1)\nCierta calificacion (2): "; cin >> r;
				switch (r) {
				case 1:
					cout << "Ingrese el genero (minusculas):"; cin >> gen;
					for (int i = 0; i < 5; i++) {
						if (Americanas[i]->genero.compare(gen) == 0) {
							Americanas[i]->printdatos();
						}
						if (i < 3) {
							if (Black->genero.compare(gen) == 0) {
								Black->episodios[i].printdatos();
							}
						}
					}
					break;
				case 2:
					int cal;
					cout << "Ingrese la calificacion: "; cin >> cal;
					for (int i = 0; i < 5; i++) {
						if (Americanas[i]->calificacion == cal) {
							Americanas[i]->printdatos();
						}
						if (Black->episodios[i].calificacion == cal) {
							Black->episodios[i].printdatos();
						}
					}
					break;
				}
				break;

			case 3:
				int cal;
				cout << "Ingrese la calificacion: "; cin >> cal;
				for (int i = 0; i < 3; i++) {
					if (Black->episodios[i].calificacion == cal) {
						Black->episodios[i].printdatos();
					}
				}
				break;

			case 4:
				int cal1;
				cout << "Ingrese la calificacion: "; cin >> cal1;
				for (int i = 0; i < 5; i++) {
					if (Americanas[i]->calificacion == cal1) {
						Americanas[i]->printdatos();
					}
				}
				break;

			case 5:
				int cal2;
				cout << "Calificar Pelicula (1) \nCalificar Episodio Serie (2)"; cin >> cal2;
				switch (cal2) {
				case 1:
					int cp;
					cout << "Titulo a calificar" << endl;
					cout << "( 1 )Los Increibles\n( 2 )The Hunger Games\n( 3 )La la land\n( 4 )Bohemian Rhapsody\n( 5 )Halloween (2018)\n"; cin >> cp;
					Americanas[cp - 1]->calificar();
					cout << "Gracias por tu calificacion!" << endl;
					break;
				case 2:
					int cs;
					cout << "Episodio a calificar" << endl;
					cout << "( 1 ) Himno Nacional\n( 2 )Quince millones de meritos\n( 3 )Toda tu historia\n"; cin >> cs;
					Black->episodios[cs - 1].calificar();
					break;
				}
				break;
	
			case 0:
				y = 0;
				break;
			}	
		}
		catch (int) {
			cout << "Valor " << opc << " NO VALIDO!" << endl;
		}
		x = y; 
	}
}