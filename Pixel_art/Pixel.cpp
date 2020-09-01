#include "Pixel.h"
#include <iostream>
using namespace std;

Pixel::Pixel()
{
}

Pixel::Pixel(int x, int y)
{
	setPixel(x, y);
}

void Pixel::setPixel(int x, int y)
{
	coordenada_x = x;
	coordenada_y = y;
}

void Pixel::setEstado(bool estado)
{
	this->estado = estado;
}

int Pixel::getX()
{
	return coordenada_x;
}

int Pixel::getY()
{
	return coordenada_y;
}

bool Pixel::getEstado()
{
	return estado;
}

void Pixel::dibujaPixel()
{
	if (!estado) { //Pixel desactivado
		cout << '.';
	}
	else {//Pixel activado
		cout << 'o';
	}
}
