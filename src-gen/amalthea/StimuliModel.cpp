// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/StimuliModel.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "StimuliModel.hpp"
#include <amalthea/BaseObject.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Stimulus.hpp>
#include <amalthea/Clock.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(StimuliModel.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
StimuliModel::StimuliModel()
{

    m_stimuli.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::amalthea::Stimulus_ptr, -1, true, false >(this,
                    ::amalthea::AmaltheaPackage::_instance()->getStimuliModel__stimuli()));
    m_clocks.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl< ::amalthea::Clock_ptr,
                    -1, true, false >(this,
                    ::amalthea::AmaltheaPackage::_instance()->getStimuliModel__clocks()));

    /*PROTECTED REGION ID(StimuliModelImpl__StimuliModelImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

StimuliModel::~StimuliModel()
{
}

// Attributes

// References

const ::ecorecpp::mapping::EList< ::amalthea::Stimulus_ptr >& StimuliModel::getStimuli() const
{
    return *m_stimuli;
}

::ecorecpp::mapping::EList< ::amalthea::Stimulus_ptr >& StimuliModel::getStimuli()
{
    return *m_stimuli;
}

const ::ecorecpp::mapping::EList< ::amalthea::Clock_ptr >& StimuliModel::getClocks() const
{
    return *m_clocks;
}

::ecorecpp::mapping::EList< ::amalthea::Clock_ptr >& StimuliModel::getClocks()
{
    return *m_clocks;
}

