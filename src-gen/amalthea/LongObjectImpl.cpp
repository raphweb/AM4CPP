// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/LongObjectImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "LongObject.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/Value.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(LongObjectImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void LongObject::_initialize()
{
    // Supertypes
    ::amalthea::Value::_initialize();

    // References

    /*PROTECTED REGION ID(LongObjectImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject LongObject::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::LONGOBJECT__VALUE:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::ELong
                > ::toAny(_any, m_value);
        return _any;
    }
    }
    throw std::runtime_error("LongObject::eGet Error. FeatureID:" + _featureID);
}

void LongObject::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::LONGOBJECT__VALUE:
    {
        ::ecore::ELong _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::ELong
                > ::fromAny(_newValue, _t0);
        ::amalthea::LongObject::setValue(_t0);
        return;
    }
    }
    throw std::runtime_error("LongObject::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean LongObject::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::LONGOBJECT__VALUE:
    {
        return m_value != 0;
    }
    }
    throw std::runtime_error(
            "LongObject::eIsSet Error. FeatureID:" + _featureID);
}

void LongObject::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "LongObject::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr LongObject::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getLongObject();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void LongObject::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void LongObject::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

