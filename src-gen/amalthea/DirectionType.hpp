// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/DirectionType.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_DIRECTIONTYPE_HPP
#define AMALTHEA_DIRECTIONTYPE_HPP

#include <string>

namespace amalthea
{

    enum class DirectionType
    {
        _undefined_ = 0 /* _undefined_*/
        , in = 0 /* in*/
        , out = 0 /* out*/
        , inout = 0 /* inout*/
    };
// DirectionType Values array.
    static const DirectionType DirectionType_Values[] =
    { DirectionType::_undefined_, DirectionType::in, DirectionType::out,
            DirectionType::inout };
    inline const std::string getLiteral(DirectionType e)
    {
        switch (e)
        {
        case DirectionType::_undefined_:
            return "_undefined_";
        case DirectionType::in:
            return "in";
        case DirectionType::out:
            return "out";
        case DirectionType::inout:
            return "inout";
        }
        return "";
    }
    ;
} // amalthea

#endif
