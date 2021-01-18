// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/LabelDataStability.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_LABELDATASTABILITY_HPP
#define AMALTHEA_LABELDATASTABILITY_HPP

#include <string>

namespace amalthea
{

    enum class LabelDataStability
    {
        _undefined_ = 0 /* _undefined_*/
        , noProtection = 0 /* noProtection*/
        , automaticProtection = 0 /* automaticProtection*/
        , customProtection = 0 /* customProtection*/
        , handledByModelElements = 0 /* handledByModelElements*/
    };
// LabelDataStability Values array.
    static const LabelDataStability LabelDataStability_Values[] =
    { LabelDataStability::_undefined_, LabelDataStability::noProtection,
            LabelDataStability::automaticProtection,
            LabelDataStability::customProtection,
            LabelDataStability::handledByModelElements };
    inline const std::string getLiteral(LabelDataStability e)
    {
        switch (e)
        {
        case LabelDataStability::_undefined_:
            return "_undefined_";
        case LabelDataStability::noProtection:
            return "noProtection";
        case LabelDataStability::automaticProtection:
            return "automaticProtection";
        case LabelDataStability::customProtection:
            return "customProtection";
        case LabelDataStability::handledByModelElements:
            return "handledByModelElements";
        }
        return "";
    }
    ;
} // amalthea

#endif
