// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/SemaphoreEventType.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_SEMAPHOREEVENTTYPE_HPP
#define AMALTHEA_SEMAPHOREEVENTTYPE_HPP

#include <string>

namespace amalthea
{

    enum class SemaphoreEventType
    {
        _all_ = 0 /* _all_*/
        , lock = 1 /* lock*/
        , unlock = 2 /* unlock*/
    };
// SemaphoreEventType Values array.
    static const SemaphoreEventType SemaphoreEventType_Values[] =
    { SemaphoreEventType::_all_, SemaphoreEventType::lock,
            SemaphoreEventType::unlock };
    inline const std::string getLiteral(SemaphoreEventType e)
    {
        switch (e)
        {
        case SemaphoreEventType::_all_:
            return "_all_";
        case SemaphoreEventType::lock:
            return "lock";
        case SemaphoreEventType::unlock:
            return "unlock";
        }
        return "";
    }
    ;
} // amalthea

#endif
