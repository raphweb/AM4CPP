// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/CurveType.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_CURVETYPE_HPP
#define AMALTHEA_CURVETYPE_HPP

#include <string>

namespace amalthea
{

    enum class CurveType
    {
        _undefined_ = 0 /* _undefined_*/
        , sine = 1 /* sine*/
        , triangle = 2 /* triangle*/
    };
// CurveType Values array.
    static const CurveType CurveType_Values[] =
    { CurveType::_undefined_, CurveType::sine, CurveType::triangle };
    inline const std::string getLiteral(CurveType e)
    {
        switch (e)
        {
        case CurveType::_undefined_:
            return "_undefined_";
        case CurveType::sine:
            return "sine";
        case CurveType::triangle:
            return "triangle";
        }
        return "";
    }
    ;
} // amalthea

#endif
