// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/TimeMetric.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_TIMEMETRIC_HPP
#define AMALTHEA_TIMEMETRIC_HPP

#include <string>

namespace amalthea
{

    enum class TimeMetric
    {
        _undefined_ = 0 /* _undefined_*/
        , ActivateToActivate = 0 /* ActivateToActivate*/
        , CoreExecutionTime = 0 /* CoreExecutionTime*/
        , EndToEnd = 0 /* EndToEnd*/
        , EndToStart = 0 /* EndToStart*/
        , GrossExecutionTime = 0 /* GrossExecutionTime*/
        , Lateness = 0 /* Lateness*/
        , MemoryAccessTime = 0 /* MemoryAccessTime*/
        , NetExecutionTime = 0 /* NetExecutionTime*/
        , OsOverhead = 0 /* OsOverhead*/
        , ParkingTime = 0 /* ParkingTime*/
        , PollingTime = 0 /* PollingTime*/
        , ReadyTime = 0 /* ReadyTime*/
        , ResponseTime = 0 /* ResponseTime*/
        , RunningTime = 0 /* RunningTime*/
        , StartDelay = 0 /* StartDelay*/
        , StartToStart = 0 /* StartToStart*/
        , WaitingTime = 0 /* WaitingTime*/
    };
// TimeMetric Values array.
    static const TimeMetric TimeMetric_Values[] =
    { TimeMetric::_undefined_, TimeMetric::ActivateToActivate,
            TimeMetric::CoreExecutionTime, TimeMetric::EndToEnd,
            TimeMetric::EndToStart, TimeMetric::GrossExecutionTime,
            TimeMetric::Lateness, TimeMetric::MemoryAccessTime,
            TimeMetric::NetExecutionTime, TimeMetric::OsOverhead,
            TimeMetric::ParkingTime, TimeMetric::PollingTime,
            TimeMetric::ReadyTime, TimeMetric::ResponseTime,
            TimeMetric::RunningTime, TimeMetric::StartDelay,
            TimeMetric::StartToStart, TimeMetric::WaitingTime };
    inline const std::string getLiteral(TimeMetric e)
    {
        switch (e)
        {
        case TimeMetric::_undefined_:
            return "_undefined_";
        case TimeMetric::ActivateToActivate:
            return "ActivateToActivate";
        case TimeMetric::CoreExecutionTime:
            return "CoreExecutionTime";
        case TimeMetric::EndToEnd:
            return "EndToEnd";
        case TimeMetric::EndToStart:
            return "EndToStart";
        case TimeMetric::GrossExecutionTime:
            return "GrossExecutionTime";
        case TimeMetric::Lateness:
            return "Lateness";
        case TimeMetric::MemoryAccessTime:
            return "MemoryAccessTime";
        case TimeMetric::NetExecutionTime:
            return "NetExecutionTime";
        case TimeMetric::OsOverhead:
            return "OsOverhead";
        case TimeMetric::ParkingTime:
            return "ParkingTime";
        case TimeMetric::PollingTime:
            return "PollingTime";
        case TimeMetric::ReadyTime:
            return "ReadyTime";
        case TimeMetric::ResponseTime:
            return "ResponseTime";
        case TimeMetric::RunningTime:
            return "RunningTime";
        case TimeMetric::StartDelay:
            return "StartDelay";
        case TimeMetric::StartToStart:
            return "StartToStart";
        case TimeMetric::WaitingTime:
            return "WaitingTime";
        }
        return "";
    }
    ;
} // amalthea

#endif
