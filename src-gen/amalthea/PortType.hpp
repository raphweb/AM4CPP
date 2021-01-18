// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/PortType.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_PORTTYPE_HPP
#define AMALTHEA_PORTTYPE_HPP

#include <string>

namespace amalthea
{

    enum class PortType
    {
        _undefined_ = 0 /* _undefined_*/
        , initiator = 0 /* initiator*/
        , responder = 0 /* responder*/
    };
// PortType Values array.
    static const PortType PortType_Values[] =
    { PortType::_undefined_, PortType::initiator, PortType::responder };
    inline const std::string getLiteral(PortType e)
    {
        switch (e)
        {
        case PortType::_undefined_:
            return "_undefined_";
        case PortType::initiator:
            return "initiator";
        case PortType::responder:
            return "responder";
        }
        return "";
    }
    ;
} // amalthea

#endif
