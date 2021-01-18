// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/EarlyReleaseFairPD2Impl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "EarlyReleaseFairPD2.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/Pfair.hpp>
#include <amalthea/CustomProperty.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(EarlyReleaseFairPD2Impl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void EarlyReleaseFairPD2::_initialize()
{
    // Supertypes
    ::amalthea::Pfair::_initialize();

    // References

    /*PROTECTED REGION ID(EarlyReleaseFairPD2Impl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject EarlyReleaseFairPD2::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        return amalthea::IAnnotatable::eGet(_featureID, _resolve);
    }
    case ::amalthea::AmaltheaPackage::PFAIR__QUANTSIZENS:
    {
        return amalthea::Pfair::eGet(_featureID, _resolve);
    }
    }
    throw std::runtime_error(
            "EarlyReleaseFairPD2::eGet Error. FeatureID:" + _featureID);
}

void EarlyReleaseFairPD2::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        amalthea::IAnnotatable::eSet(_featureID, _newValue);
        return;
    }
    case ::amalthea::AmaltheaPackage::PFAIR__QUANTSIZENS:
    {
        amalthea::Pfair::eSet(_featureID, _newValue);
        return;
    }
    }
    throw std::runtime_error(
            "EarlyReleaseFairPD2::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean EarlyReleaseFairPD2::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        return amalthea::IAnnotatable::eIsSet(_featureID);
    }
    case ::amalthea::AmaltheaPackage::PFAIR__QUANTSIZENS:
    {
        return amalthea::Pfair::eIsSet(_featureID);
    }
    }
    throw std::runtime_error(
            "EarlyReleaseFairPD2::eIsSet Error. FeatureID:" + _featureID);
}

void EarlyReleaseFairPD2::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "EarlyReleaseFairPD2::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr EarlyReleaseFairPD2::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getEarlyReleaseFairPD2();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void EarlyReleaseFairPD2::_inverseAdd(::ecore::EInt _featureID,
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
void EarlyReleaseFairPD2::_inverseRemove(::ecore::EInt _featureID,
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

