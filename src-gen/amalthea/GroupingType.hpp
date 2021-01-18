// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/GroupingType.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_GROUPINGTYPE_HPP
#define AMALTHEA_GROUPINGTYPE_HPP

#include <string>

namespace amalthea
{

    enum class GroupingType
    {
        _undefined_ = 0 /* _undefined_*/
        , allOfThem = 0 /* allOfThem*/
        , atLeastOneOfThem = 0 /* atLeastOneOfThem*/
    };
// GroupingType Values array.
    static const GroupingType GroupingType_Values[] =
    { GroupingType::_undefined_, GroupingType::allOfThem,
            GroupingType::atLeastOneOfThem };
    inline const std::string getLiteral(GroupingType e)
    {
        switch (e)
        {
        case GroupingType::_undefined_:
            return "_undefined_";
        case GroupingType::allOfThem:
            return "allOfThem";
        case GroupingType::atLeastOneOfThem:
            return "atLeastOneOfThem";
        }
        return "";
    }
    ;
} // amalthea

#endif
