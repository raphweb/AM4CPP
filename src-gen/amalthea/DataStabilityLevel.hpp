// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/DataStabilityLevel.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_DATASTABILITYLEVEL_HPP
#define AMALTHEA_DATASTABILITYLEVEL_HPP

#include <string>

namespace amalthea
{

    enum class DataStabilityLevel
    {
        _undefined_ = 0 /* _undefined_*/
        , period = 0 /* period*/
        , process = 0 /* process*/
        , scheduleSection = 0 /* scheduleSection*/
        , runnable = 0 /* runnable*/
    };
// DataStabilityLevel Values array.
    static const DataStabilityLevel DataStabilityLevel_Values[] =
    { DataStabilityLevel::_undefined_, DataStabilityLevel::period,
            DataStabilityLevel::process, DataStabilityLevel::scheduleSection,
            DataStabilityLevel::runnable };
    inline const std::string getLiteral(DataStabilityLevel e)
    {
        switch (e)
        {
        case DataStabilityLevel::_undefined_:
            return "_undefined_";
        case DataStabilityLevel::period:
            return "period";
        case DataStabilityLevel::process:
            return "process";
        case DataStabilityLevel::scheduleSection:
            return "scheduleSection";
        case DataStabilityLevel::runnable:
            return "runnable";
        }
        return "";
    }
    ;
} // amalthea

#endif
