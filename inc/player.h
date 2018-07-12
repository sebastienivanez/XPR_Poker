/*! \file
 * Description
 */

#ifndef _PLAYER_H
#define _PLAYER_H

/* INCLUDES */

/* MACROS */

/*! \namespace std */
using namespace std;

/*!
 * \details Player class
 * \author  Sebastien Ivanez
 * \date    12/07/2018
 */
class Player {
  int stack;
  string name;

  public:
    Player() {this->name = "tbd"; this->stack = 0;}
    Player(string, int);
    int getStack() {return stack;}
    string getName() {return name;}
    void setStack(int stack) {this->stack = stack;}
    void setName(string name) {this->name = name;}
};

#endif
