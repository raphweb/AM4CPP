// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/ModeConditionDisjunctionEntryImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "ModeConditionDisjunctionEntry.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/BaseObject.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/ModeValueMapEntry.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(ModeConditionDisjunctionEntryImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void ModeConditionDisjunctionEntry::_initialize()
{
    // Supertypes
    ::amalthea::BaseObject::_initialize();

    // References

    /*PROTECTED REGION ID(ModeConditionDisjunctionEntryImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

::ecore::EBoolean ModeConditionDisjunctionEntry::isSatisfiedBy(
        std::vector< ::amalthea::ModeValueMapEntry_ptr > _assignment)
{
    /*PROTECTED REGION ID(ModeConditionDisjunctionEntryImpl_isSatisfiedBy) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    throw "UnsupportedOperationException: amalthea::ModeConditionDisjunctionEntry::isSatisfiedBy";
    /*PROTECTED REGION END*/
}

// EObject
::ecore::EJavaObject ModeConditionDisjunctionEntry::eGet(
        ::ecore::EInt _featureID, ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        return amalthea::IAnnotatable::eGet(_featureID, _resolve);
    }
    }
    throw std::runtime_error(
            "ModeConditionDisjunctionEntry::eGet Error. FeatureID:"
                    + _featureID);
}

void ModeConditionDisjunctionEntry::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        amalthea::IAnnotatable::eSet(_featureID, _newValue);
        return;
    }
    }
    throw std::runtime_error(
            "ModeConditionDisjunctionEntry::eSet Error. FeatureID:"
                    + _featureID);
}

::ecore::EBoolean ModeConditionDisjunctionEntry::eIsSet(
        ::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        return amalthea::IAnnotatable::eIsSet(_featureID);
    }
    }
    throw std::runtime_error(
            "ModeConditionDisjunctionEntry::eIsSet Error. FeatureID:"
                    + _featureID);
}

void ModeConditionDisjunctionEntry::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "ModeConditionDisjunctionEntry::eUnset Error. FeatureID:"
                    + _featureID);
}

::ecore::EClass_ptr ModeConditionDisjunctionEntry::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getModeConditionDisjunctionEntry();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void ModeConditionDisjunctionEntry::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void ModeConditionDisjunctionEntry::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

