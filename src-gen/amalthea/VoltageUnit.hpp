// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/VoltageUnit.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_VOLTAGEUNIT_HPP
#define AMALTHEA_VOLTAGEUNIT_HPP

#include <string>

namespace amalthea
{

    enum class VoltageUnit
    {
        _undefined_ = 0 /* _undefined_*/
        , uV = 1 /* uV*/
        , mV = 2 /* mV*/
        , V = 3 /* V*/
    };
// VoltageUnit Values array.
    static const VoltageUnit VoltageUnit_Values[] =
            { VoltageUnit::_undefined_, VoltageUnit::uV, VoltageUnit::mV,
                    VoltageUnit::V };
    inline const std::string getLiteral(VoltageUnit e)
    {
        switch (e)
        {
        case VoltageUnit::_undefined_:
            return "_undefined_";
        case VoltageUnit::uV:
            return "uV";
        case VoltageUnit::mV:
            return "mV";
        case VoltageUnit::V:
            return "V";
        }
        return "";
    }
    ;
} // amalthea

#endif
