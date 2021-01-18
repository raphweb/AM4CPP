// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/ClockStep.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "ClockStep.hpp"
#include <amalthea/BaseObject.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Frequency.hpp>
#include <amalthea/Time.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(ClockStep.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
ClockStep::ClockStep() : m_frequency(0), m_time(0)
{

    /*PROTECTED REGION ID(ClockStepImpl__ClockStepImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

ClockStep::~ClockStep()
{
    if (m_frequency)
    {
        m_frequency.reset();
    }
    if (m_time)
    {
        m_time.reset();
    }
}

// Attributes

// References

::amalthea::Frequency_ptr ClockStep::getFrequency() const
{
    return m_frequency;
}

void ClockStep::setFrequency(::amalthea::Frequency_ptr _frequency)
{
    if (m_frequency)
        m_frequency->_setEContainer(ClockStep_ptr(),
                ::amalthea::AmaltheaPackage::_instance()->getClockStep__frequency());
    if (_frequency)
        _frequency->_setEContainer(_this(),
                ::amalthea::AmaltheaPackage::_instance()->getClockStep__frequency());

#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::Frequency_ptr _old_frequency = m_frequency;
#endif
    m_frequency = _frequency;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getClockStep__frequency(), _old_frequency, m_frequency);
        eNotify(&notification);
    }
#endif
}

::amalthea::Time_ptr ClockStep::getTime() const
{
    return m_time;
}

void ClockStep::setTime(::amalthea::Time_ptr _time)
{
    if (m_time)
        m_time->_setEContainer(ClockStep_ptr(),
                ::amalthea::AmaltheaPackage::_instance()->getClockStep__time());
    if (_time)
        _time->_setEContainer(_this(),
                ::amalthea::AmaltheaPackage::_instance()->getClockStep__time());

#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::Time_ptr _old_time = m_time;
#endif
    m_time = _time;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getClockStep__time(), _old_time, m_time);
        eNotify(&notification);
    }
#endif
}

