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
        , activate = 0 /* activate*/
        , start = 0 /* start*/
        , resume = 0 /* resume*/
        , preempt = 0 /* preempt*/
        , poll = 0 /* poll*/
        , run = 0 /* run*/
        , wait = 0 /* wait*/
        , poll_parking = 0 /* poll_parking*/
        , park = 0 /* park*/
        , release_parking = 0 /* release_parking*/
        , release = 0 /* release*/
        , terminate = 0 /* terminate*/
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
