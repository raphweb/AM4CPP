// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/OsDataConsistencyMode.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_OSDATACONSISTENCYMODE_HPP
#define AMALTHEA_OSDATACONSISTENCYMODE_HPP

#include <string>

namespace amalthea
{

    enum class OsDataConsistencyMode
    {
        _undefined_ = 0 /* _undefined_*/
        , noProtection = 0 /* noProtection*/
        , automaticProtection = 0 /* automaticProtection*/
        , customProtection = 0 /* customProtection*/
        , handledByModelElements = 0 /* handledByModelElements*/
    };
// OsDataConsistencyMode Values array.
    static const OsDataConsistencyMode OsDataConsistencyMode_Values[] =
    { OsDataConsistencyMode::_undefined_, OsDataConsistencyMode::noProtection,
            OsDataConsistencyMode::automaticProtection,
            OsDataConsistencyMode::customProtection,
            OsDataConsistencyMode::handledByModelElements };
    inline const std::string getLiteral(OsDataConsistencyMode e)
    {
        switch (e)
        {
        case OsDataConsistencyMode::_undefined_:
            return "_undefined_";
        case OsDataConsistencyMode::noProtection:
            return "noProtection";
        case OsDataConsistencyMode::automaticProtection:
            return "automaticProtection";
        case OsDataConsistencyMode::customProtection:
            return "customProtection";
        case OsDataConsistencyMode::handledByModelElements:
            return "handledByModelElements";
        }
        return "";
    }
    ;
} // amalthea

#endif
