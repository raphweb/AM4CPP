// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/ReferenceObjectImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "ReferenceObject.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/Value.hpp>
#include <amalthea/IReferable.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(ReferenceObjectImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void ReferenceObject::_initialize()
{
    // Supertypes
    ::amalthea::Value::_initialize();

    // References

    /*PROTECTED REGION ID(ReferenceObjectImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject ReferenceObject::eGet(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::REFERENCEOBJECT__VALUE:
    {
        if (m_value)
            _any = ::ecore::as < ::ecore::EObject > (m_value);
        return _any;
    }
    }
    throw std::runtime_error(
            "ReferenceObject::eGet Error. FeatureID:" + _featureID);
}

void ReferenceObject::eSet(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::REFERENCEOBJECT__VALUE:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::IReferable_ptr _t1 =
                dynamic_cast< ::amalthea::IReferable* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::IReferable >(_t0);*/
        ::amalthea::ReferenceObject::setValue(_t1);
        return;
    }
    }
    throw std::runtime_error(
            "ReferenceObject::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean ReferenceObject::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::REFERENCEOBJECT__VALUE:
    {
        return (bool) m_value;
    }
    }
    throw std::runtime_error(
            "ReferenceObject::eIsSet Error. FeatureID:" + _featureID);
}

void ReferenceObject::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "ReferenceObject::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr ReferenceObject::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getReferenceObject();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void ReferenceObject::_inverseAdd(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::REFERENCEOBJECT__VALUE:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void ReferenceObject::_inverseRemove(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::REFERENCEOBJECT__VALUE:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

