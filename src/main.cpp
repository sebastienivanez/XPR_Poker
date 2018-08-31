/*! \file
 * Main entry point for xpr_poker.
 * This file contains main().
 */

/* INCLUDES */
#include <iomanip>
#include <iostream>
#include <sstream>
#include <cstdlib>
#include <vector>
#include "../inc/common.hpp"
#include "../inc/common_poker.hpp"
#include "../inc/deck.hpp"
#include "../inc/player.hpp"

/* MACROS */
#define MAX_NB_PLAYER 9 // Remove variable lenght array.

/*! \namespace std */
using namespace std;

/*!
 * \details Easy way to split coins. Should be improved.
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

/*!
 * \details Initializes the players informations
 * \author  Sebastien Ivanez
 * \date    12/07/2018
 */
int initGame(Player *player)
{
  int nb_players = 0;
  int initial_stack = 0;
  int stack = 0;
  string coins[5][2] = {{"blanc", "1"}, {"rouge", "5"}, {"bleu", "10"}, {"vert", "50"}, {"noir", "250"}};
  string player_name = "";

  cout << "Begin stack: ";
  cin	>> stack;
  cout << "how many players ? ";
  cin	>> nb_players;

  for(int i = 0; i < nb_players; i++)
  {
    cout << "player n°" << i+1 << ": ";
    cin >> player_name;
    player[i].setName(player_name);
    player[i].setStack(initial_stack);
  }

  for(int j = 0; j < 5; j++)
  {
    cout << "Value of coin " << coins[j][0] << ": ";
    cin >> coins[j][1];
  }

  splitCoins(coins, stack);
  return nb_players;
}

/*!
 * \details Entry function to XPR_Poker.
 * \author  Sebastien Ivanez
 * \date    12/07/2018
 */
int main(void)//int argc, char *argv[])
{
/*
  Player player[MAX_NB_PLAYER];
  Player seb("seb", 200);
  int nb_players = 0;

  nb_players = initGame(player);

  if (nb_players == 0)
    return 0; // Log no players

*/
  Player seb("seb", 200);
  Player gui("gui", 200);
  Deck deck;

  deck.shuffle();
  deck = seb.dealCards(deck);
  deck = gui.dealCards(deck);
  seb.printHand();
  seb.printEquity();
  gui.printHand();
  gui.printEquity();

  return 0;
}
