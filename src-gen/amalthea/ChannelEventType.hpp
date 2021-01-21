// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/ChannelEventType.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_CHANNELEVENTTYPE_HPP
#define AMALTHEA_CHANNELEVENTTYPE_HPP

#include <string>

namespace amalthea
{

    enum class ChannelEventType
    {
        _all_ = 0 /* _all_*/
        , send = 1 /* send*/
        , receive = 2 /* receive*/
    };
// ChannelEventType Values array.
    static const ChannelEventType ChannelEventType_Values[] =
            { ChannelEventType::_all_, ChannelEventType::send,
                    ChannelEventType::receive };
    inline const std::string getLiteral(ChannelEventType e)
    {
        switch (e)
        {
        case ChannelEventType::_all_:
            return "_all_";
        case ChannelEventType::send:
            return "send";
        case ChannelEventType::receive:
            return "receive";
        }
        return "";
    }
    ;
} // amalthea

#endif
