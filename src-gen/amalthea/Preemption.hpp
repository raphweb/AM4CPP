// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/Preemption.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_PREEMPTION_HPP
#define AMALTHEA_PREEMPTION_HPP

#include <string>

namespace amalthea
{

    enum class Preemption
    {
        _undefined_ = 0 /* _undefined_*/
        , preemptive = 0 /* preemptive*/
        , cooperative = 0 /* cooperative*/
        , non_preemptive = 0 /* non_preemptive*/
    };
// Preemption Values array.
    static const Preemption Preemption_Values[] =
    { Preemption::_undefined_, Preemption::preemptive, Preemption::cooperative,
            Preemption::non_preemptive };
    inline const std::string getLiteral(Preemption e)
    {
        switch (e)
        {
        case Preemption::_undefined_:
            return "_undefined_";
        case Preemption::preemptive:
            return "preemptive";
        case Preemption::cooperative:
            return "cooperative";
        case Preemption::non_preemptive:
            return "non_preemptive";
        }
        return "";
    }
    ;
} // amalthea

#endif
