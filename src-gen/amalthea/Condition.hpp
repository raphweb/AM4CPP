// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/Condition.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_CONDITION_HPP
#define AMALTHEA_CONDITION_HPP

#include <string>

namespace amalthea
{

    enum class Condition
    {
        _undefined_ = 0 /* _undefined_*/
        , requires = 0 /* requires*/
        , excludes = 0 /* excludes*/
    };
// Condition Values array.
    static const Condition Condition_Values[] =
    { Condition::_undefined_, Condition::requires, Condition::excludes };
    inline const std::string getLiteral(Condition e)
    {
        switch (e)
        {
        case Condition::_undefined_:
            return "_undefined_";
        case Condition::requires:
            return "requires";
        case Condition::excludes:
            return "excludes";
        }
        return "";
    }
    ;
} // amalthea

#endif
