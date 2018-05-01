#define _USE_MATH_DEFINES

#include "Vector.h"

// Dans les fonctions avec un for(), le compilateur croit
// que ce n'est pas initialise. Ceci supprime le warning.
#pragma warning(disable:4701) 

void Vector::Set(double _x, double _y) {
	coord[0] = _x;
	coord[1] = _y;
}

void Vector::Get(double &_x, double &_y) {
	_x = coord[0];
	_y = coord[1];
}

Vector Vector::operator+(Vector b) {
	Vector c;
	for (int i=0;i<DIM;i++)
		c.coord[i] = coord[i] + b.coord[i];
	return c;
}

Vector Vector::operator-(Vector b) {
	Vector c;
	for (int i=0;i<DIM;i++)
		c.coord[i] = coord[i] - b.coord[i];
	return c;
}

Vector Vector::operator*(double lambda) {
	Vector c;
	for (int i=0;i<DIM;i++)
		c.coord[i] = coord[i] * lambda;
	return c;
}

Vector Vector::operator/(double lambda) {
	Vector c;
	for (int i=0;i<DIM;i++)
		c.coord[i] = coord[i] / lambda;
	return c;
}

double Vector::operator*(Vector b) {
	double sum = 0;
	for (int i=0;i<DIM;i++)
		sum += coord[i] * b.coord[i];
	return sum;
}

double Vector::Norm() {
	double sum = 0;
	for (int i=0;i<DIM;i++)
		sum += coord[i] * coord[i];
	return sqrt(sum);
}

Vector Vector::Rotate(double angle) {
	angle *= M_PI / 180;
	Vector c;
	double co = cos(angle);
	double si = sin(angle);
	c.coord[0] = co * coord[0] + si * coord[1];
	c.coord[1] = - si * coord[0] + co * coord[1];
	return c;
}

void Vector::dessine_image(NativeBitmap nb) const {
    putNativeBitmap(coord[0], coor[1], nb);
}

void Vector::efface_image(int nb_w, int nb_h) const {
    fillRect(coord[0], coor[1] ,nb_w,nb_h,WHITE);
}
