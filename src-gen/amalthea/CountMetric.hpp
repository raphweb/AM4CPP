// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/CountMetric.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_COUNTMETRIC_HPP
#define AMALTHEA_COUNTMETRIC_HPP

#include <string>

namespace amalthea
{

    enum class CountMetric
    {
        _undefined_ = 0 /* _undefined_*/
        , Activations = 0 /* Activations*/
        , BoundedMigrations = 0 /* BoundedMigrations*/
        , CacheHit = 0 /* CacheHit*/
        , CacheMiss = 0 /* CacheMiss*/
        , FullMigrations = 0 /* FullMigrations*/
        , MtaLimitExceeding = 0 /* MtaLimitExceeding*/
        , Preemptions = 0 /* Preemptions*/
    };
// CountMetric Values array.
    static const CountMetric CountMetric_Values[] =
    { CountMetric::_undefined_, CountMetric::Activations,
            CountMetric::BoundedMigrations, CountMetric::CacheHit,
            CountMetric::CacheMiss, CountMetric::FullMigrations,
            CountMetric::MtaLimitExceeding, CountMetric::Preemptions };
    inline const std::string getLiteral(CountMetric e)
    {
        switch (e)
        {
        case CountMetric::_undefined_:
            return "_undefined_";
        case CountMetric::Activations:
            return "Activations";
        case CountMetric::BoundedMigrations:
            return "BoundedMigrations";
        case CountMetric::CacheHit:
            return "CacheHit";
        case CountMetric::CacheMiss:
            return "CacheMiss";
        case CountMetric::FullMigrations:
            return "FullMigrations";
        case CountMetric::MtaLimitExceeding:
            return "MtaLimitExceeding";
        case CountMetric::Preemptions:
            return "Preemptions";
        }
        return "";
    }
    ;
} // amalthea

#endif
