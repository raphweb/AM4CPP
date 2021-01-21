// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/RunnableOrderType.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_RUNNABLEORDERTYPE_HPP
#define AMALTHEA_RUNNABLEORDERTYPE_HPP

#include <string>

namespace amalthea
{

    enum class RunnableOrderType
    {
        _undefined_ = 0 /* _undefined_*/
        , successor = 1 /* successor*/
        , immediateSuccessorStartSequence = 2 /* immediateSuccessorStartSequence*/
        , immediateSuccessorAnySequence = 3 /* immediateSuccessorAnySequence*/
        , immediateSuccessorEndSequence = 4 /* immediateSuccessorEndSequence*/
    };
// RunnableOrderType Values array.
    static const RunnableOrderType RunnableOrderType_Values[] =
    { RunnableOrderType::_undefined_, RunnableOrderType::successor,
            RunnableOrderType::immediateSuccessorStartSequence,
            RunnableOrderType::immediateSuccessorAnySequence,
            RunnableOrderType::immediateSuccessorEndSequence };
    inline const std::string getLiteral(RunnableOrderType e)
    {
        switch (e)
        {
        case RunnableOrderType::_undefined_:
            return "_undefined_";
        case RunnableOrderType::successor:
            return "successor";
        case RunnableOrderType::immediateSuccessorStartSequence:
            return "immediateSuccessorStartSequence";
        case RunnableOrderType::immediateSuccessorAnySequence:
            return "immediateSuccessorAnySequence";
        case RunnableOrderType::immediateSuccessorEndSequence:
            return "immediateSuccessorEndSequence";
        }
        return "";
    }
    ;
} // amalthea

#endif
