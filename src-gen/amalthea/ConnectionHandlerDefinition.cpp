// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/ConnectionHandlerDefinition.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "ConnectionHandlerDefinition.hpp"
#include <amalthea/HwDefinition.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Tag.hpp>
#include <amalthea/IDiscreteValueDeviation.hpp>
#include <amalthea/DataRate.hpp>
#include <amalthea/INamed.hpp>
#include <amalthea/Namespace.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(ConnectionHandlerDefinition.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
ConnectionHandlerDefinition::ConnectionHandlerDefinition() : m_maxBurstSize(1), m_maxConcurrentTransfers(
        1), m_readLatency(0), m_writeLatency(0), m_dataRate(0)
{

    /*PROTECTED REGION ID(ConnectionHandlerDefinitionImpl__ConnectionHandlerDefinitionImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

ConnectionHandlerDefinition::~ConnectionHandlerDefinition()
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

::amalthea::SchedPolicy ConnectionHandlerDefinition::getPolicy() const
{
    return m_policy;
}

void ConnectionHandlerDefinition::setPolicy(::amalthea::SchedPolicy _policy)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::SchedPolicy _old_policy = m_policy;
#endif
    m_policy = _policy;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getConnectionHandlerDefinition__policy(), _old_policy, m_policy);
        eNotify(&notification);
    }
#endif
}

::amalthea::PositiveInt ConnectionHandlerDefinition::getMaxBurstSize() const
{
    return m_maxBurstSize;
}

void ConnectionHandlerDefinition::setMaxBurstSize(
        ::amalthea::PositiveInt _maxBurstSize)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::PositiveInt _old_maxBurstSize = m_maxBurstSize;
#endif
    m_maxBurstSize = _maxBurstSize;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getConnectionHandlerDefinition__maxBurstSize(), _old_maxBurstSize, m_maxBurstSize);
        eNotify(&notification);
    }
#endif
}

::amalthea::PositiveInt ConnectionHandlerDefinition::getMaxConcurrentTransfers() const
{
    return m_maxConcurrentTransfers;
}

void ConnectionHandlerDefinition::setMaxConcurrentTransfers(
        ::amalthea::PositiveInt _maxConcurrentTransfers)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::PositiveInt _old_maxConcurrentTransfers = m_maxConcurrentTransfers;
#endif
    m_maxConcurrentTransfers = _maxConcurrentTransfers;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getConnectionHandlerDefinition__maxConcurrentTransfers(), _old_maxConcurrentTransfers, m_maxConcurrentTransfers);
        eNotify(&notification);
    }
#endif
}

// References

::amalthea::IDiscreteValueDeviation_ptr ConnectionHandlerDefinition::getReadLatency() const
{
    return m_readLatency;
}

void ConnectionHandlerDefinition::setReadLatency(
        ::amalthea::IDiscreteValueDeviation_ptr _readLatency)
{
    if (m_readLatency)
        m_readLatency->_setEContainer(ConnectionHandlerDefinition_ptr(),
                ::amalthea::AmaltheaPackage::_instance()->getConnectionHandlerDefinition__readLatency());
    if (_readLatency)
        _readLatency->_setEContainer(_this(),
                ::amalthea::AmaltheaPackage::_instance()->getConnectionHandlerDefinition__readLatency());

#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::IDiscreteValueDeviation_ptr _old_readLatency = m_readLatency;
#endif
    m_readLatency = _readLatency;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getConnectionHandlerDefinition__readLatency(), _old_readLatency, m_readLatency);
        eNotify(&notification);
    }
#endif
}

::amalthea::IDiscreteValueDeviation_ptr ConnectionHandlerDefinition::getWriteLatency() const
{
    return m_writeLatency;
}

void ConnectionHandlerDefinition::setWriteLatency(
        ::amalthea::IDiscreteValueDeviation_ptr _writeLatency)
{
    if (m_writeLatency)
        m_writeLatency->_setEContainer(ConnectionHandlerDefinition_ptr(),
                ::amalthea::AmaltheaPackage::_instance()->getConnectionHandlerDefinition__writeLatency());
    if (_writeLatency)
        _writeLatency->_setEContainer(_this(),
                ::amalthea::AmaltheaPackage::_instance()->getConnectionHandlerDefinition__writeLatency());

#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::IDiscreteValueDeviation_ptr _old_writeLatency = m_writeLatency;
#endif
    m_writeLatency = _writeLatency;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getConnectionHandlerDefinition__writeLatency(), _old_writeLatency, m_writeLatency);
        eNotify(&notification);
    }
#endif
}

::amalthea::DataRate_ptr ConnectionHandlerDefinition::getDataRate() const
{
    return m_dataRate;
}

void ConnectionHandlerDefinition::setDataRate(
        ::amalthea::DataRate_ptr _dataRate)
{
    if (m_dataRate)
        m_dataRate->_setEContainer(ConnectionHandlerDefinition_ptr(),
                ::amalthea::AmaltheaPackage::_instance()->getConnectionHandlerDefinition__dataRate());
    if (_dataRate)
        _dataRate->_setEContainer(_this(),
                ::amalthea::AmaltheaPackage::_instance()->getConnectionHandlerDefinition__dataRate());

#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::DataRate_ptr _old_dataRate = m_dataRate;
#endif
    m_dataRate = _dataRate;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getConnectionHandlerDefinition__dataRate(), _old_dataRate, m_dataRate);
        eNotify(&notification);
    }
#endif
}

