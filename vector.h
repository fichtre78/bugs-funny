#pragma once

const int DIM = 2;

class Vector {
	double coord[DIM];
public:
	// Acces aux deux coordonnees (A revoir pour DIM!=2)
	void Set(double _x, double _y);
	void Get(double &_x, double &_y);

	// Somme de deux vecteurs
	Vector operator+(Vector b);

	// Difference de deux vecteurs
	Vector operator-(Vector b);

	// Multiplication scalaire * vecteur
	Vector operator*(double lambda);
	Vector operator/(double lambda);

	// Produit scalaire de deux vecteurs
	double operator*(Vector b);

	// Norme d'un vecteur
	double Norm();

    // Rotation
	Vector Rotate(double angle);

    //Gestion de l'affichage d'image au niveau du vecteur
    void dessine_image(NativeBitmap nb, int nb_w, int nb_h, int zoom) const;
    void efface_image(int nb_w, int nb_h, int zoom) const;
};
