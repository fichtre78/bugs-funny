#pragma once

#include "vect2.h"

#include <Imagine/Graphics.h>
using namespace Imagine;

class Case
{
    //Attributs
    int i;
    int j;
    int m_size;
    int m_etat;
    Vect2 m_centre;

    //Méthodes
public :
    int get_i();
    int get_j();
    int get_etat();
    void dessineCase(Color col);
    void effaceCase(int coord[2]);
};
