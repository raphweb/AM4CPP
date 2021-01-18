// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/EventActivation.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "EventActivation.hpp"
#include <amalthea/Activation.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Tag.hpp>
#include <amalthea/TriggerEvent.hpp>
#include <amalthea/Counter.hpp>
#include <amalthea/INamed.hpp>
#include <amalthea/Namespace.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(EventActivation.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
EventActivation::EventActivation() : m_counter(0)
{

    m_triggeringEvents.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::amalthea::TriggerEvent_ptr, -1, false, false >(this,
                    ::amalthea::AmaltheaPackage::_instance()->getEventActivation__triggeringEvents()));

    /*PROTECTED REGION ID(EventActivationImpl__EventActivationImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

EventActivation::~EventActivation()
{
    if (m_counter)
    {
        m_counter.reset();
    }
}

// Attributes

// References

const ::ecorecpp::mapping::EList< ::amalthea::TriggerEvent_ptr >& EventActivation::getTriggeringEvents() const
{
    return *m_triggeringEvents;
}

::ecorecpp::mapping::EList< ::amalthea::TriggerEvent_ptr >& EventActivation::getTriggeringEvents()
{
    return *m_triggeringEvents;
}

::amalthea::Counter_ptr EventActivation::getCounter() const
{
    return m_counter;
}

void EventActivation::setCounter(::amalthea::Counter_ptr _counter)
{
    if (m_counter)
        m_counter->_setEContainer(EventActivation_ptr(),
                ::amalthea::AmaltheaPackage::_instance()->getEventActivation__counter());
    if (_counter)
        _counter->_setEContainer(_this(),
                ::amalthea::AmaltheaPackage::_instance()->getEventActivation__counter());

#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::Counter_ptr _old_counter = m_counter;
#endif
    m_counter = _counter;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getEventActivation__counter(), _old_counter, m_counter);
        eNotify(&notification);
    }
#endif
}

