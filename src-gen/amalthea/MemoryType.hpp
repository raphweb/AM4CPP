// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/MemoryType.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_MEMORYTYPE_HPP
#define AMALTHEA_MEMORYTYPE_HPP

#include <string>

namespace amalthea
{

    enum class MemoryType
    {
        _undefined_ = 0 /* _undefined_*/
        , DRAM = 0 /* DRAM*/
        , SRAM = 0 /* SRAM*/
        , FLASH = 0 /* FLASH*/
        , PCM = 0 /* PCM*/
    };
// MemoryType Values array.
    static const MemoryType MemoryType_Values[] =
    { MemoryType::_undefined_, MemoryType::DRAM, MemoryType::SRAM,
            MemoryType::FLASH, MemoryType::PCM };
    inline const std::string getLiteral(MemoryType e)
    {
        switch (e)
        {
        case MemoryType::_undefined_:
            return "_undefined_";
        case MemoryType::DRAM:
            return "DRAM";
        case MemoryType::SRAM:
            return "SRAM";
        case MemoryType::FLASH:
            return "FLASH";
        case MemoryType::PCM:
            return "PCM";
        }
        return "";
    }
    ;
} // amalthea

#endif
