// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/TimeHistogram.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "TimeHistogram.hpp"
#include <amalthea/ITimeDeviation.hpp>
#include <amalthea/TimeHistogramEntry.hpp>
#include <amalthea/Time.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(TimeHistogram.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
TimeHistogram::TimeHistogram()
{

    m_entries.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::amalthea::TimeHistogramEntry_ptr, -1, true, false >(this,
                    ::amalthea::AmaltheaPackage::_instance()->getTimeHistogram__entries()));

    /*PROTECTED REGION ID(TimeHistogramImpl__TimeHistogramImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

TimeHistogram::~TimeHistogram()
{
}

// Attributes

// References

const ::ecorecpp::mapping::EList< ::amalthea::TimeHistogramEntry_ptr >& TimeHistogram::getEntries() const
{
    return *m_entries;
}

::ecorecpp::mapping::EList< ::amalthea::TimeHistogramEntry_ptr >& TimeHistogram::getEntries()
{
    return *m_entries;
}

