// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/SemaphoreAccessEnum.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_SEMAPHOREACCESSENUM_HPP
#define AMALTHEA_SEMAPHOREACCESSENUM_HPP

#include <string>

namespace amalthea
{

    enum class SemaphoreAccessEnum
    {
        _undefined_ = 0 /* _undefined_*/
        , request = 1 /* request*/
        , exclusive = 2 /* exclusive*/
        , release = 3 /* release*/
    };
// SemaphoreAccessEnum Values array.
    static const SemaphoreAccessEnum SemaphoreAccessEnum_Values[] =
    { SemaphoreAccessEnum::_undefined_, SemaphoreAccessEnum::request,
            SemaphoreAccessEnum::exclusive, SemaphoreAccessEnum::release };
    inline const std::string getLiteral(SemaphoreAccessEnum e)
    {
        switch (e)
        {
        case SemaphoreAccessEnum::_undefined_:
            return "_undefined_";
        case SemaphoreAccessEnum::request:
            return "request";
        case SemaphoreAccessEnum::exclusive:
            return "exclusive";
        case SemaphoreAccessEnum::release:
            return "release";
        }
        return "";
    }
    ;
} // amalthea

#endif
