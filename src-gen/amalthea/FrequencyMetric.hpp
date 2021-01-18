// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/FrequencyMetric.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_FREQUENCYMETRIC_HPP
#define AMALTHEA_FREQUENCYMETRIC_HPP

#include <string>

namespace amalthea
{

    enum class FrequencyMetric
    {
        _undefined_ = 0 /* _undefined_*/
        , CacheHitFrequency = 0 /* CacheHitFrequency*/
        , CacheMissFrequency = 0 /* CacheMissFrequency*/
    };
// FrequencyMetric Values array.
    static const FrequencyMetric FrequencyMetric_Values[] =
    { FrequencyMetric::_undefined_, FrequencyMetric::CacheHitFrequency,
            FrequencyMetric::CacheMissFrequency };
    inline const std::string getLiteral(FrequencyMetric e)
    {
        switch (e)
        {
        case FrequencyMetric::_undefined_:
            return "_undefined_";
        case FrequencyMetric::CacheHitFrequency:
            return "CacheHitFrequency";
        case FrequencyMetric::CacheMissFrequency:
            return "CacheMissFrequency";
        }
        return "";
    }
    ;
} // amalthea

#endif
