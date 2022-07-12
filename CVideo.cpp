#include "CVideo.h"

CVideo::CVideo(){
	ID = 0;
	nombre = "Sin especificar";
	duracion = 0;
	genero = "Sin especificar";
	calificacion = 0;
}

CVideo::~CVideo(){

}

void CVideo::reproducir(){
	cout << "El video se esta reproduciendo con calidad estandar" << endl;
}

void CVideo::pausar(){
	cout << "El video se ha pausado" << endl;
}

void CVideo::adelantar(){
	cout << "El video se ha adelantado" << endl;
}

void CVideo::calificar(){
	int cal;
	cout << "Ingrese una calificacion para el video:"; cin >> cal;
	calificacion = cal;
}

void CVideo::printdatos(){
	cout << "INFORMACION VIDEO" << endl;
	cout << "ID: " << ID;
	cout << "Titulo: " << nombre << endl;
	cout << "Duracion " << duracion << " minutos" << endl;
	cout << "Genero: " << genero << endl;
}


