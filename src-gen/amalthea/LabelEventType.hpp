// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/LabelEventType.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_LABELEVENTTYPE_HPP
#define AMALTHEA_LABELEVENTTYPE_HPP

#include <string>

namespace amalthea
{

    enum class LabelEventType
    {
        _all_ = 0 /* _all_*/
        , read = 1 /* read*/
        , write = 2 /* write*/
    };
// LabelEventType Values array.
    static const LabelEventType LabelEventType_Values[] =
    { LabelEventType::_all_, LabelEventType::read, LabelEventType::write };
    inline const std::string getLiteral(LabelEventType e)
    {
        switch (e)
        {
        case LabelEventType::_all_:
            return "_all_";
        case LabelEventType::read:
            return "read";
        case LabelEventType::write:
            return "write";
        }
        return "";
    }
    ;
} // amalthea

#endif
