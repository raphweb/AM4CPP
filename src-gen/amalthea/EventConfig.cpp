// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/EventConfig.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "EventConfig.hpp"
#include <amalthea/BaseObject.hpp>
#include <amalthea/INamed.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/EntityEvent.hpp>
#include <amalthea/Namespace.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(EventConfig.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
EventConfig::EventConfig() : m_event(0)
{

    /*PROTECTED REGION ID(EventConfigImpl__EventConfigImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

EventConfig::~EventConfig()
{
}

// Attributes

// References

::amalthea::EntityEvent_ptr EventConfig::getEvent() const
{
    return m_event;
}

void EventConfig::setEvent(::amalthea::EntityEvent_ptr _event)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::EntityEvent_ptr _old_event = m_event;
#endif
    m_event = _event;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getEventConfig__event(), _old_event, m_event);
        eNotify(&notification);
    }
#endif
}

