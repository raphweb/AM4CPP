// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/SynchronizationType.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_SYNCHRONIZATIONTYPE_HPP
#define AMALTHEA_SYNCHRONIZATIONTYPE_HPP

#include <string>

namespace amalthea
{

    enum class SynchronizationType
    {
        _undefined_ = 0 /* _undefined_*/
        , Stimulus = 0 /* Stimulus*/
        , Response = 0 /* Response*/
    };
// SynchronizationType Values array.
    static const SynchronizationType SynchronizationType_Values[] =
    { SynchronizationType::_undefined_, SynchronizationType::Stimulus,
            SynchronizationType::Response };
    inline const std::string getLiteral(SynchronizationType e)
    {
        switch (e)
        {
        case SynchronizationType::_undefined_:
            return "_undefined_";
        case SynchronizationType::Stimulus:
            return "Stimulus";
        case SynchronizationType::Response:
            return "Response";
        }
        return "";
    }
    ;
} // amalthea

#endif
