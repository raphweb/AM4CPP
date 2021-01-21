// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/LimitType.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_LIMITTYPE_HPP
#define AMALTHEA_LIMITTYPE_HPP

#include <string>

namespace amalthea
{

    enum class LimitType
    {
        _undefined_ = 0 /* _undefined_*/
        , UpperLimit = 1 /* UpperLimit*/
        , LowerLimit = 2 /* LowerLimit*/
    };
// LimitType Values array.
    static const LimitType LimitType_Values[] =
    { LimitType::_undefined_, LimitType::UpperLimit, LimitType::LowerLimit };
    inline const std::string getLiteral(LimitType e)
    {
        switch (e)
        {
        case LimitType::_undefined_:
            return "_undefined_";
        case LimitType::UpperLimit:
            return "UpperLimit";
        case LimitType::LowerLimit:
            return "LowerLimit";
        }
        return "";
    }
    ;
} // amalthea

#endif
