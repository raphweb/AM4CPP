// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/CustomEventTrigger.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "CustomEventTrigger.hpp"
#include <amalthea/ActivityGraphItem.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Process.hpp>
#include <amalthea/Runnable.hpp>
#include <amalthea/ActivityGraph.hpp>
#include <amalthea/CustomEvent.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(CustomEventTrigger.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
CustomEventTrigger::CustomEventTrigger() : m_event(0)
{

    /*PROTECTED REGION ID(CustomEventTriggerImpl__CustomEventTriggerImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

CustomEventTrigger::~CustomEventTrigger()
{
}

// Attributes

// References

::amalthea::CustomEvent_ptr CustomEventTrigger::getEvent() const
{
    return m_event;
}

void CustomEventTrigger::setEvent(::amalthea::CustomEvent_ptr _event)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::CustomEvent_ptr _old_event = m_event;
#endif
    m_event = _event;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getCustomEventTrigger__event(), _old_event, m_event);
        eNotify(&notification);
    }
#endif
}

