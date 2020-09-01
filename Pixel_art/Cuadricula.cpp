#include "Cuadricula.h"
#include <iostream>
using namespace std;

Cuadricula::Cuadricula()
{
}

Cuadricula::Cuadricula(int ancho, int alto)
{
	setCuadricula(ancho, alto);
}

void Cuadricula::setCuadricula(int ancho, int alto)
{
	setAncho(ancho);
	setAlto(alto);

	//construyo matriz de pixels
	for (int y = 0; y < alto; y++) {
		for (int x = 0; x < ancho; x++) {
			vPixel[x][y] = new Pixel;
			vPixel[x][y]->setPixel(x, y);
			vPixel[x][y]->setEstado(0); //desactivado
		}
	}

}

void Cuadricula::setAncho(int ancho)
{
	if (ancho < 2 || ancho>50) {
		ancho = 2;
	}
	this->ancho = ancho;
}

void Cuadricula::setAlto(int alto)
{
	if (alto < 2 || alto>50) {
		alto = 2;
	}
	this->alto = alto;
}

void Cuadricula::setEstadoPixel(int x, int y, bool estado)
{
	vPixel[x][y]->setEstado(estado);
}

int Cuadricula::getAncho()
{
	return ancho;
}

int Cuadricula::getAlto()
{
	return alto;
}

void Cuadricula::dibujar()
{
	for (int y = 0; y < alto; y++) {
		for (int x = 0; x < ancho; x++) {
			vPixel[x][y]->dibujaPixel();
		}
		cout << endl;
	}
}

void Cuadricula::capturarCuadricula()
{
	int x, y;
	cout << "Indica ancho: ";
	cin >> x;
	cout << "Indica alto: ";
	cin >> y;
	setCuadricula(x,y);
}
