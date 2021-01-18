// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/VariableRateStimulus.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "VariableRateStimulus.hpp"
#include <amalthea/Stimulus.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Tag.hpp>
#include <amalthea/ModeValueList.hpp>
#include <amalthea/ModeConditionDisjunction.hpp>
#include <amalthea/Process.hpp>
#include <amalthea/Time.hpp>
#include <amalthea/IContinuousValueDeviation.hpp>
#include <amalthea/Scenario.hpp>
#include <amalthea/INamed.hpp>
#include <amalthea/Namespace.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(VariableRateStimulus.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
VariableRateStimulus::VariableRateStimulus() : m_step(0), m_occurrencesPerStep(
        0), m_scenario(0)
{

    /*PROTECTED REGION ID(VariableRateStimulusImpl__VariableRateStimulusImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

VariableRateStimulus::~VariableRateStimulus()
{
    if (m_step)
    {
        m_step.reset();
    }
    if (m_occurrencesPerStep)
    {
        m_occurrencesPerStep.reset();
    }
    if (m_scenario)
    {
        m_scenario.reset();
    }
}

// Attributes

::ecore::EDoubleObject VariableRateStimulus::getMaxIncreasePerStep() const
{
    return m_maxIncreasePerStep;
}

void VariableRateStimulus::setMaxIncreasePerStep(
        ::ecore::EDoubleObject _maxIncreasePerStep)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EDoubleObject _old_maxIncreasePerStep = m_maxIncreasePerStep;
#endif
    m_maxIncreasePerStep = _maxIncreasePerStep;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getVariableRateStimulus__maxIncreasePerStep(), _old_maxIncreasePerStep, m_maxIncreasePerStep);
        eNotify(&notification);
    }
#endif
}

::ecore::EDoubleObject VariableRateStimulus::getMaxDecreasePerStep() const
{
    return m_maxDecreasePerStep;
}

void VariableRateStimulus::setMaxDecreasePerStep(
        ::ecore::EDoubleObject _maxDecreasePerStep)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EDoubleObject _old_maxDecreasePerStep = m_maxDecreasePerStep;
#endif
    m_maxDecreasePerStep = _maxDecreasePerStep;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getVariableRateStimulus__maxDecreasePerStep(), _old_maxDecreasePerStep, m_maxDecreasePerStep);
        eNotify(&notification);
    }
#endif
}

// References

::amalthea::Time_ptr VariableRateStimulus::getStep() const
{
    return m_step;
}

void VariableRateStimulus::setStep(::amalthea::Time_ptr _step)
{
    if (m_step)
        m_step->_setEContainer(VariableRateStimulus_ptr(),
                ::amalthea::AmaltheaPackage::_instance()->getVariableRateStimulus__step());
    if (_step)
        _step->_setEContainer(_this(),
                ::amalthea::AmaltheaPackage::_instance()->getVariableRateStimulus__step());

#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::Time_ptr _old_step = m_step;
#endif
    m_step = _step;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getVariableRateStimulus__step(), _old_step, m_step);
        eNotify(&notification);
    }
#endif
}

::amalthea::IContinuousValueDeviation_ptr VariableRateStimulus::getOccurrencesPerStep() const
{
    return m_occurrencesPerStep;
}

void VariableRateStimulus::setOccurrencesPerStep(
        ::amalthea::IContinuousValueDeviation_ptr _occurrencesPerStep)
{
    if (m_occurrencesPerStep)
        m_occurrencesPerStep->_setEContainer(VariableRateStimulus_ptr(),
                ::amalthea::AmaltheaPackage::_instance()->getVariableRateStimulus__occurrencesPerStep());
    if (_occurrencesPerStep)
        _occurrencesPerStep->_setEContainer(_this(),
                ::amalthea::AmaltheaPackage::_instance()->getVariableRateStimulus__occurrencesPerStep());

#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::IContinuousValueDeviation_ptr _old_occurrencesPerStep = m_occurrencesPerStep;
#endif
    m_occurrencesPerStep = _occurrencesPerStep;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getVariableRateStimulus__occurrencesPerStep(), _old_occurrencesPerStep, m_occurrencesPerStep);
        eNotify(&notification);
    }
#endif
}

::amalthea::Scenario_ptr VariableRateStimulus::getScenario() const
{
    return m_scenario;
}

void VariableRateStimulus::setScenario(::amalthea::Scenario_ptr _scenario)
{
    if (m_scenario)
        m_scenario->_setEContainer(VariableRateStimulus_ptr(),
                ::amalthea::AmaltheaPackage::_instance()->getVariableRateStimulus__scenario());
    if (_scenario)
        _scenario->_setEContainer(_this(),
                ::amalthea::AmaltheaPackage::_instance()->getVariableRateStimulus__scenario());

#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::Scenario_ptr _old_scenario = m_scenario;
#endif
    m_scenario = _scenario;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getVariableRateStimulus__scenario(), _old_scenario, m_scenario);
        eNotify(&notification);
    }
#endif
}

