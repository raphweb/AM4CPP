// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/AccessMultiplicity.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_ACCESSMULTIPLICITY_HPP
#define AMALTHEA_ACCESSMULTIPLICITY_HPP

#include <string>

namespace amalthea
{

    enum class AccessMultiplicity
    {
        _undefined_ = 0 /* _undefined_*/
        , singleAccess = 0 /* singleAccess*/
        , multipleAccesses = 0 /* multipleAccesses*/
    };
// AccessMultiplicity Values array.
    static const AccessMultiplicity AccessMultiplicity_Values[] =
    { AccessMultiplicity::_undefined_, AccessMultiplicity::singleAccess,
            AccessMultiplicity::multipleAccesses };
    inline const std::string getLiteral(AccessMultiplicity e)
    {
        switch (e)
        {
        case AccessMultiplicity::_undefined_:
            return "_undefined_";
        case AccessMultiplicity::singleAccess:
            return "singleAccess";
        case AccessMultiplicity::multipleAccesses:
            return "multipleAccesses";
        }
        return "";
    }
    ;
} // amalthea

#endif
