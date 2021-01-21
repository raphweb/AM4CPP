// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/ModeAssignmentImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "ModeAssignment.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/ModeValue.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/ModeLabel.hpp>
#include <amalthea/ModeLiteral.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(ModeAssignmentImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void ModeAssignment::_initialize()
{
    // Supertypes
    ::amalthea::ModeValue::_initialize();

    // References

    /*PROTECTED REGION ID(ModeAssignmentImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject ModeAssignment::eGet(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        return amalthea::IAnnotatable::eGet(_featureID, _resolve);
    }
    case ::amalthea::AmaltheaPackage::MODEVALUE__LABEL:
    case ::amalthea::AmaltheaPackage::MODEVALUE__VALUE:
    {
        return amalthea::ModeValue::eGet(_featureID, _resolve);
    }
    }
    throw std::runtime_error(
            "ModeAssignment::eGet Error. FeatureID:" + _featureID);
}

void ModeAssignment::eSet(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        amalthea::IAnnotatable::eSet(_featureID, _newValue);
        return;
    }
    case ::amalthea::AmaltheaPackage::MODEVALUE__LABEL:
    case ::amalthea::AmaltheaPackage::MODEVALUE__VALUE:
    {
        amalthea::ModeValue::eSet(_featureID, _newValue);
        return;
    }
    }
    throw std::runtime_error(
            "ModeAssignment::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean ModeAssignment::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        return amalthea::IAnnotatable::eIsSet(_featureID);
    }
    case ::amalthea::AmaltheaPackage::MODEVALUE__LABEL:
    case ::amalthea::AmaltheaPackage::MODEVALUE__VALUE:
    {
        return amalthea::ModeValue::eIsSet(_featureID);
    }
    }
    throw std::runtime_error(
            "ModeAssignment::eIsSet Error. FeatureID:" + _featureID);
}

void ModeAssignment::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "ModeAssignment::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr ModeAssignment::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getModeAssignment();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void ModeAssignment::_inverseAdd(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::MODEVALUE__LABEL:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void ModeAssignment::_inverseRemove(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::MODEVALUE__LABEL:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

