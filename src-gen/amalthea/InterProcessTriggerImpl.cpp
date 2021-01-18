// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/InterProcessTriggerImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "InterProcessTrigger.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/ActivityGraphItem.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Process.hpp>
#include <amalthea/Runnable.hpp>
#include <amalthea/ActivityGraph.hpp>
#include <amalthea/InterProcessStimulus.hpp>
#include <amalthea/Counter.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(InterProcessTriggerImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void InterProcessTrigger::_initialize()
{
    // Supertypes
    ::amalthea::ActivityGraphItem::_initialize();

    // References
    if (m_counter)
    {
        m_counter->_initialize();
    }

    /*PROTECTED REGION ID(InterProcessTriggerImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject InterProcessTrigger::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        return amalthea::IAnnotatable::eGet(_featureID, _resolve);
    }
    case ::amalthea::AmaltheaPackage::INTERPROCESSTRIGGER__STIMULUS:
    {
        if (m_stimulus)
            _any = ::ecore::as < ::ecore::EObject > (m_stimulus);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::INTERPROCESSTRIGGER__COUNTER:
    {
        if (m_counter)
            _any = ::ecore::as < ::ecore::EObject > (m_counter);
        return _any;
    }
    }
    throw std::runtime_error(
            "InterProcessTrigger::eGet Error. FeatureID:" + _featureID);
}

void InterProcessTrigger::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        amalthea::IAnnotatable::eSet(_featureID, _newValue);
        return;
    }
    case ::amalthea::AmaltheaPackage::INTERPROCESSTRIGGER__STIMULUS:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::InterProcessStimulus_ptr _t1 =
                dynamic_cast< ::amalthea::InterProcessStimulus* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::InterProcessStimulus >(_t0);*/
        ::amalthea::InterProcessTrigger::setStimulus(_t1);
        return;
    }
    case ::amalthea::AmaltheaPackage::INTERPROCESSTRIGGER__COUNTER:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::Counter_ptr _t1 =
                dynamic_cast< ::amalthea::Counter* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::Counter >(_t0);*/
        ::amalthea::InterProcessTrigger::setCounter(_t1);
        return;
    }
    }
    throw std::runtime_error(
            "InterProcessTrigger::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean InterProcessTrigger::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        return amalthea::IAnnotatable::eIsSet(_featureID);
    }
    case ::amalthea::AmaltheaPackage::ACTIVITYGRAPHITEM__CONTAININGPROCESS:
    case ::amalthea::AmaltheaPackage::ACTIVITYGRAPHITEM__CONTAININGRUNNABLE:
    case ::amalthea::AmaltheaPackage::ACTIVITYGRAPHITEM__CONTAININGACTIVITYGRAPH:
    {
        return amalthea::ActivityGraphItem::eIsSet(_featureID);
    }
    case ::amalthea::AmaltheaPackage::INTERPROCESSTRIGGER__STIMULUS:
    {
        return (bool) m_stimulus;
    }
    case ::amalthea::AmaltheaPackage::INTERPROCESSTRIGGER__COUNTER:
    {
        return (bool) m_counter;
    }
    }
    throw std::runtime_error(
            "InterProcessTrigger::eIsSet Error. FeatureID:" + _featureID);
}

void InterProcessTrigger::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "InterProcessTrigger::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr InterProcessTrigger::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getInterProcessTrigger();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void InterProcessTrigger::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::INTERPROCESSTRIGGER__STIMULUS:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::INTERPROCESSTRIGGER__COUNTER:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void InterProcessTrigger::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::INTERPROCESSTRIGGER__STIMULUS:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::INTERPROCESSTRIGGER__COUNTER:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

