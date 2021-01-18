// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/FrequencyUnit.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_FREQUENCYUNIT_HPP
#define AMALTHEA_FREQUENCYUNIT_HPP

#include <string>

namespace amalthea
{

    enum class FrequencyUnit
    {
        _undefined_ = 0 /* _undefined_*/
        , Hz = 0 /* Hz*/
        , kHz = 0 /* kHz*/
        , MHz = 0 /* MHz*/
        , GHz = 0 /* GHz*/
    };
// FrequencyUnit Values array.
    static const FrequencyUnit FrequencyUnit_Values[] =
    { FrequencyUnit::_undefined_, FrequencyUnit::Hz, FrequencyUnit::kHz,
            FrequencyUnit::MHz, FrequencyUnit::GHz };
    inline const std::string getLiteral(FrequencyUnit e)
    {
        switch (e)
        {
        case FrequencyUnit::_undefined_:
            return "_undefined_";
        case FrequencyUnit::Hz:
            return "Hz";
        case FrequencyUnit::kHz:
            return "kHz";
        case FrequencyUnit::MHz:
            return "MHz";
        case FrequencyUnit::GHz:
            return "GHz";
        }
        return "";
    }
    ;
} // amalthea

#endif
