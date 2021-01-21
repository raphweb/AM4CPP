// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/GeneralPrecedenceImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "GeneralPrecedence.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/BaseObject.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Runnable.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(GeneralPrecedenceImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void GeneralPrecedence::_initialize()
{
    // Supertypes
    ::amalthea::BaseObject::_initialize();

    // References

    /*PROTECTED REGION ID(GeneralPrecedenceImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject GeneralPrecedence::eGet(::ecore::EInt _featureID,
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
    {
        if (m_origin)
            _any = ::ecore::as < ::ecore::EObject > (m_origin);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::GENERALPRECEDENCE__TARGET:
    {
        if (m_target)
            _any = ::ecore::as < ::ecore::EObject > (m_target);
        return _any;
    }
    }
    throw std::runtime_error(
            "GeneralPrecedence::eGet Error. FeatureID:" + _featureID);
}

void GeneralPrecedence::eSet(::ecore::EInt _featureID,
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
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::Runnable_ptr _t1 =
                dynamic_cast< ::amalthea::Runnable* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::Runnable >(_t0);*/
        ::amalthea::GeneralPrecedence::setOrigin(_t1);
        return;
    }
    case ::amalthea::AmaltheaPackage::GENERALPRECEDENCE__TARGET:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::Runnable_ptr _t1 =
                dynamic_cast< ::amalthea::Runnable* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::Runnable >(_t0);*/
        ::amalthea::GeneralPrecedence::setTarget(_t1);
        return;
    }
    }
    throw std::runtime_error(
            "GeneralPrecedence::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean GeneralPrecedence::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        return amalthea::IAnnotatable::eIsSet(_featureID);
    }
    case ::amalthea::AmaltheaPackage::GENERALPRECEDENCE__ORIGIN:
    {
        return (bool) m_origin;
    }
    case ::amalthea::AmaltheaPackage::GENERALPRECEDENCE__TARGET:
    {
        return (bool) m_target;
    }
    }
    throw std::runtime_error(
            "GeneralPrecedence::eIsSet Error. FeatureID:" + _featureID);
}

void GeneralPrecedence::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "GeneralPrecedence::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr GeneralPrecedence::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getGeneralPrecedence();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void GeneralPrecedence::_inverseAdd(::ecore::EInt _featureID,
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

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void GeneralPrecedence::_inverseRemove(::ecore::EInt _featureID,
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

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

