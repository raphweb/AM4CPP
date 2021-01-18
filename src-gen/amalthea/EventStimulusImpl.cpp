// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/EventStimulusImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "EventStimulus.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/Stimulus.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Tag.hpp>
#include <amalthea/ModeValueList.hpp>
#include <amalthea/ModeConditionDisjunction.hpp>
#include <amalthea/Process.hpp>
#include <amalthea/TriggerEvent.hpp>
#include <amalthea/Counter.hpp>
#include <amalthea/INamed.hpp>
#include <amalthea/Namespace.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(EventStimulusImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void EventStimulus::_initialize()
{
    // Supertypes
    ::amalthea::Stimulus::_initialize();

    // References
    if (m_counter)
    {
        m_counter->_initialize();
    }

    /*PROTECTED REGION ID(EventStimulusImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject EventStimulus::eGet(::ecore::EInt _featureID,
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
    case ::amalthea::AmaltheaPackage::EVENTSTIMULUS__TRIGGERINGEVENTS:
    {
        _any = m_triggeringEvents->asEListOf< ::ecore::EObject_ptr >();
        return _any;
    }
    case ::amalthea::AmaltheaPackage::EVENTSTIMULUS__COUNTER:
    {
        if (m_counter)
            _any = ::ecore::as < ::ecore::EObject > (m_counter);
        return _any;
    }
    }
    throw std::runtime_error(
            "EventStimulus::eGet Error. FeatureID:" + _featureID);
}

void EventStimulus::eSet(::ecore::EInt _featureID,
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
    case ::amalthea::AmaltheaPackage::EVENTSTIMULUS__TRIGGERINGEVENTS:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::amalthea::EventStimulus::getTriggeringEvents().clear();
        ::amalthea::EventStimulus::getTriggeringEvents().insert_all(*_t0);
        return;
    }
    case ::amalthea::AmaltheaPackage::EVENTSTIMULUS__COUNTER:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::Counter_ptr _t1 =
                dynamic_cast< ::amalthea::Counter* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::Counter >(_t0);*/
        ::amalthea::EventStimulus::setCounter(_t1);
        return;
    }
    }
    throw std::runtime_error(
            "EventStimulus::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean EventStimulus::eIsSet(::ecore::EInt _featureID)
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
    case ::amalthea::AmaltheaPackage::EVENTSTIMULUS__TRIGGERINGEVENTS:
    {
        return m_triggeringEvents && m_triggeringEvents->size();
    }
    case ::amalthea::AmaltheaPackage::EVENTSTIMULUS__COUNTER:
    {
        return (bool) m_counter;
    }
    }
    throw std::runtime_error(
            "EventStimulus::eIsSet Error. FeatureID:" + _featureID);
}

void EventStimulus::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "EventStimulus::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr EventStimulus::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getEventStimulus();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void EventStimulus::_inverseAdd(::ecore::EInt _featureID,
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
    case ::amalthea::AmaltheaPackage::EVENTSTIMULUS__TRIGGERINGEVENTS:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::EVENTSTIMULUS__COUNTER:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void EventStimulus::_inverseRemove(::ecore::EInt _featureID,
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
    case ::amalthea::AmaltheaPackage::EVENTSTIMULUS__TRIGGERINGEVENTS:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::EVENTSTIMULUS__COUNTER:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

