// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/TimeBoundaries.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "TimeBoundaries.hpp"
#include <amalthea/BoundedTimeDistribution.hpp>
#include <amalthea/Time.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(TimeBoundaries.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
TimeBoundaries::TimeBoundaries()
{

    /*PROTECTED REGION ID(TimeBoundariesImpl__TimeBoundariesImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

TimeBoundaries::~TimeBoundaries()
{
}

// Attributes

::amalthea::SamplingType TimeBoundaries::getSamplingType() const
{
    return m_samplingType;
}

void TimeBoundaries::setSamplingType(::amalthea::SamplingType _samplingType)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::SamplingType _old_samplingType = m_samplingType;
#endif
    m_samplingType = _samplingType;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getTimeBoundaries__samplingType(), _old_samplingType, m_samplingType);
        eNotify(&notification);
    }
#endif
}

// References

