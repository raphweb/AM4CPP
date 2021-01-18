// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/Connector.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "Connector.hpp"
#include <amalthea/BaseObject.hpp>
#include <amalthea/INamed.hpp>
#include <amalthea/ITaggable.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Tag.hpp>
#include <amalthea/ISystem.hpp>
#include <amalthea/QualifiedPort.hpp>
#include <amalthea/InterfaceChannel.hpp>
#include <amalthea/Namespace.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(Connector.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
Connector::Connector() : m_containingSystem(0), m_sourcePort(0), m_targetPort(0)
{

    m_implementedInterfaces.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::amalthea::InterfaceChannel_ptr, -1, true, false >(this,
                    ::amalthea::AmaltheaPackage::_instance()->getConnector__implementedInterfaces()));

    /*PROTECTED REGION ID(ConnectorImpl__ConnectorImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

Connector::~Connector()
{
    if (m_sourcePort)
    {
        m_sourcePort.reset();
    }
    if (m_targetPort)
    {
        m_targetPort.reset();
    }
}

// Attributes

// References

::amalthea::ISystem_ptr Connector::getContainingSystem() const
{
    return m_containingSystem;
}

::amalthea::ISystem_ptr Connector::basicgetContainingSystem()
{
    return m_containingSystem;
}

void Connector::basicsetContainingSystem(
        ::amalthea::ISystem_ptr _containingSystem)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::ISystem_ptr _old_containingSystem = m_containingSystem;
#endif
    m_containingSystem = _containingSystem;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getConnector__containingSystem(), _old_containingSystem, m_containingSystem);
        eNotify(&notification);
    }
#endif
}

void Connector::setContainingSystem(::amalthea::ISystem_ptr _containingSystem)
{
    if (_containingSystem != m_containingSystem)
    {
        ::ecore::EJavaObject _this = ::ecore::EObject::_this();
        if (m_containingSystem != nullptr)
        {
            m_containingSystem->_inverseRemove(
                    ::amalthea::AmaltheaPackage::ISYSTEM__CONNECTORS, _this);
        }
        if (_containingSystem != nullptr)
        {
            _containingSystem->_inverseAdd(
                    ::amalthea::AmaltheaPackage::ISYSTEM__CONNECTORS, _this);
        }
        basicsetContainingSystem(_containingSystem);
    }
}

::amalthea::QualifiedPort_ptr Connector::getSourcePort() const
{
    return m_sourcePort;
}

void Connector::setSourcePort(::amalthea::QualifiedPort_ptr _sourcePort)
{
    if (m_sourcePort)
        m_sourcePort->_setEContainer(Connector_ptr(),
                ::amalthea::AmaltheaPackage::_instance()->getConnector__sourcePort());
    if (_sourcePort)
        _sourcePort->_setEContainer(_this(),
                ::amalthea::AmaltheaPackage::_instance()->getConnector__sourcePort());

#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::QualifiedPort_ptr _old_sourcePort = m_sourcePort;
#endif
    m_sourcePort = _sourcePort;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getConnector__sourcePort(), _old_sourcePort, m_sourcePort);
        eNotify(&notification);
    }
#endif
}

::amalthea::QualifiedPort_ptr Connector::getTargetPort() const
{
    return m_targetPort;
}

void Connector::setTargetPort(::amalthea::QualifiedPort_ptr _targetPort)
{
    if (m_targetPort)
        m_targetPort->_setEContainer(Connector_ptr(),
                ::amalthea::AmaltheaPackage::_instance()->getConnector__targetPort());
    if (_targetPort)
        _targetPort->_setEContainer(_this(),
                ::amalthea::AmaltheaPackage::_instance()->getConnector__targetPort());

#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::QualifiedPort_ptr _old_targetPort = m_targetPort;
#endif
    m_targetPort = _targetPort;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getConnector__targetPort(), _old_targetPort, m_targetPort);
        eNotify(&notification);
    }
#endif
}

const ::ecorecpp::mapping::EList< ::amalthea::InterfaceChannel_ptr >& Connector::getImplementedInterfaces() const
{
    return *m_implementedInterfaces;
}

::ecorecpp::mapping::EList< ::amalthea::InterfaceChannel_ptr >& Connector::getImplementedInterfaces()
{
    return *m_implementedInterfaces;
}

