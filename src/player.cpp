/*! \file
 * Description
 */
 
/* INCLUDES */
#include "../inc/player.h"

/* MACROS */

/*! \namespace std */
using namespace std;

/*!
 * \details Deal 2 cards to player and remove thoses cards from the deck.
 * \author  Sebastien Ivanez
 * \date    15/07/2018
 */
vector<string> Player::dealCards(vector<string> deck)
{ 
  for (int i = 0; i < 2; i++) {
    this->hand.push_back(deck.back()); // Deal last card of deck to player
    deck.pop_back(); // Remove last card of the deck
  }
  
  return deck;
}

/*!
 * \details Print the cards of player.
 * \author  Sebastien Ivanez
 * \date    15/07/2018
 */
void Player::printHand()
{
  for (vector<string>::iterator it = hand.begin(); it != hand.end(); ++it)
    cout << *it << '\n';
}
