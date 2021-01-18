// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/ModeSwitchDefaultImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "ModeSwitchDefault.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/BaseObject.hpp>
#include <amalthea/IActivityGraphItemContainer.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/ActivityGraphItem.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(ModeSwitchDefaultImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void ModeSwitchDefault::_initialize()
{
    // Supertypes
    ::amalthea::BaseObject::_initialize();
    ::amalthea::IActivityGraphItemContainer::_initialize();

    // References

    /*PROTECTED REGION ID(ModeSwitchDefaultImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject ModeSwitchDefault::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        return amalthea::IAnnotatable::eGet(_featureID, _resolve);
    }
    case ::amalthea::AmaltheaPackage::IACTIVITYGRAPHITEMCONTAINER__ITEMS:
    {
        return amalthea::IActivityGraphItemContainer::eGet(_featureID, _resolve);
    }
    }
    throw std::runtime_error(
            "ModeSwitchDefault::eGet Error. FeatureID:" + _featureID);
}

void ModeSwitchDefault::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        amalthea::IAnnotatable::eSet(_featureID, _newValue);
        return;
    }
    case ::amalthea::AmaltheaPackage::IACTIVITYGRAPHITEMCONTAINER__ITEMS:
    {
        amalthea::IActivityGraphItemContainer::eSet(_featureID, _newValue);
        return;
    }
    }
    throw std::runtime_error(
            "ModeSwitchDefault::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean ModeSwitchDefault::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        return amalthea::IAnnotatable::eIsSet(_featureID);
    }
    case ::amalthea::AmaltheaPackage::IACTIVITYGRAPHITEMCONTAINER__ITEMS:
    {
        return amalthea::IActivityGraphItemContainer::eIsSet(_featureID);
    }
    }
    throw std::runtime_error(
            "ModeSwitchDefault::eIsSet Error. FeatureID:" + _featureID);
}

void ModeSwitchDefault::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "ModeSwitchDefault::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr ModeSwitchDefault::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getModeSwitchDefault();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void ModeSwitchDefault::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::IACTIVITYGRAPHITEMCONTAINER__ITEMS:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void ModeSwitchDefault::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::IACTIVITYGRAPHITEMCONTAINER__ITEMS:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

