/*! \file
 * Description
 */
#ifndef _PLAYER_H
#define _PLAYER_H

/* INCLUDES */
#include <vector>

/* MACROS */

/*!
 * \details Player class
 * \author  Sebastien Ivanez
 * \date    12/07/2018
 */
class Player {
  int stack;
  std::string name;
  std::vector<std::string> hand; // A hand contains 2 cards

  public:
    // Constructors
    Player() {this->name = "tbd"; this->stack = 0;}
    Player(std::string name, int stack) {this->name = name; this->stack = stack;}

    // Set/Get methods
    int getStack() {return stack;}
    std::string getName() {return name;}
    void setStack(int stack) {this->stack = stack;}
    void setName(std::string name) {this->name = name;}
    std::vector<std::string> getHand();

    // Other methods
    Deck dealCards(Deck deck);
    void printHand();
    void printEquity();
};

#endif
