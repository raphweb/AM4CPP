// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/SchedPolicy.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_SCHEDPOLICY_HPP
#define AMALTHEA_SCHEDPOLICY_HPP

#include <string>

namespace amalthea
{

    enum class SchedPolicy
    {
        _undefined_ = 0 /* _undefined_*/
        , RoundRobin = 0 /* RoundRobin*/
        , FCFS = 0 /* FCFS*/
        , PriorityBased = 0 /* PriorityBased*/
    };
// SchedPolicy Values array.
    static const SchedPolicy SchedPolicy_Values[] =
    { SchedPolicy::_undefined_, SchedPolicy::RoundRobin, SchedPolicy::FCFS,
            SchedPolicy::PriorityBased };
    inline const std::string getLiteral(SchedPolicy e)
    {
        switch (e)
        {
        case SchedPolicy::_undefined_:
            return "_undefined_";
        case SchedPolicy::RoundRobin:
            return "RoundRobin";
        case SchedPolicy::FCFS:
            return "FCFS";
        case SchedPolicy::PriorityBased:
            return "PriorityBased";
        }
        return "";
    }
    ;
} // amalthea

#endif
