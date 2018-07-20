/*! \file
 * Main entry point for xpr_poker.
 * This file contains main().
 */

/* INCLUDES */
#include <iostream>
#include <iomanip>
#include <sstream>
#include <cstdlib>
#include <vector>
#include "../inc/common.h"
#include "../inc/player.h"
#include "../inc/deck.h"
#include "player.cpp"
#include "game_handler.cpp"

/* MACROS */
#define MAX_NB_PLAYER 9 // Remove variable lenght array.

/*! \namespace std */
using namespace std;

/*!
 * \details Entry function to XPR_Poker.
 * \author  Sebastien Ivanez
 * \date    12/07/2018
 */
int main(void)//int argc, char *argv[])
{
  Player player[MAX_NB_PLAYER];
  int nb_players = 0;

  nb_players = initGame(player);

  if (nb_players == 0)
    return 0; // Log no players

  //Player seb("seb", 200);

  //deck = seb.dealCards(deck);

  //seb.printHand();

  return 0;
}
