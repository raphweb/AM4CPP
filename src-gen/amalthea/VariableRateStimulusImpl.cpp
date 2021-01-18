// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/VariableRateStimulusImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "VariableRateStimulus.hpp"
#include <amalthea/AmaltheaPackage.hpp>
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
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(VariableRateStimulusImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void VariableRateStimulus::_initialize()
{
    // Supertypes
    ::amalthea::Stimulus::_initialize();

    // References
    if (m_step)
    {
        m_step->_initialize();
    }
    if (m_occurrencesPerStep)
    {
        m_occurrencesPerStep->_initialize();
    }
    if (m_scenario)
    {
        m_scenario->_initialize();
    }

    /*PROTECTED REGION ID(VariableRateStimulusImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject VariableRateStimulus::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        return amalthea::IAnnotatable::eGet(_featureID, _resolve);
    }
    case ::amalthea::AmaltheaPackage::INAMED__NAME:
    {
        return amalthea::INamed::eGet(_featureID, _resolve);
    }
    case ::amalthea::AmaltheaPackage::ITAGGABLE__TAGS:
    {
        return amalthea::ITaggable::eGet(_featureID, _resolve);
    }
    case ::amalthea::AmaltheaPackage::STIMULUS__SETMODEVALUELIST:
    case ::amalthea::AmaltheaPackage::STIMULUS__EXECUTIONCONDITION:
    {
        return amalthea::Stimulus::eGet(_featureID, _resolve);
    }
    case ::amalthea::AmaltheaPackage::VARIABLERATESTIMULUS__STEP:
    {
        if (m_step)
            _any = ::ecore::as < ::ecore::EObject > (m_step);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::VARIABLERATESTIMULUS__OCCURRENCESPERSTEP:
    {
        if (m_occurrencesPerStep)
            _any = ::ecore::as < ::ecore::EObject > (m_occurrencesPerStep);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::VARIABLERATESTIMULUS__MAXINCREASEPERSTEP:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EDoubleObject
                > ::toAny(_any, m_maxIncreasePerStep);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::VARIABLERATESTIMULUS__MAXDECREASEPERSTEP:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EDoubleObject
                > ::toAny(_any, m_maxDecreasePerStep);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::VARIABLERATESTIMULUS__SCENARIO:
    {
        if (m_scenario)
            _any = ::ecore::as < ::ecore::EObject > (m_scenario);
        return _any;
    }
    }
    throw std::runtime_error(
            "VariableRateStimulus::eGet Error. FeatureID:" + _featureID);
}

void VariableRateStimulus::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        amalthea::IAnnotatable::eSet(_featureID, _newValue);
        return;
    }
    case ::amalthea::AmaltheaPackage::INAMED__NAME:
    {
        amalthea::INamed::eSet(_featureID, _newValue);
        return;
    }
    case ::amalthea::AmaltheaPackage::ITAGGABLE__TAGS:
    {
        amalthea::ITaggable::eSet(_featureID, _newValue);
        return;
    }
    case ::amalthea::AmaltheaPackage::STIMULUS__SETMODEVALUELIST:
    case ::amalthea::AmaltheaPackage::STIMULUS__EXECUTIONCONDITION:
    {
        amalthea::Stimulus::eSet(_featureID, _newValue);
        return;
    }
    case ::amalthea::AmaltheaPackage::VARIABLERATESTIMULUS__STEP:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::Time_ptr _t1 = dynamic_cast< ::amalthea::Time* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::Time >(_t0);*/
        ::amalthea::VariableRateStimulus::setStep(_t1);
        return;
    }
    case ::amalthea::AmaltheaPackage::VARIABLERATESTIMULUS__OCCURRENCESPERSTEP:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::IContinuousValueDeviation_ptr _t1 =
                dynamic_cast< ::amalthea::IContinuousValueDeviation* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::IContinuousValueDeviation >(_t0);*/
        ::amalthea::VariableRateStimulus::setOccurrencesPerStep(_t1);
        return;
    }
    case ::amalthea::AmaltheaPackage::VARIABLERATESTIMULUS__MAXINCREASEPERSTEP:
    {
        ::ecore::EDoubleObject _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EDoubleObject
                > ::fromAny(_newValue, _t0);
        ::amalthea::VariableRateStimulus::setMaxIncreasePerStep(_t0);
        return;
    }
    case ::amalthea::AmaltheaPackage::VARIABLERATESTIMULUS__MAXDECREASEPERSTEP:
    {
        ::ecore::EDoubleObject _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EDoubleObject
                > ::fromAny(_newValue, _t0);
        ::amalthea::VariableRateStimulus::setMaxDecreasePerStep(_t0);
        return;
    }
    case ::amalthea::AmaltheaPackage::VARIABLERATESTIMULUS__SCENARIO:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::Scenario_ptr _t1 =
                dynamic_cast< ::amalthea::Scenario* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::Scenario >(_t0);*/
        ::amalthea::VariableRateStimulus::setScenario(_t1);
        return;
    }
    }
    throw std::runtime_error(
            "VariableRateStimulus::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean VariableRateStimulus::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        return amalthea::IAnnotatable::eIsSet(_featureID);
    }
    case ::amalthea::AmaltheaPackage::INAMED__NAME:
    case ::amalthea::AmaltheaPackage::INAMED__QUALIFIEDNAME:
    {
        return amalthea::INamed::eIsSet(_featureID);
    }
    case ::amalthea::AmaltheaPackage::IREFERABLE__UNIQUENAME:
    {
        return amalthea::IReferable::eIsSet(_featureID);
    }
    case ::amalthea::AmaltheaPackage::ITAGGABLE__TAGS:
    {
        return amalthea::ITaggable::eIsSet(_featureID);
    }
    case ::amalthea::AmaltheaPackage::STIMULUS__SETMODEVALUELIST:
    case ::amalthea::AmaltheaPackage::STIMULUS__EXECUTIONCONDITION:
    case ::amalthea::AmaltheaPackage::STIMULUS__AFFECTEDPROCESSES:
    {
        return amalthea::Stimulus::eIsSet(_featureID);
    }
    case ::amalthea::AmaltheaPackage::VARIABLERATESTIMULUS__STEP:
    {
        return (bool) m_step;
    }
    case ::amalthea::AmaltheaPackage::VARIABLERATESTIMULUS__OCCURRENCESPERSTEP:
    {
        return (bool) m_occurrencesPerStep;
    }
    case ::amalthea::AmaltheaPackage::VARIABLERATESTIMULUS__MAXINCREASEPERSTEP:
    {
        return ::ecorecpp::mapping::set_traits < ::ecore::EDoubleObject
                > ::is_set(m_maxIncreasePerStep);
    }
    case ::amalthea::AmaltheaPackage::VARIABLERATESTIMULUS__MAXDECREASEPERSTEP:
    {
        return ::ecorecpp::mapping::set_traits < ::ecore::EDoubleObject
                > ::is_set(m_maxDecreasePerStep);
    }
    case ::amalthea::AmaltheaPackage::VARIABLERATESTIMULUS__SCENARIO:
    {
        return (bool) m_scenario;
    }
    }
    throw std::runtime_error(
            "VariableRateStimulus::eIsSet Error. FeatureID:" + _featureID);
}

void VariableRateStimulus::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "VariableRateStimulus::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr VariableRateStimulus::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getVariableRateStimulus();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void VariableRateStimulus::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::ITAGGABLE__TAGS:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::STIMULUS__SETMODEVALUELIST:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::STIMULUS__EXECUTIONCONDITION:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::VARIABLERATESTIMULUS__STEP:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::VARIABLERATESTIMULUS__OCCURRENCESPERSTEP:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::VARIABLERATESTIMULUS__SCENARIO:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void VariableRateStimulus::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::ITAGGABLE__TAGS:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::STIMULUS__SETMODEVALUELIST:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::STIMULUS__EXECUTIONCONDITION:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::VARIABLERATESTIMULUS__STEP:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::VARIABLERATESTIMULUS__OCCURRENCESPERSTEP:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::VARIABLERATESTIMULUS__SCENARIO:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

