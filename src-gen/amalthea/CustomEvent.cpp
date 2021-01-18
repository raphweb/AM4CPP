// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/CustomEvent.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "CustomEvent.hpp"
#include <amalthea/TriggerEvent.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Tag.hpp>
#include <amalthea/CustomEventTrigger.hpp>
#include <amalthea/INamed.hpp>
#include <amalthea/Namespace.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(CustomEvent.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
CustomEvent::CustomEvent()
{

    m_explicitTriggers.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::amalthea::CustomEventTrigger_ptr, -1, false, false >(this,
                    ::amalthea::AmaltheaPackage::_instance()->getCustomEvent__explicitTriggers()));

    /*PROTECTED REGION ID(CustomEventImpl__CustomEventImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

CustomEvent::~CustomEvent()
{
}

// Attributes

::ecore::EString const& CustomEvent::getEventType() const
{
    return m_eventType;
}

void CustomEvent::setEventType(::ecore::EString const &_eventType)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EString _old_eventType = m_eventType;
#endif
    m_eventType = _eventType;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getCustomEvent__eventType(), _old_eventType, m_eventType);
        eNotify(&notification);
    }
#endif
}

// References

const ::ecorecpp::mapping::EList< ::amalthea::CustomEventTrigger_ptr >& CustomEvent::getExplicitTriggers() const
{
    return *m_explicitTriggers;
}

::ecorecpp::mapping::EList< ::amalthea::CustomEventTrigger_ptr >& CustomEvent::getExplicitTriggers()
{
    return *m_explicitTriggers;
}

