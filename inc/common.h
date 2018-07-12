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

/* MACROS */

/*!
 * \details Skip a fixed amount of lines in the terminal
 * \author  Sebastien Ivanez
 * \date    12/07/2018
 */
void clearScreen()
{
  std::cout << std::string(50, '\n');
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

#endif
