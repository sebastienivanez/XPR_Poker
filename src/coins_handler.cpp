/*! \file
 * Coins handler
 */

/* INCLUDES */
#include <iostream>
#include "../inc/common.h"

/* MACROS */

/*! \namespace std */
using namespace std;

/*!
 * \details TODO
 * \author  Sebastien Ivanez
 * \date    12/07/2018
 */
void splitCoins(string tab_2D[5][2], int stack)
{
  int nb_noir;
  int val_noir;
  int nb_vert;
  int val_vert;
  int nb_bleu;
  int val_bleu;
  int nb_rouge;
  int val_rouge;
  int nb_blanc;
  int val_blanc;

  val_noir = string2Int(tab_2D[4][1]);
  val_vert = string2Int(tab_2D[3][1]);
  val_bleu = string2Int(tab_2D[2][1]);
  val_rouge = string2Int(tab_2D[1][1]);
  val_blanc = string2Int(tab_2D[0][1]);

  nb_noir = (stack/(2*val_noir));
  stack = (stack - nb_noir*val_noir);
  nb_vert = (5*nb_noir/2);
  stack = (stack - nb_vert*val_vert);
  nb_bleu = (stack/(2*val_bleu));
  stack = (stack - nb_bleu*val_bleu);
  nb_blanc = (stack/(2*val_blanc));
  stack = (stack - nb_blanc*val_blanc);
  nb_rouge = (stack/val_rouge);
  stack = (stack - nb_rouge*val_rouge);

  cout << "jetons " << setw(7) << tab_2D[4][0] << ": " << setw(5) << nb_noir << endl;
  cout << "jetons " << setw(7) << tab_2D[3][0] << ": " << setw(5) << nb_vert << endl;
  cout << "jetons " << setw(7) << tab_2D[2][0] << ": " << setw(5) << nb_bleu << endl;
  cout << "jetons " << setw(7) << tab_2D[1][0] << ": " << setw(5) << nb_rouge << endl;
  cout << "jetons " << setw(7) << tab_2D[0][0] << ": " << setw(5) << nb_blanc << endl;
}
