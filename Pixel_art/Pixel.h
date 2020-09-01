#pragma once
class Pixel
{
	private:
		int coordenada_x;
		int coordenada_y;
		bool estado; //activado (1) o desactivado (0)
	public:
		Pixel();
		Pixel(int,int);
		//setters
		void setPixel(int, int);
		void setEstado(bool);
		//getters
		int getX();
		int getY();
		bool getEstado();
		//dibujar
		void dibujaPixel();
};

