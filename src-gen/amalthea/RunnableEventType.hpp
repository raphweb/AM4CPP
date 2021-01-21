// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/RunnableEventType.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_RUNNABLEEVENTTYPE_HPP
#define AMALTHEA_RUNNABLEEVENTTYPE_HPP

#include <string>

namespace amalthea
{

    enum class RunnableEventType
    {
        _all_ = 0 /* _all_*/
        , start = 1 /* start*/
        , suspend = 2 /* suspend*/
        , resume = 3 /* resume*/
        , terminate = 4 /* terminate*/
    };
// RunnableEventType Values array.
    static const RunnableEventType RunnableEventType_Values[] =
    { RunnableEventType::_all_, RunnableEventType::start,
            RunnableEventType::suspend, RunnableEventType::resume,
            RunnableEventType::terminate };
    inline const std::string getLiteral(RunnableEventType e)
    {
        switch (e)
        {
        case RunnableEventType::_all_:
            return "_all_";
        case RunnableEventType::start:
            return "start";
        case RunnableEventType::suspend:
            return "suspend";
        case RunnableEventType::resume:
            return "resume";
        case RunnableEventType::terminate:
            return "terminate";
        }
        return "";
    }
    ;
} // amalthea

#endif
