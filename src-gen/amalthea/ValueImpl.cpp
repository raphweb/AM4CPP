// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/ValueImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "Value.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(ValueImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void Value::_initialize()
{
    // Supertypes

    // References

    /*PROTECTED REGION ID(ValueImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject Value::eGet(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    }
    throw std::runtime_error("Value::eGet Error. FeatureID:" + _featureID);
}

void Value::eSet(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    }
    throw std::runtime_error("Value::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean Value::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    }
    throw std::runtime_error("Value::eIsSet Error. FeatureID:" + _featureID);
}

void Value::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error("Value::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr Value::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getValue();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void Value::_inverseAdd(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void Value::_inverseRemove(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

