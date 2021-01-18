// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/RelativePeriodicStimulus.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "RelativePeriodicStimulus.hpp"
#include <amalthea/Stimulus.hpp>
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

/*PROTECTED REGION ID(RelativePeriodicStimulus.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
RelativePeriodicStimulus::RelativePeriodicStimulus() : m_offset(0), m_nextOccurrence(
        0)
{

    /*PROTECTED REGION ID(RelativePeriodicStimulusImpl__RelativePeriodicStimulusImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

RelativePeriodicStimulus::~RelativePeriodicStimulus()
{
    if (m_offset)
    {
        m_offset.reset();
    }
    if (m_nextOccurrence)
    {
        m_nextOccurrence.reset();
    }
}

// Attributes

// References

::amalthea::Time_ptr RelativePeriodicStimulus::getOffset() const
{
    return m_offset;
}

void RelativePeriodicStimulus::setOffset(::amalthea::Time_ptr _offset)
{
    if (m_offset)
        m_offset->_setEContainer(RelativePeriodicStimulus_ptr(),
                ::amalthea::AmaltheaPackage::_instance()->getRelativePeriodicStimulus__offset());
    if (_offset)
        _offset->_setEContainer(_this(),
                ::amalthea::AmaltheaPackage::_instance()->getRelativePeriodicStimulus__offset());

#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::Time_ptr _old_offset = m_offset;
#endif
    m_offset = _offset;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getRelativePeriodicStimulus__offset(), _old_offset, m_offset);
        eNotify(&notification);
    }
#endif
}

::amalthea::ITimeDeviation_ptr RelativePeriodicStimulus::getNextOccurrence() const
{
    return m_nextOccurrence;
}

void RelativePeriodicStimulus::setNextOccurrence(
        ::amalthea::ITimeDeviation_ptr _nextOccurrence)
{
    if (m_nextOccurrence)
        m_nextOccurrence->_setEContainer(RelativePeriodicStimulus_ptr(),
                ::amalthea::AmaltheaPackage::_instance()->getRelativePeriodicStimulus__nextOccurrence());
    if (_nextOccurrence)
        _nextOccurrence->_setEContainer(_this(),
                ::amalthea::AmaltheaPackage::_instance()->getRelativePeriodicStimulus__nextOccurrence());

#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::ITimeDeviation_ptr _old_nextOccurrence = m_nextOccurrence;
#endif
    m_nextOccurrence = _nextOccurrence;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getRelativePeriodicStimulus__nextOccurrence(), _old_nextOccurrence, m_nextOccurrence);
        eNotify(&notification);
    }
#endif
}

