// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/PeriodicBurstStimulus.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "PeriodicBurstStimulus.hpp"
#include <amalthea/Stimulus.hpp>
#include <amalthea/FixedPeriodic.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Tag.hpp>
#include <amalthea/ModeValueList.hpp>
#include <amalthea/ModeConditionDisjunction.hpp>
#include <amalthea/Process.hpp>
#include <amalthea/Time.hpp>
#include <amalthea/INamed.hpp>
#include <amalthea/Namespace.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(PeriodicBurstStimulus.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
PeriodicBurstStimulus::PeriodicBurstStimulus() : m_occurrenceCount(0), m_burstLength(
        0), m_occurrenceMinDistance(0)
{

    /*PROTECTED REGION ID(PeriodicBurstStimulusImpl__PeriodicBurstStimulusImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

PeriodicBurstStimulus::~PeriodicBurstStimulus()
{
    if (m_burstLength)
    {
        m_burstLength.reset();
    }
    if (m_occurrenceMinDistance)
    {
        m_occurrenceMinDistance.reset();
    }
}

// Attributes

::ecore::EInt PeriodicBurstStimulus::getOccurrenceCount() const
{
    return m_occurrenceCount;
}

void PeriodicBurstStimulus::setOccurrenceCount(::ecore::EInt _occurrenceCount)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EInt _old_occurrenceCount = m_occurrenceCount;
#endif
    m_occurrenceCount = _occurrenceCount;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getPeriodicBurstStimulus__occurrenceCount(), _old_occurrenceCount, m_occurrenceCount);
        eNotify(&notification);
    }
#endif
}

// References

::amalthea::Time_ptr PeriodicBurstStimulus::getBurstLength() const
{
    return m_burstLength;
}

void PeriodicBurstStimulus::setBurstLength(::amalthea::Time_ptr _burstLength)
{
    if (m_burstLength)
        m_burstLength->_setEContainer(PeriodicBurstStimulus_ptr(),
                ::amalthea::AmaltheaPackage::_instance()->getPeriodicBurstStimulus__burstLength());
    if (_burstLength)
        _burstLength->_setEContainer(_this(),
                ::amalthea::AmaltheaPackage::_instance()->getPeriodicBurstStimulus__burstLength());

#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::Time_ptr _old_burstLength = m_burstLength;
#endif
    m_burstLength = _burstLength;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getPeriodicBurstStimulus__burstLength(), _old_burstLength, m_burstLength);
        eNotify(&notification);
    }
#endif
}

::amalthea::Time_ptr PeriodicBurstStimulus::getOccurrenceMinDistance() const
{
    return m_occurrenceMinDistance;
}

void PeriodicBurstStimulus::setOccurrenceMinDistance(
        ::amalthea::Time_ptr _occurrenceMinDistance)
{
    if (m_occurrenceMinDistance)
        m_occurrenceMinDistance->_setEContainer(PeriodicBurstStimulus_ptr(),
                ::amalthea::AmaltheaPackage::_instance()->getPeriodicBurstStimulus__occurrenceMinDistance());
    if (_occurrenceMinDistance)
        _occurrenceMinDistance->_setEContainer(_this(),
                ::amalthea::AmaltheaPackage::_instance()->getPeriodicBurstStimulus__occurrenceMinDistance());

#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::Time_ptr _old_occurrenceMinDistance = m_occurrenceMinDistance;
#endif
    m_occurrenceMinDistance = _occurrenceMinDistance;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getPeriodicBurstStimulus__occurrenceMinDistance(), _old_occurrenceMinDistance, m_occurrenceMinDistance);
        eNotify(&notification);
    }
#endif
}

