// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/LatencyType.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_LATENCYTYPE_HPP
#define AMALTHEA_LATENCYTYPE_HPP

#include <string>

namespace amalthea
{

    enum class LatencyType
    {
        _undefined_ = 0 /* _undefined_*/
        , Age = 1 /* Age*/
        , Reaction = 2 /* Reaction*/
    };
// LatencyType Values array.
    static const LatencyType LatencyType_Values[] =
    { LatencyType::_undefined_, LatencyType::Age, LatencyType::Reaction };
    inline const std::string getLiteral(LatencyType e)
    {
        switch (e)
        {
        case LatencyType::_undefined_:
            return "_undefined_";
        case LatencyType::Age:
            return "Age";
        case LatencyType::Reaction:
            return "Reaction";
        }
        return "";
    }
    ;
} // amalthea

#endif
