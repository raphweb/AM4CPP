// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/LabelAccessEnum.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_LABELACCESSENUM_HPP
#define AMALTHEA_LABELACCESSENUM_HPP

#include <string>

namespace amalthea
{

    enum class LabelAccessEnum
    {
        _undefined_ = 0 /* _undefined_*/
        , read = 0 /* read*/
        , write = 0 /* write*/
    };
// LabelAccessEnum Values array.
    static const LabelAccessEnum LabelAccessEnum_Values[] =
    { LabelAccessEnum::_undefined_, LabelAccessEnum::read,
            LabelAccessEnum::write };
    inline const std::string getLiteral(LabelAccessEnum e)
    {
        switch (e)
        {
        case LabelAccessEnum::_undefined_:
            return "_undefined_";
        case LabelAccessEnum::read:
            return "read";
        case LabelAccessEnum::write:
            return "write";
        }
        return "";
    }
    ;
} // amalthea

#endif
