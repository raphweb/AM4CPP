// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/MappingType.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_MAPPINGTYPE_HPP
#define AMALTHEA_MAPPINGTYPE_HPP

#include <string>

namespace amalthea
{

    enum class MappingType
    {
        _undefined_ = 0 /* _undefined_*/
        , OneToOne = 0 /* OneToOne*/
        , Reaction = 0 /* Reaction*/
        , UniqueReaction = 0 /* UniqueReaction*/
    };
// MappingType Values array.
    static const MappingType MappingType_Values[] =
    { MappingType::_undefined_, MappingType::OneToOne, MappingType::Reaction,
            MappingType::UniqueReaction };
    inline const std::string getLiteral(MappingType e)
    {
        switch (e)
        {
        case MappingType::_undefined_:
            return "_undefined_";
        case MappingType::OneToOne:
            return "OneToOne";
        case MappingType::Reaction:
            return "Reaction";
        case MappingType::UniqueReaction:
            return "UniqueReaction";
        }
        return "";
    }
    ;
} // amalthea

#endif
