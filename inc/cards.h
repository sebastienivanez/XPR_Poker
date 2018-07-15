/*! \file
 * Description
 */

#ifndef _DECK_H
#define _DECK_H

/* INCLUDES */
#include <iostream>     // std::cout
#include <algorithm>    // std::shuffle
#include <vector>        // std::array
#include <random>       // std::default_random_engine
#include <chrono>       // std::chrono::system_clock

/* MACROS */
#define MAX_NB_CARDS 52

/*!
 * \details Skip a fixed amount of lines in the terminal
 * \author  Sebastien Ivanez
 * \date    12/07/2018
 */
std::vector<std::string> shuffle(std::vector<std::string> deck)
{
  unsigned seed = std::chrono::system_clock::now().time_since_epoch().count(); // Obtain a time-based seed
  const std::string all_cards[] = {"2h", "3h", "4h", "5h", "6h", "7h", "8h", "9h", "th", "jh", "qh", "kh", "ah", // Heart
              "2s", "3s", "4s", "5s", "6s", "7s", "8s", "9s", "ts", "js", "qs", "ks", "as", // Spade
              "2d", "3d", "4d", "5d", "6d", "7d", "8d", "9d", "td", "jd", "qd", "kd", "ad", // Diamond
              "2c", "3c", "4c", "5c", "6c", "7c", "8c", "9c", "tc", "jc", "qc", "kc", "ac"}; // Clubs

  deck.assign(all_cards, all_cards + MAX_NB_CARDS);
  shuffle(deck.begin(), deck.end(), std::default_random_engine(seed)); // Randomly rearrange elements in range using generator

  return deck;
}

#endif
