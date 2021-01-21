// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/ComponentEventType.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_COMPONENTEVENTTYPE_HPP
#define AMALTHEA_COMPONENTEVENTTYPE_HPP

#include <string>

namespace amalthea
{

    enum class ComponentEventType
    {
        _all_ = 0 /* _all_*/
        , start = 1 /* start*/
        , end = 2 /* end*/
    };
// ComponentEventType Values array.
    static const ComponentEventType ComponentEventType_Values[] =
    { ComponentEventType::_all_, ComponentEventType::start,
            ComponentEventType::end };
    inline const std::string getLiteral(ComponentEventType e)
    {
        switch (e)
        {
        case ComponentEventType::_all_:
            return "_all_";
        case ComponentEventType::start:
            return "start";
        case ComponentEventType::end:
            return "end";
        }
        return "";
    }
    ;
} // amalthea

#endif
