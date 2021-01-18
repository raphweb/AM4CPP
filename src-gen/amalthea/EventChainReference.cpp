// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/EventChainReference.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "EventChainReference.hpp"
#include <amalthea/BaseObject.hpp>
#include <amalthea/EventChainItem.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/EventChain.hpp>
#include <amalthea/AbstractEventChain.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(EventChainReference.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
EventChainReference::EventChainReference() : m_eventChain(0)
{

    /*PROTECTED REGION ID(EventChainReferenceImpl__EventChainReferenceImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

EventChainReference::~EventChainReference()
{
}

// Attributes

// References

::amalthea::EventChain_ptr EventChainReference::getEventChain() const
{
    return m_eventChain;
}

void EventChainReference::setEventChain(::amalthea::EventChain_ptr _eventChain)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::EventChain_ptr _old_eventChain = m_eventChain;
#endif
    m_eventChain = _eventChain;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getEventChainReference__eventChain(), _old_eventChain, m_eventChain);
        eNotify(&notification);
    }
#endif
}

