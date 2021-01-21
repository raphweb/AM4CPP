// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/TimeUnit.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_TIMEUNIT_HPP
#define AMALTHEA_TIMEUNIT_HPP

#include <string>

namespace amalthea
{

    enum class TimeUnit
    {
        _undefined_ = 0 /* _undefined_*/
        , s = 1 /* s*/
        , ms = 2 /* ms*/
        , us = 3 /* us*/
        , ns = 4 /* ns*/
        , ps = 5 /* ps*/
    };
// TimeUnit Values array.
    static const TimeUnit TimeUnit_Values[] =
    { TimeUnit::_undefined_, TimeUnit::s, TimeUnit::ms, TimeUnit::us,
            TimeUnit::ns, TimeUnit::ps };
    inline const std::string getLiteral(TimeUnit e)
    {
        switch (e)
        {
        case TimeUnit::_undefined_:
            return "_undefined_";
        case TimeUnit::s:
            return "s";
        case TimeUnit::ms:
            return "ms";
        case TimeUnit::us:
            return "us";
        case TimeUnit::ns:
            return "ns";
        case TimeUnit::ps:
            return "ps";
        }
        return "";
    }
    ;
} // amalthea

#endif
