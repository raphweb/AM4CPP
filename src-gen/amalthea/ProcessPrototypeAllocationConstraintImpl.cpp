// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/ProcessPrototypeAllocationConstraintImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "ProcessPrototypeAllocationConstraint.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/CoreAllocationConstraint.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/CoreClassification.hpp>
#include <amalthea/ProcessPrototype.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(ProcessPrototypeAllocationConstraintImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void ProcessPrototypeAllocationConstraint::_initialize()
{
    // Supertypes
    ::amalthea::CoreAllocationConstraint::_initialize();

    // References

    /*PROTECTED REGION ID(ProcessPrototypeAllocationConstraintImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject ProcessPrototypeAllocationConstraint::eGet(
        ::ecore::EInt _featureID, ::ecore::EBoolean _resolve)
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
        return amalthea::CoreAllocationConstraint::eGet(_featureID, _resolve);
    }
    case ::amalthea::AmaltheaPackage::PROCESSPROTOTYPEALLOCATIONCONSTRAINT__PROCESSPROTOTYPE:
    {
        if (m_processPrototype)
            _any = ::ecore::as < ::ecore::EObject > (m_processPrototype);
        return _any;
    }
    }
    throw std::runtime_error(
            "ProcessPrototypeAllocationConstraint::eGet Error. FeatureID:"
                    + _featureID);
}

void ProcessPrototypeAllocationConstraint::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
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
        amalthea::CoreAllocationConstraint::eSet(_featureID, _newValue);
        return;
    }
    case ::amalthea::AmaltheaPackage::PROCESSPROTOTYPEALLOCATIONCONSTRAINT__PROCESSPROTOTYPE:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::ProcessPrototype_ptr _t1 =
                dynamic_cast< ::amalthea::ProcessPrototype* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::ProcessPrototype >(_t0);*/
        ::amalthea::ProcessPrototypeAllocationConstraint::setProcessPrototype(
                _t1);
        return;
    }
    }
    throw std::runtime_error(
            "ProcessPrototypeAllocationConstraint::eSet Error. FeatureID:"
                    + _featureID);
}

::ecore::EBoolean ProcessPrototypeAllocationConstraint::eIsSet(
        ::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        return amalthea::IAnnotatable::eIsSet(_featureID);
    }
    case ::amalthea::AmaltheaPackage::COREALLOCATIONCONSTRAINT__CORECLASSIFICATION:
    {
        return amalthea::CoreAllocationConstraint::eIsSet(_featureID);
    }
    case ::amalthea::AmaltheaPackage::PROCESSPROTOTYPEALLOCATIONCONSTRAINT__PROCESSPROTOTYPE:
    {
        return (bool) m_processPrototype;
    }
    }
    throw std::runtime_error(
            "ProcessPrototypeAllocationConstraint::eIsSet Error. FeatureID:"
                    + _featureID);
}

void ProcessPrototypeAllocationConstraint::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "ProcessPrototypeAllocationConstraint::eUnset Error. FeatureID:"
                    + _featureID);
}

::ecore::EClass_ptr ProcessPrototypeAllocationConstraint::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getProcessPrototypeAllocationConstraint();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void ProcessPrototypeAllocationConstraint::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
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
    case ::amalthea::AmaltheaPackage::PROCESSPROTOTYPEALLOCATIONCONSTRAINT__PROCESSPROTOTYPE:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void ProcessPrototypeAllocationConstraint::_inverseRemove(
        ::ecore::EInt _featureID, ::ecore::EJavaObject const &_oldValue)
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
    case ::amalthea::AmaltheaPackage::PROCESSPROTOTYPEALLOCATIONCONSTRAINT__PROCESSPROTOTYPE:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

