#pragma once
#include "CVideo.h"
class CEpisodio : public CVideo{
public:
	int temporada;
	CEpisodio();
	~CEpisodio();
	void setDatos();
	void reproducir();
	void calificar();
	void printdatos();
};

