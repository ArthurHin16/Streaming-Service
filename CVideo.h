#pragma once
#include <string>
#include <iostream>
#include "CReglas_video.h"
using namespace std;
class CVideo : public CReglas_video{
public:
	int ID;
	string nombre;
	int duracion;
	string genero;
	int calificacion;
	CVideo();
	~CVideo();
	void pausar();
	void adelantar();
	void reproducir();
	virtual void calificar();
	virtual void printdatos();
};

