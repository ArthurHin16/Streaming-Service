#include "CSerie.h"

CSerie::CSerie(int a, int b, int c, string d, string e){
	ID = a;
	num_epis = b;
	num_temp = c;
	series_title = d;
	genero = e;
}

CSerie::~CSerie(){

}

void CSerie::capturaepisodios(){
	for (int i = 0; i < num_temp; i++) {
		cout << "Capturando datos Temporada [" << i + 1 << "]" << endl;
		for (int x = 0; x < num_epis; x++) {
			cout << "Datos del episodio [" << x + 1 << "]:" << endl;
			episodios[i].setDatos();
		}
	}
}

void CSerie::calificarepisodio(){
	string ep;
	int num;
	cout << "Titulo del episodio a calificar: "; getline(cin, ep); getline(cin, ep);
	cout << "Numero del episodio a calificar: "; cin >> num;
	num = num - 1;
	episodios[num].calificar();
}
