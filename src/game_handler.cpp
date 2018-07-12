/*! \file
 * Game handler
 */

/* INCLUDES */
#include <iostream>
#include "../inc/player.h"
#include "coins_handler.cpp"

/* MACROS */

/*! \namespace std */
using namespace std;

/*!
 * \details Initializes the players informations
 * \author  Sebastien Ivanez
 * \date    12/07/2018
 */
void initGame(Player *player)
{
  int nb_player = 0;
  int initial_stack = 0;
  int stack = 0;
  string coins[5][2] = {{"blanc", "1"}, {"rouge", "5"}, {"bleu", "10"}, {"vert", "50"}, {"noir", "250"}};
  string player_name = "";

  cout << "Begin stack: ";
  cin	>> stack;
  cout << "how many players ? ";
  cin	>> nb_player;

  for(int i = 0; i < nb_player; i++)
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
}
