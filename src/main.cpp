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
#include "../inc/common.h"
#include "../inc/common_poker.h"
#include "../inc/deck.h"
#include "../inc/player.h"
#include "deck.cpp"
#include "game_handler.cpp"
#include "player.cpp"

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
/*
  Player player[MAX_NB_PLAYER];
  Player seb("seb", 200);
  int nb_players = 0;

  nb_players = initGame(player);

  if (nb_players == 0)
    return 0; // Log no players

*/
  Player seb("seb", 200);
  Deck deck;

  deck.shuffle();
  deck = seb.dealCards(deck);
  seb.printHand();
  seb.printEquity();

  return 0;
}
