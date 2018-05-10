#pragma once

#include "vect2.h"

#include <Imagine/Graphics.h>
using namespace Imagine;

class Ennemi
{
    //Attributs
    Vect2 m_pos;
    int m_hp;
    double m_speed;
    double m_size;
    bool m_reach_end;
    bool m_dead;
    Imagine::NativeBitmap m_skin;

public:
    //Méthodes
    void recevoir_degat(int nb_degat);
    void avancer();
    bool isDead();
};

class Punaise : public Ennemi
{

};

class Gaspard : public Ennemi
{

};

class Ibrahim : public Ennemi
{

};
