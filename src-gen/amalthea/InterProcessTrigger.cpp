// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/InterProcessTrigger.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "InterProcessTrigger.hpp"
#include <amalthea/ActivityGraphItem.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Process.hpp>
#include <amalthea/Runnable.hpp>
#include <amalthea/ActivityGraph.hpp>
#include <amalthea/InterProcessStimulus.hpp>
#include <amalthea/Counter.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(InterProcessTrigger.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
InterProcessTrigger::InterProcessTrigger() : m_stimulus(0), m_counter(0)
{

    /*PROTECTED REGION ID(InterProcessTriggerImpl__InterProcessTriggerImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

InterProcessTrigger::~InterProcessTrigger()
{
    if (m_counter)
    {
        m_counter.reset();
    }
}

// Attributes

// References

::amalthea::InterProcessStimulus_ptr InterProcessTrigger::getStimulus() const
{
    return m_stimulus;
}

void InterProcessTrigger::setStimulus(
        ::amalthea::InterProcessStimulus_ptr _stimulus)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::InterProcessStimulus_ptr _old_stimulus = m_stimulus;
#endif
    m_stimulus = _stimulus;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getInterProcessTrigger__stimulus(), _old_stimulus, m_stimulus);
        eNotify(&notification);
    }
#endif
}

::amalthea::Counter_ptr InterProcessTrigger::getCounter() const
{
    return m_counter;
}

void InterProcessTrigger::setCounter(::amalthea::Counter_ptr _counter)
{
    if (m_counter)
        m_counter->_setEContainer(InterProcessTrigger_ptr(),
                ::amalthea::AmaltheaPackage::_instance()->getInterProcessTrigger__counter());
    if (_counter)
        _counter->_setEContainer(_this(),
                ::amalthea::AmaltheaPackage::_instance()->getInterProcessTrigger__counter());

#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::Counter_ptr _old_counter = m_counter;
#endif
    m_counter = _counter;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getInterProcessTrigger__counter(), _old_counter, m_counter);
        eNotify(&notification);
    }
#endif
}

