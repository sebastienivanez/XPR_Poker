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
Deck Player::dealCards(Deck deck)
{ 
  for (int i = 0; i < 2; i++) {
    this->hand.push_back(deck.cards.back()); // Deal last card of deck to player
    deck.cards.pop_back(); // Remove last card of the deck
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

/*!
 * \details Print the equity of hand
 * \author  Sebastien Ivanez
 * \date    20/07/2018
 */
void Player::printEquity()
{
  static const int pre_flop_equity[14][14] = // Those values are valid if only 2 players
  // A   K   Q   J   T   9   8   7   6   5   4   3   2
  {{85, 67, 66, 65, 65, 63, 62, 61, 60, 60, 59, 58, 57},// A
   {65, 82, 63, 62, 62, 60, 58, 58, 57, 56, 55, 54, 53},// K
   {64, 62, 80, 60, 59, 58, 56, 54, 54, 53, 52, 51, 50},// Q
   {64, 61, 58, 78, 58, 56, 54, 52, 51, 50, 49, 48, 47},// J
   {63, 60, 57, 55, 75, 54, 52, 51, 49, 47, 47, 46, 45},// T
   {61, 58, 55, 53, 52, 72, 51, 49, 47, 46, 44, 43, 43},// 9
   {60, 56, 54, 52, 50, 48, 69, 48, 46, 45, 43, 41, 40},// 8
   {59, 55, 52, 50, 48, 46, 45, 62, 45, 44, 42, 40, 38},// 7
   {58, 54, 51, 48, 46, 45, 43, 42, 63, 43, 41, 40, 38},// 6
   {58, 53, 50, 47, 44, 43, 41, 41, 40, 60, 42, 40, 38},// 5
   {57, 52, 49, 46, 44, 41, 39, 39, 38, 38, 57, 39, 37},// 4
   {56, 51, 48, 45, 43, 40, 37, 37, 36, 36, 35, 54, 36},// 3
   {55, 51, 47, 44, 42, 39, 37, 35, 34, 34, 33, 32, 50} // 2
  };
  char* card1 = new char();
  char* card2 = new char();

  card1 = string2Char(this->hand.at(0));
  card2 = string2Char(this->hand.at(1));

  if (card1[1] == card2[1]) {
    if (card2Int(card1[0]) < card2Int(card2[0]))
      cout << pre_flop_equity[card2Int(card1[0])][card2Int(card2[0])] << "%" << endl;
    else
      cout << pre_flop_equity[card2Int(card2[0])][card2Int(card1[0])] << "%" << endl;
  }
  else {
    if (card2Int(card1[0]) < card2Int(card2[0]))
      cout << pre_flop_equity[card2Int(card2[0])][card2Int(card1[0])] << "%" << endl;
    else
      cout << pre_flop_equity[card2Int(card1[0])][card2Int(card2[0])] << "%" << endl;
  }
}
