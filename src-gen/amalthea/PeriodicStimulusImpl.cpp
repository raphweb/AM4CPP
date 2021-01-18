// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/PeriodicStimulusImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "PeriodicStimulus.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/Stimulus.hpp>
#include <amalthea/FixedPeriodic.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Tag.hpp>
#include <amalthea/ModeValueList.hpp>
#include <amalthea/ModeConditionDisjunction.hpp>
#include <amalthea/Process.hpp>
#include <amalthea/Time.hpp>
#include <amalthea/ITimeDeviation.hpp>
#include <amalthea/INamed.hpp>
#include <amalthea/Namespace.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(PeriodicStimulusImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void PeriodicStimulus::_initialize()
{
    // Supertypes
    ::amalthea::Stimulus::_initialize();
    ::amalthea::FixedPeriodic::_initialize();

    // References
    if (m_jitter)
    {
        m_jitter->_initialize();
    }
    if (m_minDistance)
    {
        m_minDistance->_initialize();
    }

    /*PROTECTED REGION ID(PeriodicStimulusImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject PeriodicStimulus::eGet(::ecore::EInt _featureID,
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
    case ::amalthea::AmaltheaPackage::FIXEDPERIODIC__RECURRENCE:
    case ::amalthea::AmaltheaPackage::FIXEDPERIODIC__OFFSET:
    {
        return amalthea::FixedPeriodic::eGet(_featureID, _resolve);
    }
    case ::amalthea::AmaltheaPackage::PERIODICSTIMULUS__JITTER:
    {
        if (m_jitter)
            _any = ::ecore::as < ::ecore::EObject > (m_jitter);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::PERIODICSTIMULUS__MINDISTANCE:
    {
        if (m_minDistance)
            _any = ::ecore::as < ::ecore::EObject > (m_minDistance);
        return _any;
    }
    }
    throw std::runtime_error(
            "PeriodicStimulus::eGet Error. FeatureID:" + _featureID);
}

void PeriodicStimulus::eSet(::ecore::EInt _featureID,
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
    case ::amalthea::AmaltheaPackage::FIXEDPERIODIC__RECURRENCE:
    case ::amalthea::AmaltheaPackage::FIXEDPERIODIC__OFFSET:
    {
        amalthea::FixedPeriodic::eSet(_featureID, _newValue);
        return;
    }
    case ::amalthea::AmaltheaPackage::PERIODICSTIMULUS__JITTER:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::ITimeDeviation_ptr _t1 =
                dynamic_cast< ::amalthea::ITimeDeviation* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::ITimeDeviation >(_t0);*/
        ::amalthea::PeriodicStimulus::setJitter(_t1);
        return;
    }
    case ::amalthea::AmaltheaPackage::PERIODICSTIMULUS__MINDISTANCE:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::Time_ptr _t1 = dynamic_cast< ::amalthea::Time* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::Time >(_t0);*/
        ::amalthea::PeriodicStimulus::setMinDistance(_t1);
        return;
    }
    }
    throw std::runtime_error(
            "PeriodicStimulus::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean PeriodicStimulus::eIsSet(::ecore::EInt _featureID)
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
    case ::amalthea::AmaltheaPackage::FIXEDPERIODIC__RECURRENCE:
    case ::amalthea::AmaltheaPackage::FIXEDPERIODIC__OFFSET:
    {
        return amalthea::FixedPeriodic::eIsSet(_featureID);
    }
    case ::amalthea::AmaltheaPackage::PERIODICSTIMULUS__JITTER:
    {
        return (bool) m_jitter;
    }
    case ::amalthea::AmaltheaPackage::PERIODICSTIMULUS__MINDISTANCE:
    {
        return (bool) m_minDistance;
    }
    }
    throw std::runtime_error(
            "PeriodicStimulus::eIsSet Error. FeatureID:" + _featureID);
}

void PeriodicStimulus::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "PeriodicStimulus::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr PeriodicStimulus::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getPeriodicStimulus();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void PeriodicStimulus::_inverseAdd(::ecore::EInt _featureID,
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
    case ::amalthea::AmaltheaPackage::FIXEDPERIODIC__RECURRENCE:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::FIXEDPERIODIC__OFFSET:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::PERIODICSTIMULUS__JITTER:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::PERIODICSTIMULUS__MINDISTANCE:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void PeriodicStimulus::_inverseRemove(::ecore::EInt _featureID,
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
    case ::amalthea::AmaltheaPackage::FIXEDPERIODIC__RECURRENCE:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::FIXEDPERIODIC__OFFSET:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::PERIODICSTIMULUS__JITTER:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::PERIODICSTIMULUS__MINDISTANCE:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

