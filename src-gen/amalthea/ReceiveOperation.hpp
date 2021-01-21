// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/ReceiveOperation.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_RECEIVEOPERATION_HPP
#define AMALTHEA_RECEIVEOPERATION_HPP

#include <string>

namespace amalthea
{

    enum class ReceiveOperation
    {
        _undefined_ = 0 /* _undefined_*/
        , FIFO_Read = 1 /* FIFO_Read*/
        , FIFO_Take = 2 /* FIFO_Take*/
        , LIFO_Read = 3 /* LIFO_Read*/
        , LIFO_Take = 4 /* LIFO_Take*/
    };
// ReceiveOperation Values array.
    static const ReceiveOperation ReceiveOperation_Values[] =
    { ReceiveOperation::_undefined_, ReceiveOperation::FIFO_Read,
            ReceiveOperation::FIFO_Take, ReceiveOperation::LIFO_Read,
            ReceiveOperation::LIFO_Take };
    inline const std::string getLiteral(ReceiveOperation e)
    {
        switch (e)
        {
        case ReceiveOperation::_undefined_:
            return "_undefined_";
        case ReceiveOperation::FIFO_Read:
            return "FIFO_Read";
        case ReceiveOperation::FIFO_Take:
            return "FIFO_Take";
        case ReceiveOperation::LIFO_Read:
            return "LIFO_Read";
        case ReceiveOperation::LIFO_Take:
            return "LIFO_Take";
        }
        return "";
    }
    ;
} // amalthea

#endif
