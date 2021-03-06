/*
  Num.cc A number representation in the expression calculator.
  Copyright (C) 2008-14 Sakis Kasampalis <s.kasampalis@zoho.com>
  (this file is part of the expression calculator).

  The expression calculator is free software: you can redistribute it 
  and/or modify it under the terms of the GNU General Public License 
  as published by the Free Software Foundation, either version 3 of the 
  License, or (at your option) any later version.

  The expression calculator is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with the expression calculator.  If not, see 
  <http://www.gnu.org/licenses/>.
*/

#include <iostream>
#include <string>
#include <sstream>
#include "Num.h"

using std::string;
using std::stringstream;

/**
 * Evaluate the value of the
 * numeric expression.
 *
 * @return the value of the
 * numeric expression.
 */
double Num::eval() const
{
  return value;
}

/**
 * Default initialisation
 * of a numeric expression.
 */
Num::Num(): value(0) {}


/**
 * Initialisation of a numeric 
 * expression as given by the user.
 *
 * @param n the value of the numeric
 * expression
 */
Num::Num(double n): value(n) {}

/**
 * A string representation
 * of a numeric expression. 
 * 
 * @return a <i>string</i>
 * instance of a numeric
 * expression.
 */
string Num::toString() const
{
  stringstream str;

  str << value;

  return str.str();
}


/**
 * A string representation
 * of the expression's operator.
 * 
 * @return a <i>string</i>
 * instance of the expression's
 * operator.
 */
string Num::strOperator() const
{
  return "";
}
