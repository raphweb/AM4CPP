// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/WaitEventType.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_WAITEVENTTYPE_HPP
#define AMALTHEA_WAITEVENTTYPE_HPP

#include <string>

namespace amalthea
{

    enum class WaitEventType
    {
        _undefined_ = 0 /* _undefined_*/
        , AND = 0 /* AND*/
        , OR = 0 /* OR*/
    };
// WaitEventType Values array.
    static const WaitEventType WaitEventType_Values[] =
    { WaitEventType::_undefined_, WaitEventType::AND, WaitEventType::OR };
    inline const std::string getLiteral(WaitEventType e)
    {
        switch (e)
        {
        case WaitEventType::_undefined_:
            return "_undefined_";
        case WaitEventType::AND:
            return "AND";
        case WaitEventType::OR:
            return "OR";
        }
        return "";
    }
    ;
} // amalthea

#endif
