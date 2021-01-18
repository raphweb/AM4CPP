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
        , custom = 0 /* custom*/
        , CAN = 0 /* CAN*/
        , Flexray = 0 /* Flexray*/
        , LIN = 0 /* LIN*/
        , MOST = 0 /* MOST*/
        , Ethernet = 0 /* Ethernet*/
        , SPI = 0 /* SPI*/
        , I2C = 0 /* I2C*/
        , AXI = 0 /* AXI*/
        , AHB = 0 /* AHB*/
        , APB = 0 /* APB*/
        , SWR = 0 /* SWR*/
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
