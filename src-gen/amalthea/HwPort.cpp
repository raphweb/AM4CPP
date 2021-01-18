// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/HwPort.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "HwPort.hpp"
#include <amalthea/ReferableBaseObject.hpp>
#include <amalthea/ITaggable.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Tag.hpp>
#include <amalthea/HwConnection.hpp>
#include <amalthea/INamed.hpp>
#include <amalthea/Namespace.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(HwPort.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
HwPort::HwPort() : m_bitWidth(0), m_priority(0)
{

    m_connections.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::amalthea::HwConnection_ptr, -1, false, false >(this,
                    ::amalthea::AmaltheaPackage::_instance()->getHwPort__connections()));

    /*PROTECTED REGION ID(HwPortImpl__HwPortImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

HwPort::~HwPort()
{
}

// Attributes

::ecore::EInt HwPort::getBitWidth() const
{
    return m_bitWidth;
}

void HwPort::setBitWidth(::ecore::EInt _bitWidth)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EInt _old_bitWidth = m_bitWidth;
#endif
    m_bitWidth = _bitWidth;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getHwPort__bitWidth(), _old_bitWidth, m_bitWidth);
        eNotify(&notification);
    }
#endif
}

::ecore::EInt HwPort::getPriority() const
{
    return m_priority;
}

void HwPort::setPriority(::ecore::EInt _priority)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EInt _old_priority = m_priority;
#endif
    m_priority = _priority;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getHwPort__priority(), _old_priority, m_priority);
        eNotify(&notification);
    }
#endif
}

::amalthea::PortType HwPort::getPortType() const
{
    return m_portType;
}

void HwPort::setPortType(::amalthea::PortType _portType)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::PortType _old_portType = m_portType;
#endif
    m_portType = _portType;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getHwPort__portType(), _old_portType, m_portType);
        eNotify(&notification);
    }
#endif
}

::amalthea::PortInterface HwPort::getPortInterface() const
{
    return m_portInterface;
}

void HwPort::setPortInterface(::amalthea::PortInterface _portInterface)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::PortInterface _old_portInterface = m_portInterface;
#endif
    m_portInterface = _portInterface;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getHwPort__portInterface(), _old_portInterface, m_portInterface);
        eNotify(&notification);
    }
#endif
}

::ecore::EBoolean HwPort::isDelegated() const
{
    return m_delegated;
}

void HwPort::setDelegated(::ecore::EBoolean _delegated)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EBoolean _old_delegated = m_delegated;
#endif
    m_delegated = _delegated;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getHwPort__delegated(), _old_delegated, m_delegated);
        eNotify(&notification);
    }
#endif
}

// References

const ::ecorecpp::mapping::EList< ::amalthea::HwConnection_ptr >& HwPort::getConnections() const
{
    return *m_connections;
}

::ecorecpp::mapping::EList< ::amalthea::HwConnection_ptr >& HwPort::getConnections()
{
    return *m_connections;
}

