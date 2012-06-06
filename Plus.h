/*
  Plus.h The skeleton of the plus operator.
  Copyright (C) 2008 Athanasios Kasampalis <faif at dtek period gr>
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

#ifndef EXPR_CALC_PLUS_H
#define EXPR_CALC_PLUS_H

#include <string>
#include "BinOp.h"


/**
 * Representation of the 
 * plus binary operator. 
 */

class Plus:public BinOp
{
public:
  double eval () const;

    Plus (Expr *, Expr *);

    std::string strOperator () const;
};

#endif