// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/DiscreteValueHistogramEntry.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "DiscreteValueHistogramEntry.hpp"
#include <amalthea/DiscreteValueInterval.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(DiscreteValueHistogramEntry.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
DiscreteValueHistogramEntry::DiscreteValueHistogramEntry() : m_occurrences(1)
{

    /*PROTECTED REGION ID(DiscreteValueHistogramEntryImpl__DiscreteValueHistogramEntryImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

DiscreteValueHistogramEntry::~DiscreteValueHistogramEntry()
{
}

// Attributes

::amalthea::PositiveLong DiscreteValueHistogramEntry::getOccurrences() const
{
    return m_occurrences;
}

void DiscreteValueHistogramEntry::setOccurrences(
        ::amalthea::PositiveLong _occurrences)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::PositiveLong _old_occurrences = m_occurrences;
#endif
    m_occurrences = _occurrences;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getDiscreteValueHistogramEntry__occurrences(), _old_occurrences, m_occurrences);
        eNotify(&notification);
    }
#endif
}

// References

