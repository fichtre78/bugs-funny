#pragma once

#include "point.h"
#include "Imagine/Images.h"

#include <cmath>
#include <iostream>
#include <cstdlib>

class Arme
{

private:

    double m_portée;
    double m_freq;
    double m_dégats;
    double m_prix;

    Vector m_vitesse;
    Vector m_centre;
    caze m_carré;
    std::string m_nom;
    Imagine::NativeBitmap m_skin;

public:

    void attaquer(Ennemi &cible);

};

