#pragma once

#include "ennemi.h"

class Arme
{

private:

    double m_portee;
    double m_freq;
    double m_degats;
    double m_prix;

    Vector m_vitesse;
    Vector m_centre;
    Imagine::NativeBitmap m_skin;

public:

    void attaquer(Ennemi &cible);

};

