// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/PeriodicSyntheticStimulus.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "PeriodicSyntheticStimulus.hpp"
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

/*PROTECTED REGION ID(PeriodicSyntheticStimulus.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
PeriodicSyntheticStimulus::PeriodicSyntheticStimulus()
{

    m_occurrenceTimes.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl< ::amalthea::Time_ptr,
                    -1, true, false >(this,
                    ::amalthea::AmaltheaPackage::_instance()->getPeriodicSyntheticStimulus__occurrenceTimes()));

    /*PROTECTED REGION ID(PeriodicSyntheticStimulusImpl__PeriodicSyntheticStimulusImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

PeriodicSyntheticStimulus::~PeriodicSyntheticStimulus()
{
}

// Attributes

// References

const ::ecorecpp::mapping::EList< ::amalthea::Time_ptr >& PeriodicSyntheticStimulus::getOccurrenceTimes() const
{
    return *m_occurrenceTimes;
}

::ecorecpp::mapping::EList< ::amalthea::Time_ptr >& PeriodicSyntheticStimulus::getOccurrenceTimes()
{
    return *m_occurrenceTimes;
}

