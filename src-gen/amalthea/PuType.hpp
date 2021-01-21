// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/PuType.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_PUTYPE_HPP
#define AMALTHEA_PUTYPE_HPP

#include <string>

namespace amalthea
{

    enum class PuType
    {
        _undefined_ = 0 /* _undefined_*/
        , GPU = 1 /* GPU*/
        , CPU = 2 /* CPU*/
        , Accelerator = 3 /* Accelerator*/
    };
// PuType Values array.
    static const PuType PuType_Values[] =
    { PuType::_undefined_, PuType::GPU, PuType::CPU, PuType::Accelerator };
    inline const std::string getLiteral(PuType e)
    {
        switch (e)
        {
        case PuType::_undefined_:
            return "_undefined_";
        case PuType::GPU:
            return "GPU";
        case PuType::CPU:
            return "CPU";
        case PuType::Accelerator:
            return "Accelerator";
        }
        return "";
    }
    ;
} // amalthea

#endif
