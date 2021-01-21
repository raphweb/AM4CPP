// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/CoherencyDirection.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_COHERENCYDIRECTION_HPP
#define AMALTHEA_COHERENCYDIRECTION_HPP

#include <string>

namespace amalthea
{

    enum class CoherencyDirection
    {
        _undefined_ = 0 /* _undefined_*/
        , input = 1 /* input*/
        , output = 2 /* output*/
    };
// CoherencyDirection Values array.
    static const CoherencyDirection CoherencyDirection_Values[] =
    { CoherencyDirection::_undefined_, CoherencyDirection::input,
            CoherencyDirection::output };
    inline const std::string getLiteral(CoherencyDirection e)
    {
        switch (e)
        {
        case CoherencyDirection::_undefined_:
            return "_undefined_";
        case CoherencyDirection::input:
            return "input";
        case CoherencyDirection::output:
            return "output";
        }
        return "";
    }
    ;
} // amalthea

#endif
