#pragma once
#include "Pixel.h"

class Cuadricula
{
	private:
		int ancho; //en pixels (2 a 50 pixels)
		int alto; //en pixels (2 a 50 pixels)
		Pixel* vPixel[50][50]; //matriz de pixels
	public:
		Cuadricula();
		Cuadricula(int, int);
		//setters
		void setCuadricula(int, int);
		void setAncho(int);
		void setAlto(int);
		void setEstadoPixel(int, int, bool);//cambiar estado de un pixel
		//getters
		int getAncho();
		int getAlto();
		//dibujar
		void dibujar();
		//captura
		void capturarCuadricula(); //preguntar al usuario
};

