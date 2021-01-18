// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/Severity.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_SEVERITY_HPP
#define AMALTHEA_SEVERITY_HPP

#include <string>

namespace amalthea
{

    enum class Severity
    {
        _undefined_ = 0 /* _undefined_*/
        , Cosmetic = 0 /* Cosmetic*/
        , Minor = 0 /* Minor*/
        , Major = 0 /* Major*/
        , Critical = 0 /* Critical*/
    };
// Severity Values array.
    static const Severity Severity_Values[] =
    { Severity::_undefined_, Severity::Cosmetic, Severity::Minor,
            Severity::Major, Severity::Critical };
    inline const std::string getLiteral(Severity e)
    {
        switch (e)
        {
        case Severity::_undefined_:
            return "_undefined_";
        case Severity::Cosmetic:
            return "Cosmetic";
        case Severity::Minor:
            return "Minor";
        case Severity::Major:
            return "Major";
        case Severity::Critical:
            return "Critical";
        }
        return "";
    }
    ;
} // amalthea

#endif
