// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/ComponentPort.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "ComponentPort.hpp"
#include <amalthea/ReferableBaseObject.hpp>
#include <amalthea/ITaggable.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Tag.hpp>
#include <amalthea/Component.hpp>
#include <amalthea/ComponentInterface.hpp>
#include <amalthea/INamed.hpp>
#include <amalthea/Namespace.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(ComponentPort.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
ComponentPort::ComponentPort() : m_containingComponent(0), m_interface(0)
{

    /*PROTECTED REGION ID(ComponentPortImpl__ComponentPortImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

ComponentPort::~ComponentPort()
{
}

// Attributes

::amalthea::InterfaceKind ComponentPort::getKind() const
{
    return m_kind;
}

void ComponentPort::setKind(::amalthea::InterfaceKind _kind)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::InterfaceKind _old_kind = m_kind;
#endif
    m_kind = _kind;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getComponentPort__kind(), _old_kind, m_kind);
        eNotify(&notification);
    }
#endif
}

// References

::amalthea::Component_ptr ComponentPort::getContainingComponent() const
{
    return m_containingComponent;
}

::amalthea::Component_ptr ComponentPort::basicgetContainingComponent()
{
    return m_containingComponent;
}

void ComponentPort::basicsetContainingComponent(
        ::amalthea::Component_ptr _containingComponent)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::Component_ptr _old_containingComponent = m_containingComponent;
#endif
    m_containingComponent = _containingComponent;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getComponentPort__containingComponent(), _old_containingComponent, m_containingComponent);
        eNotify(&notification);
    }
#endif
}

void ComponentPort::setContainingComponent(
        ::amalthea::Component_ptr _containingComponent)
{
    if (_containingComponent != m_containingComponent)
    {
        ::ecore::EJavaObject _this = ::ecore::EObject::_this();
        if (m_containingComponent != nullptr)
        {
            m_containingComponent->_inverseRemove(
                    ::amalthea::AmaltheaPackage::COMPONENT__PORTS, _this);
        }
        if (_containingComponent != nullptr)
        {
            _containingComponent->_inverseAdd(
                    ::amalthea::AmaltheaPackage::COMPONENT__PORTS, _this);
        }
        basicsetContainingComponent(_containingComponent);
    }
}

::amalthea::ComponentInterface_ptr ComponentPort::getInterface() const
{
    return m_interface;
}

void ComponentPort::setInterface(::amalthea::ComponentInterface_ptr _interface)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::ComponentInterface_ptr _old_interface = m_interface;
#endif
    m_interface = _interface;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getComponentPort__interface(), _old_interface, m_interface);
        eNotify(&notification);
    }
#endif
}

