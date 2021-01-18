// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/ClearEventImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "ClearEvent.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/ActivityGraphItem.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Process.hpp>
#include <amalthea/Runnable.hpp>
#include <amalthea/ActivityGraph.hpp>
#include <amalthea/EventMask.hpp>
#include <amalthea/Counter.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(ClearEventImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void ClearEvent::_initialize()
{
    // Supertypes
    ::amalthea::ActivityGraphItem::_initialize();

    // References
    if (m_eventMask)
    {
        m_eventMask->_initialize();
    }
    if (m_counter)
    {
        m_counter->_initialize();
    }

    /*PROTECTED REGION ID(ClearEventImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject ClearEvent::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        return amalthea::IAnnotatable::eGet(_featureID, _resolve);
    }
    case ::amalthea::AmaltheaPackage::CLEAREVENT__EVENTMASK:
    {
        if (m_eventMask)
            _any = ::ecore::as < ::ecore::EObject > (m_eventMask);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::CLEAREVENT__COUNTER:
    {
        if (m_counter)
            _any = ::ecore::as < ::ecore::EObject > (m_counter);
        return _any;
    }
    }
    throw std::runtime_error("ClearEvent::eGet Error. FeatureID:" + _featureID);
}

void ClearEvent::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        amalthea::IAnnotatable::eSet(_featureID, _newValue);
        return;
    }
    case ::amalthea::AmaltheaPackage::CLEAREVENT__EVENTMASK:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::EventMask_ptr _t1 =
                dynamic_cast< ::amalthea::EventMask* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::EventMask >(_t0);*/
        ::amalthea::ClearEvent::setEventMask(_t1);
        return;
    }
    case ::amalthea::AmaltheaPackage::CLEAREVENT__COUNTER:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::Counter_ptr _t1 =
                dynamic_cast< ::amalthea::Counter* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::Counter >(_t0);*/
        ::amalthea::ClearEvent::setCounter(_t1);
        return;
    }
    }
    throw std::runtime_error("ClearEvent::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean ClearEvent::eIsSet(::ecore::EInt _featureID)
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
    case ::amalthea::AmaltheaPackage::CLEAREVENT__EVENTMASK:
    {
        return (bool) m_eventMask;
    }
    case ::amalthea::AmaltheaPackage::CLEAREVENT__COUNTER:
    {
        return (bool) m_counter;
    }
    }
    throw std::runtime_error(
            "ClearEvent::eIsSet Error. FeatureID:" + _featureID);
}

void ClearEvent::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "ClearEvent::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr ClearEvent::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getClearEvent();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void ClearEvent::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::CLEAREVENT__EVENTMASK:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::CLEAREVENT__COUNTER:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void ClearEvent::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::CLEAREVENT__EVENTMASK:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::CLEAREVENT__COUNTER:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

