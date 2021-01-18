// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/DataRateUnit.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_DATARATEUNIT_HPP
#define AMALTHEA_DATARATEUNIT_HPP

#include <string>

namespace amalthea
{

    enum class DataRateUnit
    {
        _undefined_ = 0 /* _undefined_*/
        , bitPerSecond = 0 /* bitPerSecond*/
        , kbitPerSecond = 0 /* kbitPerSecond*/
        , MbitPerSecond = 0 /* MbitPerSecond*/
        , GbitPerSecond = 0 /* GbitPerSecond*/
        , TbitPerSecond = 0 /* TbitPerSecond*/
        , KibitPerSecond = 0 /* KibitPerSecond*/
        , MibitPerSecond = 0 /* MibitPerSecond*/
        , GibitPerSecond = 0 /* GibitPerSecond*/
        , TibitPerSecond = 0 /* TibitPerSecond*/
        , BPerSecond = 0 /* BPerSecond*/
        , kBPerSecond = 0 /* kBPerSecond*/
        , MBPerSecond = 0 /* MBPerSecond*/
        , GBPerSecond = 0 /* GBPerSecond*/
        , TBPerSecond = 0 /* TBPerSecond*/
        , KiBPerSecond = 0 /* KiBPerSecond*/
        , MiBPerSecond = 0 /* MiBPerSecond*/
        , GiBPerSecond = 0 /* GiBPerSecond*/
        , TiBPerSecond = 0 /* TiBPerSecond*/
    };
// DataRateUnit Values array.
    static const DataRateUnit DataRateUnit_Values[] =
    { DataRateUnit::_undefined_, DataRateUnit::bitPerSecond,
            DataRateUnit::kbitPerSecond, DataRateUnit::MbitPerSecond,
            DataRateUnit::GbitPerSecond, DataRateUnit::TbitPerSecond,
            DataRateUnit::KibitPerSecond, DataRateUnit::MibitPerSecond,
            DataRateUnit::GibitPerSecond, DataRateUnit::TibitPerSecond,
            DataRateUnit::BPerSecond, DataRateUnit::kBPerSecond,
            DataRateUnit::MBPerSecond, DataRateUnit::GBPerSecond,
            DataRateUnit::TBPerSecond, DataRateUnit::KiBPerSecond,
            DataRateUnit::MiBPerSecond, DataRateUnit::GiBPerSecond,
            DataRateUnit::TiBPerSecond };
    inline const std::string getLiteral(DataRateUnit e)
    {
        switch (e)
        {
        case DataRateUnit::_undefined_:
            return "_undefined_";
        case DataRateUnit::bitPerSecond:
            return "bitPerSecond";
        case DataRateUnit::kbitPerSecond:
            return "kbitPerSecond";
        case DataRateUnit::MbitPerSecond:
            return "MbitPerSecond";
        case DataRateUnit::GbitPerSecond:
            return "GbitPerSecond";
        case DataRateUnit::TbitPerSecond:
            return "TbitPerSecond";
        case DataRateUnit::KibitPerSecond:
            return "KibitPerSecond";
        case DataRateUnit::MibitPerSecond:
            return "MibitPerSecond";
        case DataRateUnit::GibitPerSecond:
            return "GibitPerSecond";
        case DataRateUnit::TibitPerSecond:
            return "TibitPerSecond";
        case DataRateUnit::BPerSecond:
            return "BPerSecond";
        case DataRateUnit::kBPerSecond:
            return "kBPerSecond";
        case DataRateUnit::MBPerSecond:
            return "MBPerSecond";
        case DataRateUnit::GBPerSecond:
            return "GBPerSecond";
        case DataRateUnit::TBPerSecond:
            return "TBPerSecond";
        case DataRateUnit::KiBPerSecond:
            return "KiBPerSecond";
        case DataRateUnit::MiBPerSecond:
            return "MiBPerSecond";
        case DataRateUnit::GiBPerSecond:
            return "GiBPerSecond";
        case DataRateUnit::TiBPerSecond:
            return "TiBPerSecond";
        }
        return "";
    }
    ;
} // amalthea

#endif
