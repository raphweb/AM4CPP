// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/WaitEventImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "WaitEvent.hpp"
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

/*PROTECTED REGION ID(WaitEventImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void WaitEvent::_initialize()
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

    /*PROTECTED REGION ID(WaitEventImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject WaitEvent::eGet(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        return amalthea::IAnnotatable::eGet(_featureID, _resolve);
    }
    case ::amalthea::AmaltheaPackage::WAITEVENT__EVENTMASK:
    {
        if (m_eventMask)
            _any = ::ecore::as < ::ecore::EObject > (m_eventMask);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::WAITEVENT__MASKTYPE:
    {
        ::ecorecpp::mapping::any_traits < ::amalthea::WaitEventType
                > ::toAny(_any, m_maskType);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::WAITEVENT__WAITINGBEHAVIOUR:
    {
        ::ecorecpp::mapping::any_traits < ::amalthea::WaitingBehaviour
                > ::toAny(_any, m_waitingBehaviour);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::WAITEVENT__COUNTER:
    {
        if (m_counter)
            _any = ::ecore::as < ::ecore::EObject > (m_counter);
        return _any;
    }
    }
    throw std::runtime_error("WaitEvent::eGet Error. FeatureID:" + _featureID);
}

void WaitEvent::eSet(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        amalthea::IAnnotatable::eSet(_featureID, _newValue);
        return;
    }
    case ::amalthea::AmaltheaPackage::WAITEVENT__EVENTMASK:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::EventMask_ptr _t1 =
                dynamic_cast< ::amalthea::EventMask* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::EventMask >(_t0);*/
        ::amalthea::WaitEvent::setEventMask(_t1);
        return;
    }
    case ::amalthea::AmaltheaPackage::WAITEVENT__MASKTYPE:
    {
        ::amalthea::WaitEventType _t0;
        ::ecorecpp::mapping::any_traits < ::amalthea::WaitEventType
                > ::fromAny(_newValue, _t0);
        ::amalthea::WaitEvent::setMaskType(_t0);
        return;
    }
    case ::amalthea::AmaltheaPackage::WAITEVENT__WAITINGBEHAVIOUR:
    {
        ::amalthea::WaitingBehaviour _t0;
        ::ecorecpp::mapping::any_traits < ::amalthea::WaitingBehaviour
                > ::fromAny(_newValue, _t0);
        ::amalthea::WaitEvent::setWaitingBehaviour(_t0);
        return;
    }
    case ::amalthea::AmaltheaPackage::WAITEVENT__COUNTER:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::Counter_ptr _t1 =
                dynamic_cast< ::amalthea::Counter* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::Counter >(_t0);*/
        ::amalthea::WaitEvent::setCounter(_t1);
        return;
    }
    }
    throw std::runtime_error("WaitEvent::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean WaitEvent::eIsSet(::ecore::EInt _featureID)
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
    case ::amalthea::AmaltheaPackage::WAITEVENT__EVENTMASK:
    {
        return (bool) m_eventMask;
    }
    case ::amalthea::AmaltheaPackage::WAITEVENT__MASKTYPE:
    {
        return ::ecorecpp::mapping::set_traits < ::amalthea::WaitEventType
                > ::is_set(m_maskType);
    }
    case ::amalthea::AmaltheaPackage::WAITEVENT__WAITINGBEHAVIOUR:
    {
        return ::ecorecpp::mapping::set_traits < ::amalthea::WaitingBehaviour
                > ::is_set(m_waitingBehaviour);
    }
    case ::amalthea::AmaltheaPackage::WAITEVENT__COUNTER:
    {
        return (bool) m_counter;
    }
    }
    throw std::runtime_error(
            "WaitEvent::eIsSet Error. FeatureID:" + _featureID);
}

void WaitEvent::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "WaitEvent::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr WaitEvent::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getWaitEvent();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void WaitEvent::_inverseAdd(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::WAITEVENT__EVENTMASK:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::WAITEVENT__COUNTER:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void WaitEvent::_inverseRemove(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::WAITEVENT__EVENTMASK:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::WAITEVENT__COUNTER:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

