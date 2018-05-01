#pragma once

#include <Imagine/Graphics.h>
using namespace Imagine;

#include "vector.h"
#include "arme.h"

class Ennemi
{
    //Attributs
    Vector m_pos;
    int m_hp;
    double m_speed;
    double m_size;
    bool m_reach_end;
    Imagine::NativeBitmap m_skin;

    //Méthodes
    void recevoir_degat(Arme);
    void avancer();
    void death();
};

class Punaise : public Ennemi
{

};
