/*! \file
 * Description
 */

#ifndef _COMMON_H
#define _COMMON_H

/* INCLUDES */
#include <iostream>
#include <iomanip>
#include <sstream>
#include <cstdlib>
#include <cstring> // To use strcpy()

/* MACROS */

/*!
 * \details Skip a fixed amount of lines in the terminal
 * \author  Sebastien Ivanez
 * \date    12/07/2018
 */
inline void clearScreen()
{
  system("clear");
}

/*!
 * \details Converts an INT into a STRING.
 * \author  Sebastien Ivanez
 * \date    12/07/2018
 */
inline std::string int2String(const int i)
{
  std::stringstream s;
  s << i;
  return s.str();
}

/*!
 * \details Converts an STRING into an INT.
 * \author  Sebastien Ivanez
 * \date    12/07/2018
 */
inline int string2Int(const std::string s)
{
  return atoi((char*)s.c_str());
}

/*!
 * \details Converts an STRING into an CHAR.
 * \author  Sebastien Ivanez
 * \date    22/07/2018
 */
inline char* string2Char(const std::string s)
{
  char* c = new char();
  std::strcpy(c, s.c_str());
  return c;
}

#endif
