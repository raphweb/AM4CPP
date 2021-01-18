// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/ContinuousValueHistogram.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "ContinuousValueHistogram.hpp"
#include <amalthea/IContinuousValueDeviation.hpp>
#include <amalthea/ContinuousValueHistogramEntry.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(ContinuousValueHistogram.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
ContinuousValueHistogram::ContinuousValueHistogram()
{

    m_entries.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::amalthea::ContinuousValueHistogramEntry_ptr, -1, true,
                    false >(this,
                    ::amalthea::AmaltheaPackage::_instance()->getContinuousValueHistogram__entries()));

    /*PROTECTED REGION ID(ContinuousValueHistogramImpl__ContinuousValueHistogramImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

ContinuousValueHistogram::~ContinuousValueHistogram()
{
}

// Attributes

// References

const ::ecorecpp::mapping::EList< ::amalthea::ContinuousValueHistogramEntry_ptr >& ContinuousValueHistogram::getEntries() const
{
    return *m_entries;
}

::ecorecpp::mapping::EList< ::amalthea::ContinuousValueHistogramEntry_ptr >& ContinuousValueHistogram::getEntries()
{
    return *m_entries;
}

