// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/EventChainReferenceImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "EventChainReference.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/BaseObject.hpp>
#include <amalthea/EventChainItem.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/EventChain.hpp>
#include <amalthea/AbstractEventChain.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(EventChainReferenceImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void EventChainReference::_initialize()
{
    // Supertypes
    ::amalthea::BaseObject::_initialize();
    ::amalthea::EventChainItem::_initialize();

    // References

    /*PROTECTED REGION ID(EventChainReferenceImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject EventChainReference::eGet(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        return amalthea::IAnnotatable::eGet(_featureID, _resolve);
    }
    case ::amalthea::AmaltheaPackage::EVENTCHAINREFERENCE__EVENTCHAIN:
    {
        if (m_eventChain)
            _any = ::ecore::as < ::ecore::EObject > (m_eventChain);
        return _any;
    }
    }
    throw std::runtime_error(
            "EventChainReference::eGet Error. FeatureID:" + _featureID);
}

void EventChainReference::eSet(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        amalthea::IAnnotatable::eSet(_featureID, _newValue);
        return;
    }
    case ::amalthea::AmaltheaPackage::EVENTCHAINREFERENCE__EVENTCHAIN:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::EventChain_ptr _t1 =
                dynamic_cast< ::amalthea::EventChain* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::EventChain >(_t0);*/
        ::amalthea::EventChainReference::setEventChain(_t1);
        return;
    }
    }
    throw std::runtime_error(
            "EventChainReference::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean EventChainReference::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        return amalthea::IAnnotatable::eIsSet(_featureID);
    }
    case ::amalthea::AmaltheaPackage::EVENTCHAINREFERENCE__EVENTCHAIN:
    {
        return (bool) m_eventChain;
    }
    }
    throw std::runtime_error(
            "EventChainReference::eIsSet Error. FeatureID:" + _featureID);
}

void EventChainReference::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "EventChainReference::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr EventChainReference::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getEventChainReference();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void EventChainReference::_inverseAdd(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::EVENTCHAINREFERENCE__EVENTCHAIN:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void EventChainReference::_inverseRemove(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::EVENTCHAINREFERENCE__EVENTCHAIN:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

