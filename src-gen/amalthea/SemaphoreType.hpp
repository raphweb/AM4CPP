// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/SemaphoreType.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_SEMAPHORETYPE_HPP
#define AMALTHEA_SEMAPHORETYPE_HPP

#include <string>

namespace amalthea
{

    enum class SemaphoreType
    {
        _undefined_ = 0 /* _undefined_*/
        , CountingSemaphore = 1 /* CountingSemaphore*/
        , Resource = 2 /* Resource*/
        , Spinlock = 3 /* Spinlock*/
    };
// SemaphoreType Values array.
    static const SemaphoreType SemaphoreType_Values[] =
    { SemaphoreType::_undefined_, SemaphoreType::CountingSemaphore,
            SemaphoreType::Resource, SemaphoreType::Spinlock };
    inline const std::string getLiteral(SemaphoreType e)
    {
        switch (e)
        {
        case SemaphoreType::_undefined_:
            return "_undefined_";
        case SemaphoreType::CountingSemaphore:
            return "CountingSemaphore";
        case SemaphoreType::Resource:
            return "Resource";
        case SemaphoreType::Spinlock:
            return "Spinlock";
        }
        return "";
    }
    ;
} // amalthea

#endif
