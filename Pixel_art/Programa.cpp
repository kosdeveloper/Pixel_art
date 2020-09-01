#include <iostream>
#include "Cuadricula.h"

using namespace std;

int main() {
	Cuadricula c1;
	c1.capturarCuadricula();
	c1.setEstadoPixel(2, 3, 1);
	c1.dibujar();

	return 0;
}