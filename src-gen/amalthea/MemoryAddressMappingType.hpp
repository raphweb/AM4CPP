// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/MemoryAddressMappingType.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_MEMORYADDRESSMAPPINGTYPE_HPP
#define AMALTHEA_MEMORYADDRESSMAPPINGTYPE_HPP

#include <string>

namespace amalthea
{

    enum class MemoryAddressMappingType
    {
        _undefined_ = 0 /* _undefined_*/
        , none = 0 /* none*/
        , address = 0 /* address*/
        , offset = 0 /* offset*/
    };
// MemoryAddressMappingType Values array.
    static const MemoryAddressMappingType MemoryAddressMappingType_Values[] =
            { MemoryAddressMappingType::_undefined_,
                    MemoryAddressMappingType::none,
                    MemoryAddressMappingType::address,
                    MemoryAddressMappingType::offset };
    inline const std::string getLiteral(MemoryAddressMappingType e)
    {
        switch (e)
        {
        case MemoryAddressMappingType::_undefined_:
            return "_undefined_";
        case MemoryAddressMappingType::none:
            return "none";
        case MemoryAddressMappingType::address:
            return "address";
        case MemoryAddressMappingType::offset:
            return "offset";
        }
        return "";
    }
    ;
} // amalthea

#endif
