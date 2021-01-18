// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/AccessPrecedenceType.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_ACCESSPRECEDENCETYPE_HPP
#define AMALTHEA_ACCESSPRECEDENCETYPE_HPP

#include <string>

namespace amalthea
{

    enum class AccessPrecedenceType
    {
        _undefined_ = 0 /* _undefined_*/
        , defaultWR = 0 /* defaultWR*/
        , ignoreWR = 0 /* ignoreWR*/
        , enforceRW = 0 /* enforceRW*/
    };
// AccessPrecedenceType Values array.
    static const AccessPrecedenceType AccessPrecedenceType_Values[] =
    { AccessPrecedenceType::_undefined_, AccessPrecedenceType::defaultWR,
            AccessPrecedenceType::ignoreWR, AccessPrecedenceType::enforceRW };
    inline const std::string getLiteral(AccessPrecedenceType e)
    {
        switch (e)
        {
        case AccessPrecedenceType::_undefined_:
            return "_undefined_";
        case AccessPrecedenceType::defaultWR:
            return "defaultWR";
        case AccessPrecedenceType::ignoreWR:
            return "ignoreWR";
        case AccessPrecedenceType::enforceRW:
            return "enforceRW";
        }
        return "";
    }
    ;
} // amalthea

#endif
