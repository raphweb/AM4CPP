// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/InterfaceKind.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_INTERFACEKIND_HPP
#define AMALTHEA_INTERFACEKIND_HPP

#include <string>

namespace amalthea
{

    enum class InterfaceKind
    {
        _undefined_ = 0 /* _undefined_*/
        , provides = 0 /* provides*/
        , requires = 0 /* requires*/
        , provides_requires = 0 /* provides_requires*/
    };
// InterfaceKind Values array.
    static const InterfaceKind InterfaceKind_Values[] =
    { InterfaceKind::_undefined_, InterfaceKind::provides,
            InterfaceKind::requires, InterfaceKind::provides_requires };
    inline const std::string getLiteral(InterfaceKind e)
    {
        switch (e)
        {
        case InterfaceKind::_undefined_:
            return "_undefined_";
        case InterfaceKind::provides:
            return "provides";
        case InterfaceKind::requires:
            return "requires";
        case InterfaceKind::provides_requires:
            return "provides_requires";
        }
        return "";
    }
    ;
} // amalthea

#endif
