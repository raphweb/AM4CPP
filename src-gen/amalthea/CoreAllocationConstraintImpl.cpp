// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/CoreAllocationConstraintImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "CoreAllocationConstraint.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/BaseObject.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/CoreClassification.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(CoreAllocationConstraintImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void CoreAllocationConstraint::_initialize()
{
    // Supertypes
    ::amalthea::BaseObject::_initialize();

    // References
    if (m_coreClassification)
    {
        m_coreClassification->_initialize();
    }

    /*PROTECTED REGION ID(CoreAllocationConstraintImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject CoreAllocationConstraint::eGet(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        return amalthea::IAnnotatable::eGet(_featureID, _resolve);
    }
    case ::amalthea::AmaltheaPackage::COREALLOCATIONCONSTRAINT__CORECLASSIFICATION:
    {
        if (m_coreClassification)
            _any = ::ecore::as < ::ecore::EObject > (m_coreClassification);
        return _any;
    }
    }
    throw std::runtime_error(
            "CoreAllocationConstraint::eGet Error. FeatureID:" + _featureID);
}

void CoreAllocationConstraint::eSet(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        amalthea::IAnnotatable::eSet(_featureID, _newValue);
        return;
    }
    case ::amalthea::AmaltheaPackage::COREALLOCATIONCONSTRAINT__CORECLASSIFICATION:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::CoreClassification_ptr _t1 =
                dynamic_cast< ::amalthea::CoreClassification* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::CoreClassification >(_t0);*/
        ::amalthea::CoreAllocationConstraint::setCoreClassification(_t1);
        return;
    }
    }
    throw std::runtime_error(
            "CoreAllocationConstraint::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean CoreAllocationConstraint::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        return amalthea::IAnnotatable::eIsSet(_featureID);
    }
    case ::amalthea::AmaltheaPackage::COREALLOCATIONCONSTRAINT__CORECLASSIFICATION:
    {
        return (bool) m_coreClassification;
    }
    }
    throw std::runtime_error(
            "CoreAllocationConstraint::eIsSet Error. FeatureID:" + _featureID);
}

void CoreAllocationConstraint::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "CoreAllocationConstraint::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr CoreAllocationConstraint::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getCoreAllocationConstraint();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void CoreAllocationConstraint::_inverseAdd(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::COREALLOCATIONCONSTRAINT__CORECLASSIFICATION:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void CoreAllocationConstraint::_inverseRemove(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::COREALLOCATIONCONSTRAINT__CORECLASSIFICATION:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

