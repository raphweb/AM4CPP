// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/ArrivalCurveStimulus.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "ArrivalCurveStimulus.hpp"
#include <amalthea/Stimulus.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Tag.hpp>
#include <amalthea/ModeValueList.hpp>
#include <amalthea/ModeConditionDisjunction.hpp>
#include <amalthea/Process.hpp>
#include <amalthea/ArrivalCurveEntry.hpp>
#include <amalthea/INamed.hpp>
#include <amalthea/Namespace.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(ArrivalCurveStimulus.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
ArrivalCurveStimulus::ArrivalCurveStimulus()
{

    m_entries.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::amalthea::ArrivalCurveEntry_ptr, -1, true, false >(this,
                    ::amalthea::AmaltheaPackage::_instance()->getArrivalCurveStimulus__entries()));

    /*PROTECTED REGION ID(ArrivalCurveStimulusImpl__ArrivalCurveStimulusImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

ArrivalCurveStimulus::~ArrivalCurveStimulus()
{
}

// Attributes

// References

const ::ecorecpp::mapping::EList< ::amalthea::ArrivalCurveEntry_ptr >& ArrivalCurveStimulus::getEntries() const
{
    return *m_entries;
}

::ecorecpp::mapping::EList< ::amalthea::ArrivalCurveEntry_ptr >& ArrivalCurveStimulus::getEntries()
{
    return *m_entries;
}

