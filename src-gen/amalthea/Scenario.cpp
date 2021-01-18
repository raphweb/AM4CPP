// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/Scenario.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "Scenario.hpp"
#include <amalthea/BaseObject.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Clock.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(Scenario.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
Scenario::Scenario() : m_samplingOffset(0.0), m_samplingRecurrence(1.0), m_clock(
        0)
{

    /*PROTECTED REGION ID(ScenarioImpl__ScenarioImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

Scenario::~Scenario()
{
}

// Attributes

::amalthea::NonNegativeDouble Scenario::getSamplingOffset() const
{
    return m_samplingOffset;
}

void Scenario::setSamplingOffset(::amalthea::NonNegativeDouble _samplingOffset)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::NonNegativeDouble _old_samplingOffset = m_samplingOffset;
#endif
    m_samplingOffset = _samplingOffset;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getScenario__samplingOffset(), _old_samplingOffset, m_samplingOffset);
        eNotify(&notification);
    }
#endif
}

::amalthea::NonNegativeDouble Scenario::getSamplingRecurrence() const
{
    return m_samplingRecurrence;
}

void Scenario::setSamplingRecurrence(
        ::amalthea::NonNegativeDouble _samplingRecurrence)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::NonNegativeDouble _old_samplingRecurrence = m_samplingRecurrence;
#endif
    m_samplingRecurrence = _samplingRecurrence;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getScenario__samplingRecurrence(), _old_samplingRecurrence, m_samplingRecurrence);
        eNotify(&notification);
    }
#endif
}

// References

::amalthea::Clock_ptr Scenario::getClock() const
{
    return m_clock;
}

void Scenario::setClock(::amalthea::Clock_ptr _clock)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::Clock_ptr _old_clock = m_clock;
#endif
    m_clock = _clock;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getScenario__clock(), _old_clock, m_clock);
        eNotify(&notification);
    }
#endif
}

