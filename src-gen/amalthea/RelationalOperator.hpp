// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/RelationalOperator.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_RELATIONALOPERATOR_HPP
#define AMALTHEA_RELATIONALOPERATOR_HPP

#include <string>

namespace amalthea
{

    enum class RelationalOperator
    {
        _undefined_ = 0 /* _undefined_*/
        , EQUAL = 1 /* EQUAL*/
        , NOT_EQUAL = 2 /* NOT_EQUAL*/
        , LESS_THAN = 3 /* LESS_THAN*/
        , GREATER_THAN = 4 /* GREATER_THAN*/
    };
// RelationalOperator Values array.
    static const RelationalOperator RelationalOperator_Values[] =
    { RelationalOperator::_undefined_, RelationalOperator::EQUAL,
            RelationalOperator::NOT_EQUAL, RelationalOperator::LESS_THAN,
            RelationalOperator::GREATER_THAN };
    inline const std::string getLiteral(RelationalOperator e)
    {
        switch (e)
        {
        case RelationalOperator::_undefined_:
            return "_undefined_";
        case RelationalOperator::EQUAL:
            return "EQUAL";
        case RelationalOperator::NOT_EQUAL:
            return "NOT_EQUAL";
        case RelationalOperator::LESS_THAN:
            return "LESS_THAN";
        case RelationalOperator::GREATER_THAN:
            return "GREATER_THAN";
        }
        return "";
    }
    ;
} // amalthea

#endif
