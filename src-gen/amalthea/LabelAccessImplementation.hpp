// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/LabelAccessImplementation.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_LABELACCESSIMPLEMENTATION_HPP
#define AMALTHEA_LABELACCESSIMPLEMENTATION_HPP

#include <string>

namespace amalthea
{

    enum class LabelAccessImplementation
    {
        _undefined_ = 0 /* _undefined_*/
        , _explicit = 1 /* explicit*/
        , implicit = 2 /* implicit*/
        , timed = 3 /* timed*/
    };
// LabelAccessImplementation Values array.
    static const LabelAccessImplementation LabelAccessImplementation_Values[] =
    { LabelAccessImplementation::_undefined_,
            LabelAccessImplementation::_explicit,
            LabelAccessImplementation::implicit,
            LabelAccessImplementation::timed };
    inline const std::string getLiteral(LabelAccessImplementation e)
    {
        switch (e)
        {
        case LabelAccessImplementation::_undefined_:
            return "_undefined_";
        case LabelAccessImplementation::_explicit:
            return "explicit";
        case LabelAccessImplementation::implicit:
            return "implicit";
        case LabelAccessImplementation::timed:
            return "timed";
        }
        return "";
    }
    ;
} // amalthea

#endif
