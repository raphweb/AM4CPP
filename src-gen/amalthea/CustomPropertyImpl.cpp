// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/CustomPropertyImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "CustomProperty.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/Value.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(CustomPropertyImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void CustomProperty::_initialize()
{
    // Supertypes

    // References
    if (m_value)
    {
        m_value->_initialize();
    }

    /*PROTECTED REGION ID(CustomPropertyImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject CustomProperty::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::CUSTOMPROPERTY__KEY:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::toAny(_any, m_key);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::CUSTOMPROPERTY__VALUE:
    {
        if (m_value)
            _any = ::ecore::as < ::ecore::EObject > (m_value);
        return _any;
    }
    }
    throw std::runtime_error(
            "CustomProperty::eGet Error. FeatureID:" + _featureID);
}

void CustomProperty::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::CUSTOMPROPERTY__KEY:
    {
        ::ecore::EString _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::fromAny(_newValue, _t0);
        ::amalthea::CustomProperty::setKey(_t0);
        return;
    }
    case ::amalthea::AmaltheaPackage::CUSTOMPROPERTY__VALUE:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::Value_ptr _t1 =
                dynamic_cast< ::amalthea::Value* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::Value >(_t0);*/
        ::amalthea::CustomProperty::setValue(_t1);
        return;
    }
    }
    throw std::runtime_error(
            "CustomProperty::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean CustomProperty::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::CUSTOMPROPERTY__KEY:
    {
        return ::ecorecpp::mapping::set_traits < ::ecore::EString
                > ::is_set(m_key);
    }
    case ::amalthea::AmaltheaPackage::CUSTOMPROPERTY__VALUE:
    {
        return (bool) m_value;
    }
    }
    throw std::runtime_error(
            "CustomProperty::eIsSet Error. FeatureID:" + _featureID);
}

void CustomProperty::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "CustomProperty::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr CustomProperty::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getCustomProperty();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void CustomProperty::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::CUSTOMPROPERTY__VALUE:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void CustomProperty::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::CUSTOMPROPERTY__VALUE:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

