// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/ModeLabelAccessEnum.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_MODELABELACCESSENUM_HPP
#define AMALTHEA_MODELABELACCESSENUM_HPP

#include <string>

namespace amalthea
{

    enum class ModeLabelAccessEnum
    {
        _undefined_ = 0 /* _undefined_*/
        , read = 0 /* read*/
        , set = 0 /* set*/
        , increment = 0 /* increment*/
        , decrement = 0 /* decrement*/
    };
// ModeLabelAccessEnum Values array.
    static const ModeLabelAccessEnum ModeLabelAccessEnum_Values[] =
    { ModeLabelAccessEnum::_undefined_, ModeLabelAccessEnum::read,
            ModeLabelAccessEnum::set, ModeLabelAccessEnum::increment,
            ModeLabelAccessEnum::decrement };
    inline const std::string getLiteral(ModeLabelAccessEnum e)
    {
        switch (e)
        {
        case ModeLabelAccessEnum::_undefined_:
            return "_undefined_";
        case ModeLabelAccessEnum::read:
            return "read";
        case ModeLabelAccessEnum::set:
            return "set";
        case ModeLabelAccessEnum::increment:
            return "increment";
        case ModeLabelAccessEnum::decrement:
            return "decrement";
        }
        return "";
    }
    ;
} // amalthea

#endif
