// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/HwFeatureType.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_HWFEATURETYPE_HPP
#define AMALTHEA_HWFEATURETYPE_HPP

#include <string>

namespace amalthea
{

    enum class HwFeatureType
    {
        _undefined_ = 0 /* _undefined_*/
        , performance = 0 /* performance*/
        , power = 0 /* power*/
        , performance_and_power = 0 /* performance_and_power*/
    };
// HwFeatureType Values array.
    static const HwFeatureType HwFeatureType_Values[] =
    { HwFeatureType::_undefined_, HwFeatureType::performance,
            HwFeatureType::power, HwFeatureType::performance_and_power };
    inline const std::string getLiteral(HwFeatureType e)
    {
        switch (e)
        {
        case HwFeatureType::_undefined_:
            return "_undefined_";
        case HwFeatureType::performance:
            return "performance";
        case HwFeatureType::power:
            return "power";
        case HwFeatureType::performance_and_power:
            return "performance_and_power";
        }
        return "";
    }
    ;
} // amalthea

#endif
