// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/ComponentEvent.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "ComponentEvent.hpp"
#include <amalthea/EntityEvent.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Tag.hpp>
#include <amalthea/Component.hpp>
#include <amalthea/INamed.hpp>
#include <amalthea/Namespace.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(ComponentEvent.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
ComponentEvent::ComponentEvent() : m_entity(0)
{

    /*PROTECTED REGION ID(ComponentEventImpl__ComponentEventImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

ComponentEvent::~ComponentEvent()
{
}

// Attributes

::amalthea::ComponentEventType ComponentEvent::getEventType() const
{
    return m_eventType;
}

void ComponentEvent::setEventType(::amalthea::ComponentEventType _eventType)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::ComponentEventType _old_eventType = m_eventType;
#endif
    m_eventType = _eventType;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getComponentEvent__eventType(), _old_eventType, m_eventType);
        eNotify(&notification);
    }
#endif
}

// References

::amalthea::Component_ptr ComponentEvent::getEntity() const
{
    return m_entity;
}

void ComponentEvent::setEntity(::amalthea::Component_ptr _entity)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::Component_ptr _old_entity = m_entity;
#endif
    m_entity = _entity;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getComponentEvent__entity(), _old_entity, m_entity);
        eNotify(&notification);
    }
#endif
}

