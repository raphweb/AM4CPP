// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/EventChainItemType.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_EVENTCHAINITEMTYPE_HPP
#define AMALTHEA_EVENTCHAINITEMTYPE_HPP

#include <string>

namespace amalthea
{

    enum class EventChainItemType
    {
        _undefined_ = 0 /* _undefined_*/
        , sequence = 1 /* sequence*/
        , parallel = 2 /* parallel*/
    };
// EventChainItemType Values array.
    static const EventChainItemType EventChainItemType_Values[] =
    { EventChainItemType::_undefined_, EventChainItemType::sequence,
            EventChainItemType::parallel };
    inline const std::string getLiteral(EventChainItemType e)
    {
        switch (e)
        {
        case EventChainItemType::_undefined_:
            return "_undefined_";
        case EventChainItemType::sequence:
            return "sequence";
        case EventChainItemType::parallel:
            return "parallel";
        }
        return "";
    }
    ;
} // amalthea

#endif
