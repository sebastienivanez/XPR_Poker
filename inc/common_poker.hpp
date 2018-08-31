/*! \file
 * Description
 */

#ifndef _COMMON_POKER_H
#define _COMMON_POKER_H

/* INCLUDES */

/* MACROS */

/*!
 * \details Returns value of card
 * \author  Sebastien Ivanez
 * \date    23/07/2018
 */
inline int card2Int(char card)
{
  switch(card)
  {
    case 'a': return 0;
    case 'k': return 1;
    case 'q': return 2;
    case 'j': return 3;
    case 't': return 4;
    case '9': return 5;
    case '8': return 6;
    case '7': return 7;
    case '6': return 8;
    case '5': return 9;
    case '4': return 10;
    case '3': return 11;
    case '2': return 12;
  }

  return 0;
}

#endif
