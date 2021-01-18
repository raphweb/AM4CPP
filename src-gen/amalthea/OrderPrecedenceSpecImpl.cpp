// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/OrderPrecedenceSpecImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "OrderPrecedenceSpec.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/GeneralPrecedence.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Runnable.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(OrderPrecedenceSpecImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void OrderPrecedenceSpec::_initialize()
{
    // Supertypes
    ::amalthea::GeneralPrecedence::_initialize();

    // References

    /*PROTECTED REGION ID(OrderPrecedenceSpecImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject OrderPrecedenceSpec::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
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
    case ::amalthea::AmaltheaPackage::ORDERPRECEDENCESPEC__ORDERTYPE:
    {
        ::ecorecpp::mapping::any_traits < ::amalthea::OrderType
                > ::toAny(_any, m_orderType);
        return _any;
    }
    }
    throw std::runtime_error(
            "OrderPrecedenceSpec::eGet Error. FeatureID:" + _featureID);
}

void OrderPrecedenceSpec::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
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
    case ::amalthea::AmaltheaPackage::ORDERPRECEDENCESPEC__ORDERTYPE:
    {
        ::amalthea::OrderType _t0;
        ::ecorecpp::mapping::any_traits < ::amalthea::OrderType
                > ::fromAny(_newValue, _t0);
        ::amalthea::OrderPrecedenceSpec::setOrderType(_t0);
        return;
    }
    }
    throw std::runtime_error(
            "OrderPrecedenceSpec::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean OrderPrecedenceSpec::eIsSet(::ecore::EInt _featureID)
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
    case ::amalthea::AmaltheaPackage::ORDERPRECEDENCESPEC__ORDERTYPE:
    {
        return ::ecorecpp::mapping::set_traits < ::amalthea::OrderType
                > ::is_set(m_orderType);
    }
    }
    throw std::runtime_error(
            "OrderPrecedenceSpec::eIsSet Error. FeatureID:" + _featureID);
}

void OrderPrecedenceSpec::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "OrderPrecedenceSpec::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr OrderPrecedenceSpec::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getOrderPrecedenceSpec();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void OrderPrecedenceSpec::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
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

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void OrderPrecedenceSpec::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_oldValue)
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

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

