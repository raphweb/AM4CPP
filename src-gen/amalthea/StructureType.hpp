// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/StructureType.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_STRUCTURETYPE_HPP
#define AMALTHEA_STRUCTURETYPE_HPP

#include <string>

namespace amalthea
{

    enum class StructureType
    {
        _undefined_ = 0 /* _undefined_*/
        , System = 1 /* System*/
        , ECU = 2 /* ECU*/
        , Microcontroller = 3 /* Microcontroller*/
        , SoC = 4 /* SoC*/
        , Cluster = 5 /* Cluster*/
        , Group = 6 /* Group*/
        , Array = 7 /* Array*/
        , Area = 8 /* Area*/
        , Region = 9 /* Region*/
    };
// StructureType Values array.
    static const StructureType StructureType_Values[] =
    { StructureType::_undefined_, StructureType::System, StructureType::ECU,
            StructureType::Microcontroller, StructureType::SoC,
            StructureType::Cluster, StructureType::Group, StructureType::Array,
            StructureType::Area, StructureType::Region };
    inline const std::string getLiteral(StructureType e)
    {
        switch (e)
        {
        case StructureType::_undefined_:
            return "_undefined_";
        case StructureType::System:
            return "System";
        case StructureType::ECU:
            return "ECU";
        case StructureType::Microcontroller:
            return "Microcontroller";
        case StructureType::SoC:
            return "SoC";
        case StructureType::Cluster:
            return "Cluster";
        case StructureType::Group:
            return "Group";
        case StructureType::Array:
            return "Array";
        case StructureType::Area:
            return "Area";
        case StructureType::Region:
            return "Region";
        }
        return "";
    }
    ;
} // amalthea

#endif
