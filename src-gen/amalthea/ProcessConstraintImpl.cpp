// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/ProcessConstraintImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "ProcessConstraint.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/ProcessConstraintTarget.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(ProcessConstraintImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void ProcessConstraint::_initialize()
{
    // Supertypes

    // References
    if (m_target)
    {
        m_target->_initialize();
    }

    /*PROTECTED REGION ID(ProcessConstraintImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject ProcessConstraint::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::PROCESSCONSTRAINT__TARGET:
    {
        if (m_target)
            _any = ::ecore::as < ::ecore::EObject > (m_target);
        return _any;
    }
    }
    throw std::runtime_error(
            "ProcessConstraint::eGet Error. FeatureID:" + _featureID);
}

void ProcessConstraint::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::PROCESSCONSTRAINT__TARGET:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::ProcessConstraintTarget_ptr _t1 =
                dynamic_cast< ::amalthea::ProcessConstraintTarget* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::ProcessConstraintTarget >(_t0);*/
        ::amalthea::ProcessConstraint::setTarget(_t1);
        return;
    }
    }
    throw std::runtime_error(
            "ProcessConstraint::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean ProcessConstraint::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::PROCESSCONSTRAINT__TARGET:
    {
        return (bool) m_target;
    }
    }
    throw std::runtime_error(
            "ProcessConstraint::eIsSet Error. FeatureID:" + _featureID);
}

void ProcessConstraint::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "ProcessConstraint::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr ProcessConstraint::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getProcessConstraint();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void ProcessConstraint::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::PROCESSCONSTRAINT__TARGET:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void ProcessConstraint::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::PROCESSCONSTRAINT__TARGET:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

