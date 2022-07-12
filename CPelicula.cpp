#include "CPelicula.h"

CPelicula::CPelicula(int x, int d, string y, string z){
	ID = x;
	nombre = y;
	duracion = d;
	genero = z;
	calificacion = 0;
}

CPelicula::~CPelicula(){

}

void CPelicula::calificar(){
	int c1;
	cout << "En una escala de 1 a 5 estrellas" << endl;
	cout << "Ingrese su calificacion para la pelicula \"" << nombre << "\": "; cin >> c1;
	calificacion = c1;
}

void CPelicula::printdatos() {
	cout << endl;
	cout << "INFORMACION DE LA PELICULA" << endl;
	cout << "ID: " << ID << endl;
	cout << "Titulo: " << nombre << endl;
	cout << "Duracion " << duracion << " minutos" << endl;
	cout << "Genero: " << genero << endl;
}

void CPelicula::reproducir(){
	cout << "Reproduciendo titulo \"" << nombre << "\"" << " con calidad 4K" << endl;
}

