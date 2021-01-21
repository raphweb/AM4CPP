// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/BlockingType.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_BLOCKINGTYPE_HPP
#define AMALTHEA_BLOCKINGTYPE_HPP

#include <string>

namespace amalthea
{

    enum class BlockingType
    {
        _undefined_ = 0 /* _undefined_*/
        , active_wait = 1 /* active_wait*/
        , passive_wait = 2 /* passive_wait*/
        , non_blocking = 3 /* non_blocking*/
    };
// BlockingType Values array.
    static const BlockingType BlockingType_Values[] =
    { BlockingType::_undefined_, BlockingType::active_wait,
            BlockingType::passive_wait, BlockingType::non_blocking };
    inline const std::string getLiteral(BlockingType e)
    {
        switch (e)
        {
        case BlockingType::_undefined_:
            return "_undefined_";
        case BlockingType::active_wait:
            return "active_wait";
        case BlockingType::passive_wait:
            return "passive_wait";
        case BlockingType::non_blocking:
            return "non_blocking";
        }
        return "";
    }
    ;
} // amalthea

#endif
