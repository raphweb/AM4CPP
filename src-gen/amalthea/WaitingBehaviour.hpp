// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/WaitingBehaviour.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_WAITINGBEHAVIOUR_HPP
#define AMALTHEA_WAITINGBEHAVIOUR_HPP

#include <string>

namespace amalthea
{

    enum class WaitingBehaviour
    {
        _undefined_ = 0 /* _undefined_*/
        , active = 0 /* active*/
        , passive = 0 /* passive*/
    };
// WaitingBehaviour Values array.
    static const WaitingBehaviour WaitingBehaviour_Values[] =
    { WaitingBehaviour::_undefined_, WaitingBehaviour::active,
            WaitingBehaviour::passive };
    inline const std::string getLiteral(WaitingBehaviour e)
    {
        switch (e)
        {
        case WaitingBehaviour::_undefined_:
            return "_undefined_";
        case WaitingBehaviour::active:
            return "active";
        case WaitingBehaviour::passive:
            return "passive";
        }
        return "";
    }
    ;
} // amalthea

#endif
