// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/ChainedProcessPrototypeImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "ChainedProcessPrototype.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/BaseObject.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/ProcessPrototype.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(ChainedProcessPrototypeImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void ChainedProcessPrototype::_initialize()
{
    // Supertypes
    ::amalthea::BaseObject::_initialize();

    // References

    /*PROTECTED REGION ID(ChainedProcessPrototypeImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject ChainedProcessPrototype::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        return amalthea::IAnnotatable::eGet(_featureID, _resolve);
    }
    case ::amalthea::AmaltheaPackage::CHAINEDPROCESSPROTOTYPE__PROTOTYPE:
    {
        if (m_prototype)
            _any = ::ecore::as < ::ecore::EObject > (m_prototype);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::CHAINEDPROCESSPROTOTYPE__APPLY:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EInt
                > ::toAny(_any, m_apply);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::CHAINEDPROCESSPROTOTYPE__OFFSET:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EInt
                > ::toAny(_any, m_offset);
        return _any;
    }
    }
    throw std::runtime_error(
            "ChainedProcessPrototype::eGet Error. FeatureID:" + _featureID);
}

void ChainedProcessPrototype::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        amalthea::IAnnotatable::eSet(_featureID, _newValue);
        return;
    }
    case ::amalthea::AmaltheaPackage::CHAINEDPROCESSPROTOTYPE__PROTOTYPE:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::ProcessPrototype_ptr _t1 =
                dynamic_cast< ::amalthea::ProcessPrototype* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::ProcessPrototype >(_t0);*/
        ::amalthea::ChainedProcessPrototype::setPrototype(_t1);
        return;
    }
    case ::amalthea::AmaltheaPackage::CHAINEDPROCESSPROTOTYPE__APPLY:
    {
        ::ecore::EInt _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EInt
                > ::fromAny(_newValue, _t0);
        ::amalthea::ChainedProcessPrototype::setApply(_t0);
        return;
    }
    case ::amalthea::AmaltheaPackage::CHAINEDPROCESSPROTOTYPE__OFFSET:
    {
        ::ecore::EInt _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EInt
                > ::fromAny(_newValue, _t0);
        ::amalthea::ChainedProcessPrototype::setOffset(_t0);
        return;
    }
    }
    throw std::runtime_error(
            "ChainedProcessPrototype::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean ChainedProcessPrototype::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        return amalthea::IAnnotatable::eIsSet(_featureID);
    }
    case ::amalthea::AmaltheaPackage::CHAINEDPROCESSPROTOTYPE__PROTOTYPE:
    {
        return (bool) m_prototype;
    }
    case ::amalthea::AmaltheaPackage::CHAINEDPROCESSPROTOTYPE__APPLY:
    {
        return m_apply != 0;
    }
    case ::amalthea::AmaltheaPackage::CHAINEDPROCESSPROTOTYPE__OFFSET:
    {
        return m_offset != 0;
    }
    }
    throw std::runtime_error(
            "ChainedProcessPrototype::eIsSet Error. FeatureID:" + _featureID);
}

void ChainedProcessPrototype::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "ChainedProcessPrototype::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr ChainedProcessPrototype::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getChainedProcessPrototype();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void ChainedProcessPrototype::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::CHAINEDPROCESSPROTOTYPE__PROTOTYPE:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void ChainedProcessPrototype::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::CHAINEDPROCESSPROTOTYPE__PROTOTYPE:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

