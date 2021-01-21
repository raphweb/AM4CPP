// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/RunnableAllocationConstraintImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "RunnableAllocationConstraint.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/CoreAllocationConstraint.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/CoreClassification.hpp>
#include <amalthea/Runnable.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(RunnableAllocationConstraintImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void RunnableAllocationConstraint::_initialize()
{
    // Supertypes
    ::amalthea::CoreAllocationConstraint::_initialize();

    // References

    /*PROTECTED REGION ID(RunnableAllocationConstraintImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject RunnableAllocationConstraint::eGet(
        ::ecore::EInt _featureID, [[maybe_unused]] ::ecore::EBoolean _resolve)
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
    case ::amalthea::AmaltheaPackage::RUNNABLEALLOCATIONCONSTRAINT__RUNNABLE:
    {
        if (m_runnable)
            _any = ::ecore::as < ::ecore::EObject > (m_runnable);
        return _any;
    }
    }
    throw std::runtime_error(
            "RunnableAllocationConstraint::eGet Error. FeatureID:"
                    + _featureID);
}

void RunnableAllocationConstraint::eSet(::ecore::EInt _featureID,
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
        amalthea::CoreAllocationConstraint::eSet(_featureID, _newValue);
        return;
    }
    case ::amalthea::AmaltheaPackage::RUNNABLEALLOCATIONCONSTRAINT__RUNNABLE:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::Runnable_ptr _t1 =
                dynamic_cast< ::amalthea::Runnable* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::Runnable >(_t0);*/
        ::amalthea::RunnableAllocationConstraint::setRunnable(_t1);
        return;
    }
    }
    throw std::runtime_error(
            "RunnableAllocationConstraint::eSet Error. FeatureID:"
                    + _featureID);
}

::ecore::EBoolean RunnableAllocationConstraint::eIsSet(::ecore::EInt _featureID)
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
    case ::amalthea::AmaltheaPackage::RUNNABLEALLOCATIONCONSTRAINT__RUNNABLE:
    {
        return (bool) m_runnable;
    }
    }
    throw std::runtime_error(
            "RunnableAllocationConstraint::eIsSet Error. FeatureID:"
                    + _featureID);
}

void RunnableAllocationConstraint::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "RunnableAllocationConstraint::eUnset Error. FeatureID:"
                    + _featureID);
}

::ecore::EClass_ptr RunnableAllocationConstraint::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getRunnableAllocationConstraint();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void RunnableAllocationConstraint::_inverseAdd(::ecore::EInt _featureID,
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
    case ::amalthea::AmaltheaPackage::RUNNABLEALLOCATIONCONSTRAINT__RUNNABLE:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void RunnableAllocationConstraint::_inverseRemove(::ecore::EInt _featureID,
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
    case ::amalthea::AmaltheaPackage::RUNNABLEALLOCATIONCONSTRAINT__RUNNABLE:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

