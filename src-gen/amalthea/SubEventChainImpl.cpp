// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/SubEventChainImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "SubEventChain.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/AbstractEventChain.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Event.hpp>
#include <amalthea/EventChainItem.hpp>
#include <amalthea/INamed.hpp>
#include <amalthea/Namespace.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(SubEventChainImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void SubEventChain::_initialize()
{
    // Supertypes
    ::amalthea::AbstractEventChain::_initialize();

    // References

    /*PROTECTED REGION ID(SubEventChainImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject SubEventChain::eGet(::ecore::EInt _featureID,
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
    case ::amalthea::AmaltheaPackage::ABSTRACTEVENTCHAIN__STIMULUS:
    case ::amalthea::AmaltheaPackage::ABSTRACTEVENTCHAIN__RESPONSE:
    case ::amalthea::AmaltheaPackage::ABSTRACTEVENTCHAIN__ITEMS:
    case ::amalthea::AmaltheaPackage::ABSTRACTEVENTCHAIN__ITEMTYPE:
    case ::amalthea::AmaltheaPackage::ABSTRACTEVENTCHAIN__MINITEMSCOMPLETED:
    {
        return amalthea::AbstractEventChain::eGet(_featureID, _resolve);
    }
    }
    throw std::runtime_error(
            "SubEventChain::eGet Error. FeatureID:" + _featureID);
}

void SubEventChain::eSet(::ecore::EInt _featureID,
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
    case ::amalthea::AmaltheaPackage::ABSTRACTEVENTCHAIN__STIMULUS:
    case ::amalthea::AmaltheaPackage::ABSTRACTEVENTCHAIN__RESPONSE:
    case ::amalthea::AmaltheaPackage::ABSTRACTEVENTCHAIN__ITEMS:
    case ::amalthea::AmaltheaPackage::ABSTRACTEVENTCHAIN__ITEMTYPE:
    case ::amalthea::AmaltheaPackage::ABSTRACTEVENTCHAIN__MINITEMSCOMPLETED:
    {
        amalthea::AbstractEventChain::eSet(_featureID, _newValue);
        return;
    }
    }
    throw std::runtime_error(
            "SubEventChain::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean SubEventChain::eIsSet(::ecore::EInt _featureID)
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
    case ::amalthea::AmaltheaPackage::ABSTRACTEVENTCHAIN__STIMULUS:
    case ::amalthea::AmaltheaPackage::ABSTRACTEVENTCHAIN__RESPONSE:
    case ::amalthea::AmaltheaPackage::ABSTRACTEVENTCHAIN__ITEMS:
    case ::amalthea::AmaltheaPackage::ABSTRACTEVENTCHAIN__ITEMTYPE:
    case ::amalthea::AmaltheaPackage::ABSTRACTEVENTCHAIN__MINITEMSCOMPLETED:
    {
        return amalthea::AbstractEventChain::eIsSet(_featureID);
    }
    }
    throw std::runtime_error(
            "SubEventChain::eIsSet Error. FeatureID:" + _featureID);
}

void SubEventChain::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "SubEventChain::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr SubEventChain::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getSubEventChain();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void SubEventChain::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::ABSTRACTEVENTCHAIN__STIMULUS:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::ABSTRACTEVENTCHAIN__RESPONSE:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::ABSTRACTEVENTCHAIN__ITEMS:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void SubEventChain::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::ABSTRACTEVENTCHAIN__STIMULUS:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::ABSTRACTEVENTCHAIN__RESPONSE:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::ABSTRACTEVENTCHAIN__ITEMS:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

