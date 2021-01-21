// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/ProcessEventType.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_PROCESSEVENTTYPE_HPP
#define AMALTHEA_PROCESSEVENTTYPE_HPP

#include <string>

namespace amalthea
{

    enum class ProcessEventType
    {
        _all_ = 0 /* _all_*/
        , activate = 1 /* activate*/
        , start = 2 /* start*/
        , resume = 3 /* resume*/
        , preempt = 4 /* preempt*/
        , poll = 5 /* poll*/
        , run = 6 /* run*/
        , wait = 7 /* wait*/
        , poll_parking = 8 /* poll_parking*/
        , park = 9 /* park*/
        , release_parking = 10 /* release_parking*/
        , release = 11 /* release*/
        , terminate = 12 /* terminate*/
    };
// ProcessEventType Values array.
    static const ProcessEventType ProcessEventType_Values[] =
    { ProcessEventType::_all_, ProcessEventType::activate,
            ProcessEventType::start, ProcessEventType::resume,
            ProcessEventType::preempt, ProcessEventType::poll,
            ProcessEventType::run, ProcessEventType::wait,
            ProcessEventType::poll_parking, ProcessEventType::park,
            ProcessEventType::release_parking, ProcessEventType::release,
            ProcessEventType::terminate };
    inline const std::string getLiteral(ProcessEventType e)
    {
        switch (e)
        {
        case ProcessEventType::_all_:
            return "_all_";
        case ProcessEventType::activate:
            return "activate";
        case ProcessEventType::start:
            return "start";
        case ProcessEventType::resume:
            return "resume";
        case ProcessEventType::preempt:
            return "preempt";
        case ProcessEventType::poll:
            return "poll";
        case ProcessEventType::run:
            return "run";
        case ProcessEventType::wait:
            return "wait";
        case ProcessEventType::poll_parking:
            return "poll_parking";
        case ProcessEventType::park:
            return "park";
        case ProcessEventType::release_parking:
            return "release_parking";
        case ProcessEventType::release:
            return "release";
        case ProcessEventType::terminate:
            return "terminate";
        }
        return "";
    }
    ;
} // amalthea

#endif
