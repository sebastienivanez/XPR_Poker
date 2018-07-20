/*! \file
 * Description
 */

#ifndef _DECK_H
#define _DECK_H

/* INCLUDES */

/* MACROS */
#define MAX_NB_CARDS 52

/*!
 * \details TODO
 * \author  Sebastien Ivanez
 * \date    20/07/2018
 */
class Deck
{
  std::vector<std::string> cards;

  public:
    // Constructors
    Deck();

    // Set/Get methods

    // Other methods
    void shuffle();
};

#endif
