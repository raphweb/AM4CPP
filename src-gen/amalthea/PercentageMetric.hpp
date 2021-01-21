// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/PercentageMetric.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_PERCENTAGEMETRIC_HPP
#define AMALTHEA_PERCENTAGEMETRIC_HPP

#include <string>

namespace amalthea
{

    enum class PercentageMetric
    {
        _undefined_ = 0 /* _undefined_*/
        , CacheHitRatio = 1 /* CacheHitRatio*/
        , CacheMissRatio = 2 /* CacheMissRatio*/
        , CoreExecutionTimeRelative = 3 /* CoreExecutionTimeRelative*/
        , MemoryAccessTimeRelative = 4 /* MemoryAccessTimeRelative*/
        , NormalizedLateness = 5 /* NormalizedLateness*/
        , NormalizedResponseTime = 6 /* NormalizedResponseTime*/
        , OsOverheadRelative = 7 /* OsOverheadRelative*/
    };
// PercentageMetric Values array.
    static const PercentageMetric PercentageMetric_Values[] =
    { PercentageMetric::_undefined_, PercentageMetric::CacheHitRatio,
            PercentageMetric::CacheMissRatio,
            PercentageMetric::CoreExecutionTimeRelative,
            PercentageMetric::MemoryAccessTimeRelative,
            PercentageMetric::NormalizedLateness,
            PercentageMetric::NormalizedResponseTime,
            PercentageMetric::OsOverheadRelative };
    inline const std::string getLiteral(PercentageMetric e)
    {
        switch (e)
        {
        case PercentageMetric::_undefined_:
            return "_undefined_";
        case PercentageMetric::CacheHitRatio:
            return "CacheHitRatio";
        case PercentageMetric::CacheMissRatio:
            return "CacheMissRatio";
        case PercentageMetric::CoreExecutionTimeRelative:
            return "CoreExecutionTimeRelative";
        case PercentageMetric::MemoryAccessTimeRelative:
            return "MemoryAccessTimeRelative";
        case PercentageMetric::NormalizedLateness:
            return "NormalizedLateness";
        case PercentageMetric::NormalizedResponseTime:
            return "NormalizedResponseTime";
        case PercentageMetric::OsOverheadRelative:
            return "OsOverheadRelative";
        }
        return "";
    }
    ;
} // amalthea

#endif
