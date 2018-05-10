#pragma once

#include "ennemi.h"

class Arme
{

private:

    double m_portee;
    double m_freq;
    double m_degats;
    double m_prix;

    Vect2 m_vitesse;
    Vect2 m_centre;
    Imagine::NativeBitmap m_skin;

public:
    void attaquer(Ennemi &cible);

};

