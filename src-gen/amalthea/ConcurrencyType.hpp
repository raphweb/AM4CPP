// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/ConcurrencyType.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_CONCURRENCYTYPE_HPP
#define AMALTHEA_CONCURRENCYTYPE_HPP

#include <string>

namespace amalthea
{

    enum class ConcurrencyType
    {
        _undefined_ = 0 /* _undefined_*/
        , SingleCoreSafe = 0 /* SingleCoreSafe*/
        , MultiCoreSafe = 0 /* MultiCoreSafe*/
        , SingleCorePrioSafe = 0 /* SingleCorePrioSafe*/
    };
// ConcurrencyType Values array.
    static const ConcurrencyType ConcurrencyType_Values[] =
            { ConcurrencyType::_undefined_, ConcurrencyType::SingleCoreSafe,
                    ConcurrencyType::MultiCoreSafe,
                    ConcurrencyType::SingleCorePrioSafe };
    inline const std::string getLiteral(ConcurrencyType e)
    {
        switch (e)
        {
        case ConcurrencyType::_undefined_:
            return "_undefined_";
        case ConcurrencyType::SingleCoreSafe:
            return "SingleCoreSafe";
        case ConcurrencyType::MultiCoreSafe:
            return "MultiCoreSafe";
        case ConcurrencyType::SingleCorePrioSafe:
            return "SingleCorePrioSafe";
        }
        return "";
    }
    ;
} // amalthea

#endif
