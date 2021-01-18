// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/DataSizeUnit.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_DATASIZEUNIT_HPP
#define AMALTHEA_DATASIZEUNIT_HPP

#include <string>

namespace amalthea
{

    enum class DataSizeUnit
    {
        _undefined_ = 0 /* _undefined_*/
        , bit = 0 /* bit*/
        , kbit = 0 /* kbit*/
        , Mbit = 0 /* Mbit*/
        , Gbit = 0 /* Gbit*/
        , Tbit = 0 /* Tbit*/
        , Kibit = 0 /* Kibit*/
        , Mibit = 0 /* Mibit*/
        , Gibit = 0 /* Gibit*/
        , Tibit = 0 /* Tibit*/
        , B = 0 /* B*/
        , kB = 0 /* kB*/
        , MB = 0 /* MB*/
        , GB = 0 /* GB*/
        , TB = 0 /* TB*/
        , KiB = 0 /* KiB*/
        , MiB = 0 /* MiB*/
        , GiB = 0 /* GiB*/
        , TiB = 0 /* TiB*/
    };
// DataSizeUnit Values array.
    static const DataSizeUnit DataSizeUnit_Values[] =
    { DataSizeUnit::_undefined_, DataSizeUnit::bit, DataSizeUnit::kbit,
            DataSizeUnit::Mbit, DataSizeUnit::Gbit, DataSizeUnit::Tbit,
            DataSizeUnit::Kibit, DataSizeUnit::Mibit, DataSizeUnit::Gibit,
            DataSizeUnit::Tibit, DataSizeUnit::B, DataSizeUnit::kB,
            DataSizeUnit::MB, DataSizeUnit::GB, DataSizeUnit::TB,
            DataSizeUnit::KiB, DataSizeUnit::MiB, DataSizeUnit::GiB,
            DataSizeUnit::TiB };
    inline const std::string getLiteral(DataSizeUnit e)
    {
        switch (e)
        {
        case DataSizeUnit::_undefined_:
            return "_undefined_";
        case DataSizeUnit::bit:
            return "bit";
        case DataSizeUnit::kbit:
            return "kbit";
        case DataSizeUnit::Mbit:
            return "Mbit";
        case DataSizeUnit::Gbit:
            return "Gbit";
        case DataSizeUnit::Tbit:
            return "Tbit";
        case DataSizeUnit::Kibit:
            return "Kibit";
        case DataSizeUnit::Mibit:
            return "Mibit";
        case DataSizeUnit::Gibit:
            return "Gibit";
        case DataSizeUnit::Tibit:
            return "Tibit";
        case DataSizeUnit::B:
            return "B";
        case DataSizeUnit::kB:
            return "kB";
        case DataSizeUnit::MB:
            return "MB";
        case DataSizeUnit::GB:
            return "GB";
        case DataSizeUnit::TB:
            return "TB";
        case DataSizeUnit::KiB:
            return "KiB";
        case DataSizeUnit::MiB:
            return "MiB";
        case DataSizeUnit::GiB:
            return "GiB";
        case DataSizeUnit::TiB:
            return "TiB";
        }
        return "";
    }
    ;
} // amalthea

#endif
