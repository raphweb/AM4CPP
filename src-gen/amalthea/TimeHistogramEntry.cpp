// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/TimeHistogramEntry.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "TimeHistogramEntry.hpp"
#include <amalthea/TimeInterval.hpp>
#include <amalthea/Time.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(TimeHistogramEntry.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
TimeHistogramEntry::TimeHistogramEntry() : m_occurrences(1)
{

    /*PROTECTED REGION ID(TimeHistogramEntryImpl__TimeHistogramEntryImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

TimeHistogramEntry::~TimeHistogramEntry()
{
}

// Attributes

::amalthea::PositiveLong TimeHistogramEntry::getOccurrences() const
{
    return m_occurrences;
}

void TimeHistogramEntry::setOccurrences(::amalthea::PositiveLong _occurrences)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::PositiveLong _old_occurrences = m_occurrences;
#endif
    m_occurrences = _occurrences;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getTimeHistogramEntry__occurrences(), _old_occurrences, m_occurrences);
        eNotify(&notification);
    }
#endif
}

// References

