// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/EventChainContainerImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "EventChainContainer.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/BaseObject.hpp>
#include <amalthea/EventChainItem.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/SubEventChain.hpp>
#include <amalthea/AbstractEventChain.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(EventChainContainerImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void EventChainContainer::_initialize()
{
    // Supertypes
    ::amalthea::BaseObject::_initialize();
    ::amalthea::EventChainItem::_initialize();

    // References
    if (m_eventChain)
    {
        m_eventChain->_initialize();
    }

    /*PROTECTED REGION ID(EventChainContainerImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject EventChainContainer::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        return amalthea::IAnnotatable::eGet(_featureID, _resolve);
    }
    case ::amalthea::AmaltheaPackage::EVENTCHAINCONTAINER__EVENTCHAIN:
    {
        if (m_eventChain)
            _any = ::ecore::as < ::ecore::EObject > (m_eventChain);
        return _any;
    }
    }
    throw std::runtime_error(
            "EventChainContainer::eGet Error. FeatureID:" + _featureID);
}

void EventChainContainer::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        amalthea::IAnnotatable::eSet(_featureID, _newValue);
        return;
    }
    case ::amalthea::AmaltheaPackage::EVENTCHAINCONTAINER__EVENTCHAIN:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::SubEventChain_ptr _t1 =
                dynamic_cast< ::amalthea::SubEventChain* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::SubEventChain >(_t0);*/
        ::amalthea::EventChainContainer::setEventChain(_t1);
        return;
    }
    }
    throw std::runtime_error(
            "EventChainContainer::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean EventChainContainer::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        return amalthea::IAnnotatable::eIsSet(_featureID);
    }
    case ::amalthea::AmaltheaPackage::EVENTCHAINCONTAINER__EVENTCHAIN:
    {
        return (bool) m_eventChain;
    }
    }
    throw std::runtime_error(
            "EventChainContainer::eIsSet Error. FeatureID:" + _featureID);
}

void EventChainContainer::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "EventChainContainer::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr EventChainContainer::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getEventChainContainer();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void EventChainContainer::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::EVENTCHAINCONTAINER__EVENTCHAIN:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void EventChainContainer::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::EVENTCHAINCONTAINER__EVENTCHAIN:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

