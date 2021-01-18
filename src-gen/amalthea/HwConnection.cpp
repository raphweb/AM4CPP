// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/HwConnection.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "HwConnection.hpp"
#include <amalthea/ReferableBaseObject.hpp>
#include <amalthea/HwPathElement.hpp>
#include <amalthea/ITaggable.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Tag.hpp>
#include <amalthea/IDiscreteValueDeviation.hpp>
#include <amalthea/DataRate.hpp>
#include <amalthea/HwPort.hpp>
#include <amalthea/INamed.hpp>
#include <amalthea/Namespace.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(HwConnection.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
HwConnection::HwConnection() : m_readLatency(0), m_writeLatency(0), m_dataRate(
        0), m_port1(0), m_port2(0)
{

    /*PROTECTED REGION ID(HwConnectionImpl__HwConnectionImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

HwConnection::~HwConnection()
{
    if (m_readLatency)
    {
        m_readLatency.reset();
    }
    if (m_writeLatency)
    {
        m_writeLatency.reset();
    }
    if (m_dataRate)
    {
        m_dataRate.reset();
    }
}

// Attributes

::ecore::EBoolean HwConnection::isInternal() const
{
    return m_internal;
}

void HwConnection::setInternal(::ecore::EBoolean _internal)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EBoolean _old_internal = m_internal;
#endif
    m_internal = _internal;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getHwConnection__internal(), _old_internal, m_internal);
        eNotify(&notification);
    }
#endif
}

// References

::amalthea::IDiscreteValueDeviation_ptr HwConnection::getReadLatency() const
{
    return m_readLatency;
}

void HwConnection::setReadLatency(
        ::amalthea::IDiscreteValueDeviation_ptr _readLatency)
{
    if (m_readLatency)
        m_readLatency->_setEContainer(HwConnection_ptr(),
                ::amalthea::AmaltheaPackage::_instance()->getHwConnection__readLatency());
    if (_readLatency)
        _readLatency->_setEContainer(_this(),
                ::amalthea::AmaltheaPackage::_instance()->getHwConnection__readLatency());

#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::IDiscreteValueDeviation_ptr _old_readLatency = m_readLatency;
#endif
    m_readLatency = _readLatency;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getHwConnection__readLatency(), _old_readLatency, m_readLatency);
        eNotify(&notification);
    }
#endif
}

::amalthea::IDiscreteValueDeviation_ptr HwConnection::getWriteLatency() const
{
    return m_writeLatency;
}

void HwConnection::setWriteLatency(
        ::amalthea::IDiscreteValueDeviation_ptr _writeLatency)
{
    if (m_writeLatency)
        m_writeLatency->_setEContainer(HwConnection_ptr(),
                ::amalthea::AmaltheaPackage::_instance()->getHwConnection__writeLatency());
    if (_writeLatency)
        _writeLatency->_setEContainer(_this(),
                ::amalthea::AmaltheaPackage::_instance()->getHwConnection__writeLatency());

#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::IDiscreteValueDeviation_ptr _old_writeLatency = m_writeLatency;
#endif
    m_writeLatency = _writeLatency;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getHwConnection__writeLatency(), _old_writeLatency, m_writeLatency);
        eNotify(&notification);
    }
#endif
}

::amalthea::DataRate_ptr HwConnection::getDataRate() const
{
    return m_dataRate;
}

void HwConnection::setDataRate(::amalthea::DataRate_ptr _dataRate)
{
    if (m_dataRate)
        m_dataRate->_setEContainer(HwConnection_ptr(),
                ::amalthea::AmaltheaPackage::_instance()->getHwConnection__dataRate());
    if (_dataRate)
        _dataRate->_setEContainer(_this(),
                ::amalthea::AmaltheaPackage::_instance()->getHwConnection__dataRate());

#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::DataRate_ptr _old_dataRate = m_dataRate;
#endif
    m_dataRate = _dataRate;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getHwConnection__dataRate(), _old_dataRate, m_dataRate);
        eNotify(&notification);
    }
#endif
}

::amalthea::HwPort_ptr HwConnection::getPort1() const
{
    return m_port1;
}

void HwConnection::setPort1(::amalthea::HwPort_ptr _port1)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::HwPort_ptr _old_port1 = m_port1;
#endif
    m_port1 = _port1;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getHwConnection__port1(), _old_port1, m_port1);
        eNotify(&notification);
    }
#endif
}

::amalthea::HwPort_ptr HwConnection::getPort2() const
{
    return m_port2;
}

void HwConnection::setPort2(::amalthea::HwPort_ptr _port2)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::HwPort_ptr _old_port2 = m_port2;
#endif
    m_port2 = _port2;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getHwConnection__port2(), _old_port2, m_port2);
        eNotify(&notification);
    }
#endif
}

