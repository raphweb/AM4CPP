// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/DiscreteValueHistogram.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "DiscreteValueHistogram.hpp"
#include <amalthea/IDiscreteValueDeviation.hpp>
#include <amalthea/DiscreteValueHistogramEntry.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(DiscreteValueHistogram.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
DiscreteValueHistogram::DiscreteValueHistogram()
{

    m_entries.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::amalthea::DiscreteValueHistogramEntry_ptr, -1, true, false >(
                    this,
                    ::amalthea::AmaltheaPackage::_instance()->getDiscreteValueHistogram__entries()));

    /*PROTECTED REGION ID(DiscreteValueHistogramImpl__DiscreteValueHistogramImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

DiscreteValueHistogram::~DiscreteValueHistogram()
{
}

// Attributes

// References

const ::ecorecpp::mapping::EList< ::amalthea::DiscreteValueHistogramEntry_ptr >& DiscreteValueHistogram::getEntries() const
{
    return *m_entries;
}

::ecorecpp::mapping::EList< ::amalthea::DiscreteValueHistogramEntry_ptr >& DiscreteValueHistogram::getEntries()
{
    return *m_entries;
}

