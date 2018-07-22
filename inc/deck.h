/*! \file
 * Description
 */

#ifndef _DECK_H
#define _DECK_H

/* INCLUDES */
#include <vector>

/* MACROS */

/*!
 * \details TODO
 * \author  Sebastien Ivanez
 * \date    20/07/2018
 */
class Deck
{

  public:
    std::vector<std::string> cards;

    // Constructors
    Deck();

    // Set/Get methods

    // Other methods
    void shuffle();
};

#endif
