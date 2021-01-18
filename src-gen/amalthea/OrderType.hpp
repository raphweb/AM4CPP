// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/OrderType.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_ORDERTYPE_HPP
#define AMALTHEA_ORDERTYPE_HPP

#include <string>

namespace amalthea
{

    enum class OrderType
    {
        _undefined_ = 0 /* _undefined_*/
        , order = 0 /* order*/
        , directOrder = 0 /* directOrder*/
        , startSequence = 0 /* startSequence*/
        , endSequence = 0 /* endSequence*/
    };
// OrderType Values array.
    static const OrderType OrderType_Values[] =
    { OrderType::_undefined_, OrderType::order, OrderType::directOrder,
            OrderType::startSequence, OrderType::endSequence };
    inline const std::string getLiteral(OrderType e)
    {
        switch (e)
        {
        case OrderType::_undefined_:
            return "_undefined_";
        case OrderType::order:
            return "order";
        case OrderType::directOrder:
            return "directOrder";
        case OrderType::startSequence:
            return "startSequence";
        case OrderType::endSequence:
            return "endSequence";
        }
        return "";
    }
    ;
} // amalthea

#endif
