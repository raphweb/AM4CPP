// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/PortInterface.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_PORTINTERFACE_HPP
#define AMALTHEA_PORTINTERFACE_HPP

#include <string>

namespace amalthea
{

    enum class PortInterface
    {
        _undefined_ = 0 /* _undefined_*/
        , custom = 1 /* custom*/
        , CAN = 2 /* CAN*/
        , Flexray = 3 /* Flexray*/
        , LIN = 4 /* LIN*/
        , MOST = 5 /* MOST*/
        , Ethernet = 6 /* Ethernet*/
        , SPI = 7 /* SPI*/
        , I2C = 8 /* I2C*/
        , AXI = 9 /* AXI*/
        , AHB = 10 /* AHB*/
        , APB = 11 /* APB*/
        , SWR = 12 /* SWR*/
    };
// PortInterface Values array.
    static const PortInterface PortInterface_Values[] =
    { PortInterface::_undefined_, PortInterface::custom, PortInterface::CAN,
            PortInterface::Flexray, PortInterface::LIN, PortInterface::MOST,
            PortInterface::Ethernet, PortInterface::SPI, PortInterface::I2C,
            PortInterface::AXI, PortInterface::AHB, PortInterface::APB,
            PortInterface::SWR };
    inline const std::string getLiteral(PortInterface e)
    {
        switch (e)
        {
        case PortInterface::_undefined_:
            return "_undefined_";
        case PortInterface::custom:
            return "custom";
        case PortInterface::CAN:
            return "CAN";
        case PortInterface::Flexray:
            return "Flexray";
        case PortInterface::LIN:
            return "LIN";
        case PortInterface::MOST:
            return "MOST";
        case PortInterface::Ethernet:
            return "Ethernet";
        case PortInterface::SPI:
            return "SPI";
        case PortInterface::I2C:
            return "I2C";
        case PortInterface::AXI:
            return "AXI";
        case PortInterface::AHB:
            return "AHB";
        case PortInterface::APB:
            return "APB";
        case PortInterface::SWR:
            return "SWR";
        }
        return "";
    }
    ;
} // amalthea

#endif
