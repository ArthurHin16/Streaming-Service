#pragma once
#include <string>
#include <iostream>
#include "CEpisodio.h"
using namespace std;
class CSerie{
public:
	int ID;
	int num_epis;
	int num_temp;
	string series_title;
	string genero;
	CEpisodio episodios[300];
	CSerie(int a, int b, int c, string d, string e);
	~CSerie();
	void capturaepisodios();
	void calificarepisodio();
};

