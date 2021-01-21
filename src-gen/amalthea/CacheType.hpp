// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/CacheType.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_CACHETYPE_HPP
#define AMALTHEA_CACHETYPE_HPP

#include <string>

namespace amalthea
{

    enum class CacheType
    {
        _undefined_ = 0 /* _undefined_*/
        , instruction = 1 /* instruction*/
        , data = 2 /* data*/
        , unified = 3 /* unified*/
    };
// CacheType Values array.
    static const CacheType CacheType_Values[] =
    { CacheType::_undefined_, CacheType::instruction, CacheType::data,
            CacheType::unified };
    inline const std::string getLiteral(CacheType e)
    {
        switch (e)
        {
        case CacheType::_undefined_:
            return "_undefined_";
        case CacheType::instruction:
            return "instruction";
        case CacheType::data:
            return "data";
        case CacheType::unified:
            return "unified";
        }
        return "";
    }
    ;
} // amalthea

#endif
