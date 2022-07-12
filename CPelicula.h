#pragma once
#include "CVideo.h"
class CPelicula : public CVideo {
public:
	CPelicula(int x,int d,string y, string z);
	~CPelicula();
	void calificar();
	void printdatos();
	void reproducir();
};

