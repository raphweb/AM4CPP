// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/ProbabilitySwitch.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "ProbabilitySwitch.hpp"
#include <amalthea/ActivityGraphItem.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Process.hpp>
#include <amalthea/Runnable.hpp>
#include <amalthea/ActivityGraph.hpp>
#include <amalthea/ProbabilitySwitchEntry.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(ProbabilitySwitch.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
ProbabilitySwitch::ProbabilitySwitch()
{

    m_entries.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::amalthea::ProbabilitySwitchEntry_ptr, -1, true, false >(
                    this,
                    ::amalthea::AmaltheaPackage::_instance()->getProbabilitySwitch__entries()));

    /*PROTECTED REGION ID(ProbabilitySwitchImpl__ProbabilitySwitchImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

ProbabilitySwitch::~ProbabilitySwitch()
{
}

// Attributes

// References

const ::ecorecpp::mapping::EList< ::amalthea::ProbabilitySwitchEntry_ptr >& ProbabilitySwitch::getEntries() const
{
    return *m_entries;
}

::ecorecpp::mapping::EList< ::amalthea::ProbabilitySwitchEntry_ptr >& ProbabilitySwitch::getEntries()
{
    return *m_entries;
}

