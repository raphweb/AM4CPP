// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/LabelAccessDataStability.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_LABELACCESSDATASTABILITY_HPP
#define AMALTHEA_LABELACCESSDATASTABILITY_HPP

#include <string>

namespace amalthea
{

    enum class LabelAccessDataStability
    {
        _undefined_ = 0 /* _undefined_*/
        , inherited = 1 /* inherited*/
        , noProtection = 2 /* noProtection*/
        , automaticProtection = 3 /* automaticProtection*/
        , customProtection = 4 /* customProtection*/
        , handledByModelElements = 5 /* handledByModelElements*/
    };
// LabelAccessDataStability Values array.
    static const LabelAccessDataStability LabelAccessDataStability_Values[] =
    { LabelAccessDataStability::_undefined_,
            LabelAccessDataStability::inherited,
            LabelAccessDataStability::noProtection,
            LabelAccessDataStability::automaticProtection,
            LabelAccessDataStability::customProtection,
            LabelAccessDataStability::handledByModelElements };
    inline const std::string getLiteral(LabelAccessDataStability e)
    {
        switch (e)
        {
        case LabelAccessDataStability::_undefined_:
            return "_undefined_";
        case LabelAccessDataStability::inherited:
            return "inherited";
        case LabelAccessDataStability::noProtection:
            return "noProtection";
        case LabelAccessDataStability::automaticProtection:
            return "automaticProtection";
        case LabelAccessDataStability::customProtection:
            return "customProtection";
        case LabelAccessDataStability::handledByModelElements:
            return "handledByModelElements";
        }
        return "";
    }
    ;
} // amalthea

#endif
