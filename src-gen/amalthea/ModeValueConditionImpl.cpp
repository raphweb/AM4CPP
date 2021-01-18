// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/ModeValueConditionImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "ModeValueCondition.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/ModeValue.hpp>
#include <amalthea/ModeCondition.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/ModeLabel.hpp>
#include <amalthea/ModeLiteral.hpp>
#include <amalthea/ModeValueMapEntry.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(ModeValueConditionImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void ModeValueCondition::_initialize()
{
    // Supertypes
    ::amalthea::ModeValue::_initialize();
    ::amalthea::ModeCondition::_initialize();

    // References

    /*PROTECTED REGION ID(ModeValueConditionImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

::ecore::EBoolean ModeValueCondition::isSatisfiedBy(
        std::vector< ::amalthea::ModeValueMapEntry_ptr > _context)
{
    /*PROTECTED REGION ID(ModeValueConditionImpl_isSatisfiedBy) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    throw "UnsupportedOperationException: amalthea::ModeValueCondition::isSatisfiedBy";
    /*PROTECTED REGION END*/
}

// EObject
::ecore::EJavaObject ModeValueCondition::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
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
    case ::amalthea::AmaltheaPackage::MODECONDITION__RELATION:
    {
        return amalthea::ModeCondition::eGet(_featureID, _resolve);
    }
    }
    throw std::runtime_error(
            "ModeValueCondition::eGet Error. FeatureID:" + _featureID);
}

void ModeValueCondition::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
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
    case ::amalthea::AmaltheaPackage::MODECONDITION__RELATION:
    {
        amalthea::ModeCondition::eSet(_featureID, _newValue);
        return;
    }
    }
    throw std::runtime_error(
            "ModeValueCondition::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean ModeValueCondition::eIsSet(::ecore::EInt _featureID)
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
    case ::amalthea::AmaltheaPackage::MODECONDITION__RELATION:
    {
        return amalthea::ModeCondition::eIsSet(_featureID);
    }
    }
    throw std::runtime_error(
            "ModeValueCondition::eIsSet Error. FeatureID:" + _featureID);
}

void ModeValueCondition::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "ModeValueCondition::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr ModeValueCondition::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getModeValueCondition();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void ModeValueCondition::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
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
void ModeValueCondition::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_oldValue)
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

