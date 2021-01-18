// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/CPUPercentageMetric.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_CPUPERCENTAGEMETRIC_HPP
#define AMALTHEA_CPUPERCENTAGEMETRIC_HPP

#include <string>

namespace amalthea
{

    enum class CPUPercentageMetric
    {
        _undefined_ = 0 /* _undefined_*/
        , CPUBuffering = 0 /* CPUBuffering*/
        , CPULoad = 0 /* CPULoad*/
        , CPUParking = 0 /* CPUParking*/
        , CPUPolling = 0 /* CPUPolling*/
        , CPUReady = 0 /* CPUReady*/
        , CPURunning = 0 /* CPURunning*/
        , CPUWaiting = 0 /* CPUWaiting*/
    };
// CPUPercentageMetric Values array.
    static const CPUPercentageMetric CPUPercentageMetric_Values[] =
    { CPUPercentageMetric::_undefined_, CPUPercentageMetric::CPUBuffering,
            CPUPercentageMetric::CPULoad, CPUPercentageMetric::CPUParking,
            CPUPercentageMetric::CPUPolling, CPUPercentageMetric::CPUReady,
            CPUPercentageMetric::CPURunning, CPUPercentageMetric::CPUWaiting };
    inline const std::string getLiteral(CPUPercentageMetric e)
    {
        switch (e)
        {
        case CPUPercentageMetric::_undefined_:
            return "_undefined_";
        case CPUPercentageMetric::CPUBuffering:
            return "CPUBuffering";
        case CPUPercentageMetric::CPULoad:
            return "CPULoad";
        case CPUPercentageMetric::CPUParking:
            return "CPUParking";
        case CPUPercentageMetric::CPUPolling:
            return "CPUPolling";
        case CPUPercentageMetric::CPUReady:
            return "CPUReady";
        case CPUPercentageMetric::CPURunning:
            return "CPURunning";
        case CPUPercentageMetric::CPUWaiting:
            return "CPUWaiting";
        }
        return "";
    }
    ;
} // amalthea

#endif
