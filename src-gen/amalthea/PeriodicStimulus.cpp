// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/PeriodicStimulus.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "PeriodicStimulus.hpp"
#include <amalthea/Stimulus.hpp>
#include <amalthea/FixedPeriodic.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Tag.hpp>
#include <amalthea/ModeValueList.hpp>
#include <amalthea/ModeConditionDisjunction.hpp>
#include <amalthea/Process.hpp>
#include <amalthea/Time.hpp>
#include <amalthea/ITimeDeviation.hpp>
#include <amalthea/INamed.hpp>
#include <amalthea/Namespace.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(PeriodicStimulus.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
PeriodicStimulus::PeriodicStimulus() : m_jitter(0), m_minDistance(0)
{

    /*PROTECTED REGION ID(PeriodicStimulusImpl__PeriodicStimulusImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

PeriodicStimulus::~PeriodicStimulus()
{
    if (m_jitter)
    {
        m_jitter.reset();
    }
    if (m_minDistance)
    {
        m_minDistance.reset();
    }
}

// Attributes

// References

::amalthea::ITimeDeviation_ptr PeriodicStimulus::getJitter() const
{
    return m_jitter;
}

void PeriodicStimulus::setJitter(::amalthea::ITimeDeviation_ptr _jitter)
{
    if (m_jitter)
        m_jitter->_setEContainer(PeriodicStimulus_ptr(),
                ::amalthea::AmaltheaPackage::_instance()->getPeriodicStimulus__jitter());
    if (_jitter)
        _jitter->_setEContainer(_this(),
                ::amalthea::AmaltheaPackage::_instance()->getPeriodicStimulus__jitter());

#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::ITimeDeviation_ptr _old_jitter = m_jitter;
#endif
    m_jitter = _jitter;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getPeriodicStimulus__jitter(), _old_jitter, m_jitter);
        eNotify(&notification);
    }
#endif
}

::amalthea::Time_ptr PeriodicStimulus::getMinDistance() const
{
    return m_minDistance;
}

void PeriodicStimulus::setMinDistance(::amalthea::Time_ptr _minDistance)
{
    if (m_minDistance)
        m_minDistance->_setEContainer(PeriodicStimulus_ptr(),
                ::amalthea::AmaltheaPackage::_instance()->getPeriodicStimulus__minDistance());
    if (_minDistance)
        _minDistance->_setEContainer(_this(),
                ::amalthea::AmaltheaPackage::_instance()->getPeriodicStimulus__minDistance());

#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::Time_ptr _old_minDistance = m_minDistance;
#endif
    m_minDistance = _minDistance;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getPeriodicStimulus__minDistance(), _old_minDistance, m_minDistance);
        eNotify(&notification);
    }
#endif
}

