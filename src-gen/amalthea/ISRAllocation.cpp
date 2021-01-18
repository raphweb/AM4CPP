// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/ISRAllocation.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "ISRAllocation.hpp"
#include <amalthea/BaseObject.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/ISR.hpp>
#include <amalthea/InterruptController.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(ISRAllocation.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
ISRAllocation::ISRAllocation() : m_isr(0), m_controller(0)
{

    /*PROTECTED REGION ID(ISRAllocationImpl__ISRAllocationImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

ISRAllocation::~ISRAllocation()
{
}

// Attributes

::ecore::EIntegerObject ISRAllocation::getPriority() const
{
    return m_priority;
}

void ISRAllocation::setPriority(::ecore::EIntegerObject _priority)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EIntegerObject _old_priority = m_priority;
#endif
    m_priority = _priority;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getISRAllocation__priority(), _old_priority, m_priority);
        eNotify(&notification);
    }
#endif
}

// References

::amalthea::ISR_ptr ISRAllocation::getIsr() const
{
    return m_isr;
}

void ISRAllocation::setIsr(::amalthea::ISR_ptr _isr)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::ISR_ptr _old_isr = m_isr;
#endif
    m_isr = _isr;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getISRAllocation__isr(), _old_isr, m_isr);
        eNotify(&notification);
    }
#endif
}

::amalthea::InterruptController_ptr ISRAllocation::getController() const
{
    return m_controller;
}

void ISRAllocation::setController(
        ::amalthea::InterruptController_ptr _controller)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::InterruptController_ptr _old_controller = m_controller;
#endif
    m_controller = _controller;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getISRAllocation__controller(), _old_controller, m_controller);
        eNotify(&notification);
    }
#endif
}

