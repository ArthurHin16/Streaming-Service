#include "CEpisodio.h"

CEpisodio::CEpisodio() {
	ID = 0;
	duracion = 0;
	nombre = "N/A";
	temporada = 0;
	calificacion = 0;
}

CEpisodio::~CEpisodio(){

}

void CEpisodio::setDatos(){
	cout << "Captura de datos del Episodio" << endl;
	cout << "ID: "; cin >> ID;
	cout << "Titulo del capitulo: "; getline(cin, nombre); getline(cin, nombre);
	cout << "Duracion: "; cin >> duracion;
	cout << "Temporada: "; cin >> temporada;
}

void CEpisodio::reproducir(){
	cout << "Reproduciendo el episodio \"" << nombre << "\" con calidad HD" << endl;
}

void CEpisodio::calificar(){
	int cali_eps;
	cout << "En una escala de 1 a 5 estrellas" << endl;
	cout << "Ingrese su calificacion para el espisodio \"" << nombre << "\": "; cin >> cali_eps;
	calificacion = cali_eps;
}

void CEpisodio::printdatos(){
	cout << endl;
	cout << "DATOS DEL EPISODIO" << endl;
	cout << "ID: " << ID << endl;
	cout << "Titulo: " << nombre << endl;
	cout << "Temporada: " << temporada << endl;
	cout << "Duracion " << duracion << " minutos" << endl;
}

