// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/ModeValueImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "ModeValue.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/BaseObject.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/ModeLabel.hpp>
#include <amalthea/ModeLiteral.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(ModeValueImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void ModeValue::_initialize()
{
    // Supertypes
    ::amalthea::BaseObject::_initialize();

    // References

    /*PROTECTED REGION ID(ModeValueImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

::ecore::EBoolean ModeValue::validateInvariants(
        ::ecore::EDiagnosticChain _diagnostics,
        std::map< ::ecore::EJavaObject, ::ecore::EJavaObject > const &_context)
{
    /*PROTECTED REGION ID(ModeValueImpl_validateInvariants) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    throw "UnsupportedOperationException: amalthea::ModeValue::validateInvariants";
    /*PROTECTED REGION END*/
}

::amalthea::ModeLiteral_ptr ModeValue::getLiteral()
{
    /*PROTECTED REGION ID(ModeValueImpl_getLiteral) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    throw "UnsupportedOperationException: amalthea::ModeValue::getLiteral";
    /*PROTECTED REGION END*/
}

::ecore::EIntegerObject ModeValue::getInteger()
{
    /*PROTECTED REGION ID(ModeValueImpl_getInteger) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    throw "UnsupportedOperationException: amalthea::ModeValue::getInteger";
    /*PROTECTED REGION END*/
}

// EObject
::ecore::EJavaObject ModeValue::eGet(::ecore::EInt _featureID,
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
    {
        if (m_label)
            _any = ::ecore::as < ::ecore::EObject > (m_label);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::MODEVALUE__VALUE:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::toAny(_any, m_value);
        return _any;
    }
    }
    throw std::runtime_error("ModeValue::eGet Error. FeatureID:" + _featureID);
}

void ModeValue::eSet(::ecore::EInt _featureID,
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
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::ModeLabel_ptr _t1 =
                dynamic_cast< ::amalthea::ModeLabel* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::ModeLabel >(_t0);*/
        ::amalthea::ModeValue::setLabel(_t1);
        return;
    }
    case ::amalthea::AmaltheaPackage::MODEVALUE__VALUE:
    {
        ::ecore::EString _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::fromAny(_newValue, _t0);
        ::amalthea::ModeValue::setValue(_t0);
        return;
    }
    }
    throw std::runtime_error("ModeValue::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean ModeValue::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        return amalthea::IAnnotatable::eIsSet(_featureID);
    }
    case ::amalthea::AmaltheaPackage::MODEVALUE__LABEL:
    {
        return (bool) m_label;
    }
    case ::amalthea::AmaltheaPackage::MODEVALUE__VALUE:
    {
        return ::ecorecpp::mapping::set_traits < ::ecore::EString
                > ::is_set(m_value);
    }
    }
    throw std::runtime_error(
            "ModeValue::eIsSet Error. FeatureID:" + _featureID);
}

void ModeValue::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "ModeValue::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr ModeValue::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getModeValue();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void ModeValue::_inverseAdd(::ecore::EInt _featureID,
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
void ModeValue::_inverseRemove(::ecore::EInt _featureID,
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

