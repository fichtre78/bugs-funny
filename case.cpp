#include "case.h"

int Case::get_etat()
{
    return m_etat;
}

void Case::dessineCase(Color col)
{
    fillRect(i*m_size, j*m_size, m_size, m_size, col);
}
