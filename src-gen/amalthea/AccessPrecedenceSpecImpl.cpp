// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/AccessPrecedenceSpecImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "AccessPrecedenceSpec.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/GeneralPrecedence.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Runnable.hpp>
#include <amalthea/Label.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(AccessPrecedenceSpecImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void AccessPrecedenceSpec::_initialize()
{
    // Supertypes
    ::amalthea::GeneralPrecedence::_initialize();

    // References

    /*PROTECTED REGION ID(AccessPrecedenceSpecImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject AccessPrecedenceSpec::eGet(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        return amalthea::IAnnotatable::eGet(_featureID, _resolve);
    }
    case ::amalthea::AmaltheaPackage::GENERALPRECEDENCE__ORIGIN:
    case ::amalthea::AmaltheaPackage::GENERALPRECEDENCE__TARGET:
    {
        return amalthea::GeneralPrecedence::eGet(_featureID, _resolve);
    }
    case ::amalthea::AmaltheaPackage::ACCESSPRECEDENCESPEC__LABEL:
    {
        if (m_label)
            _any = ::ecore::as < ::ecore::EObject > (m_label);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::ACCESSPRECEDENCESPEC__ORDERTYPE:
    {
        ::ecorecpp::mapping::any_traits < ::amalthea::AccessPrecedenceType
                > ::toAny(_any, m_orderType);
        return _any;
    }
    }
    throw std::runtime_error(
            "AccessPrecedenceSpec::eGet Error. FeatureID:" + _featureID);
}

void AccessPrecedenceSpec::eSet(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        amalthea::IAnnotatable::eSet(_featureID, _newValue);
        return;
    }
    case ::amalthea::AmaltheaPackage::GENERALPRECEDENCE__ORIGIN:
    case ::amalthea::AmaltheaPackage::GENERALPRECEDENCE__TARGET:
    {
        amalthea::GeneralPrecedence::eSet(_featureID, _newValue);
        return;
    }
    case ::amalthea::AmaltheaPackage::ACCESSPRECEDENCESPEC__LABEL:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::Label_ptr _t1 =
                dynamic_cast< ::amalthea::Label* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::Label >(_t0);*/
        ::amalthea::AccessPrecedenceSpec::setLabel(_t1);
        return;
    }
    case ::amalthea::AmaltheaPackage::ACCESSPRECEDENCESPEC__ORDERTYPE:
    {
        ::amalthea::AccessPrecedenceType _t0;
        ::ecorecpp::mapping::any_traits < ::amalthea::AccessPrecedenceType
                > ::fromAny(_newValue, _t0);
        ::amalthea::AccessPrecedenceSpec::setOrderType(_t0);
        return;
    }
    }
    throw std::runtime_error(
            "AccessPrecedenceSpec::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean AccessPrecedenceSpec::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        return amalthea::IAnnotatable::eIsSet(_featureID);
    }
    case ::amalthea::AmaltheaPackage::GENERALPRECEDENCE__ORIGIN:
    case ::amalthea::AmaltheaPackage::GENERALPRECEDENCE__TARGET:
    {
        return amalthea::GeneralPrecedence::eIsSet(_featureID);
    }
    case ::amalthea::AmaltheaPackage::ACCESSPRECEDENCESPEC__LABEL:
    {
        return (bool) m_label;
    }
    case ::amalthea::AmaltheaPackage::ACCESSPRECEDENCESPEC__ORDERTYPE:
    {
        return ::ecorecpp::mapping::set_traits
                < ::amalthea::AccessPrecedenceType > ::is_set(m_orderType);
    }
    }
    throw std::runtime_error(
            "AccessPrecedenceSpec::eIsSet Error. FeatureID:" + _featureID);
}

void AccessPrecedenceSpec::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "AccessPrecedenceSpec::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr AccessPrecedenceSpec::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getAccessPrecedenceSpec();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void AccessPrecedenceSpec::_inverseAdd(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::GENERALPRECEDENCE__ORIGIN:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::GENERALPRECEDENCE__TARGET:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::ACCESSPRECEDENCESPEC__LABEL:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void AccessPrecedenceSpec::_inverseRemove(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::GENERALPRECEDENCE__ORIGIN:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::GENERALPRECEDENCE__TARGET:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::ACCESSPRECEDENCESPEC__LABEL:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

