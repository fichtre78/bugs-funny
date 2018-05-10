// Imagine++ project
// Project:  Bugs Funny

#include <Imagine/Graphics.h>
using namespace Imagine;

#include <vector>
using namespace std;

#include "ennemi.h"
#include "case.h"

/* LA GRILLE */

//Variables et paramètres
int m_params_g[5];

//Fonctions
void initParamsG(int hauteur, int nb_case_colonne, int dist, int params[5]) //avec dist le rapport largeur/hauteur (la distortion)
{
    params[0] = dist * hauteur; //Largeur
    params[1] = hauteur; //Hauteur
    params[2] = nb_case_colonne*dist; //Nombre de cases par ligne (en largeur) (Nombre de colonnes)
    params[3] = nb_case_colonne; //Nombre de case par colonne (en hauteur) (Nombre de lignes)
    params[4] = hauteur/nb_case_colonne; //Le coté d'une case
}

void dessinGrille(int t[5])
{
    // trace des ligne verticales
    for (int i=0 ; i<t[2] ; i++)
    {
        drawLine(i*t[4],0,i*t[4],t[1], BLACK, 1);
    }

    // trace des lignes horizontales
    for (int j=0 ; j<t[3] ; j++)
    {
        drawLine(0,j*t[4],t[0],j*t[4],BLACK,1);
    }
}

/* LE NIVEAU */

//Variables et paramètres
const int nb_para = 1;
int m_params_lvl[nb_para] = {1}; //[nombre de cases que l'utilisateur peut pacer]

FMatrix<Case, 10, 20>  m_lvl1; //Matrice qui sert à définir l'état de chaque case (occupée ou non par un mur, ...)
                               //ATTENTION : Les parametres de lamatrice (de taille), doivent etre rentrés a la main, et recalculé a chaque chgmt
//Fonctions
Color Couleur(byte R, byte G, byte B)
{
    Color C = Color(R,G,B);
    return(C);
}

void dessinLit(int p[5])
{
    Color beige = Couleur(250, 243, 182);
    Color bleu_couv = Couleur(22, 114, 156);
    Color bleu_drap = Couleur(188, 212, 226);
    fillRect(0, 0, p[4]*2, 3*p[4], bleu_drap);
    fillRect(0, p[4], p[4]*2, 2*p[4], bleu_couv);
    fillRect(p[4]/5, p[4]/4, 8*p[4]/5, p[4]/3, beige);

}

void dessinDepart(){}

void initGrille(int params_g[5], int params_lvl[nb_para], FMatrix<Case, 25, 50>  lvl1) //Structure l'espace de jeu
{
    //Phase de remplissage avec les obstacles predefinis
    for(int i=0; i<lvl1.nrow(); i++)
    {
        for(int j=0; j<lvl1.ncol(); j++)
        {
            if(lvl1(i,j).get_etat()==1)
                lvl1(i,j).dessineCase(BLACK);
        }
    }

    //Phase ou l'utilisateur choisi
    for(int i=0; i<params_lvl[0]; i++)
    {

    }

}


int main()
{
    initParamsG(500, 10, 2, m_params_g);
    openWindow(m_params_g[0], m_params_g[1]);
    dessinGrille(m_params_g);
    dessinLit(m_params_g);
    endGraphics();
	return 0;
}
