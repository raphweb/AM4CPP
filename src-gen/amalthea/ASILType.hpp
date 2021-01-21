// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/ASILType.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_ASILTYPE_HPP
#define AMALTHEA_ASILTYPE_HPP

#include <string>

namespace amalthea
{

    enum class ASILType
    {
        _undefined_ = 0 /* _undefined_*/
        , D = 1 /* D*/
        , C = 2 /* C*/
        , B = 3 /* B*/
        , A = 4 /* A*/
        , QM = 5 /* QM*/
    };
// ASILType Values array.
    static const ASILType ASILType_Values[] =
    { ASILType::_undefined_, ASILType::D, ASILType::C, ASILType::B, ASILType::A,
            ASILType::QM };
    inline const std::string getLiteral(ASILType e)
    {
        switch (e)
        {
        case ASILType::_undefined_:
            return "_undefined_";
        case ASILType::D:
            return "D";
        case ASILType::C:
            return "C";
        case ASILType::B:
            return "B";
        case ASILType::A:
            return "A";
        case ASILType::QM:
            return "QM";
        }
        return "";
    }
    ;
} // amalthea

#endif
