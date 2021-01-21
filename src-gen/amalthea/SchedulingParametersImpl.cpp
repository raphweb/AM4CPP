// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/SchedulingParametersImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "SchedulingParameters.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/Time.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(SchedulingParametersImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void SchedulingParameters::_initialize()
{
    // Supertypes

    // References
    if (m_minBudget)
    {
        m_minBudget->_initialize();
    }
    if (m_maxBudget)
    {
        m_maxBudget->_initialize();
    }
    if (m_replenishment)
    {
        m_replenishment->_initialize();
    }

    /*PROTECTED REGION ID(SchedulingParametersImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject SchedulingParameters::eGet(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::SCHEDULINGPARAMETERS__PRIORITY:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EIntegerObject
                > ::toAny(_any, m_priority);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::SCHEDULINGPARAMETERS__MINBUDGET:
    {
        if (m_minBudget)
            _any = ::ecore::as < ::ecore::EObject > (m_minBudget);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::SCHEDULINGPARAMETERS__MAXBUDGET:
    {
        if (m_maxBudget)
            _any = ::ecore::as < ::ecore::EObject > (m_maxBudget);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::SCHEDULINGPARAMETERS__REPLENISHMENT:
    {
        if (m_replenishment)
            _any = ::ecore::as < ::ecore::EObject > (m_replenishment);
        return _any;
    }
    }
    throw std::runtime_error(
            "SchedulingParameters::eGet Error. FeatureID:" + _featureID);
}

void SchedulingParameters::eSet(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::SCHEDULINGPARAMETERS__PRIORITY:
    {
        ::ecore::EIntegerObject _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EIntegerObject
                > ::fromAny(_newValue, _t0);
        ::amalthea::SchedulingParameters::setPriority(_t0);
        return;
    }
    case ::amalthea::AmaltheaPackage::SCHEDULINGPARAMETERS__MINBUDGET:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::Time_ptr _t1 = dynamic_cast< ::amalthea::Time* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::Time >(_t0);*/
        ::amalthea::SchedulingParameters::setMinBudget(_t1);
        return;
    }
    case ::amalthea::AmaltheaPackage::SCHEDULINGPARAMETERS__MAXBUDGET:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::Time_ptr _t1 = dynamic_cast< ::amalthea::Time* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::Time >(_t0);*/
        ::amalthea::SchedulingParameters::setMaxBudget(_t1);
        return;
    }
    case ::amalthea::AmaltheaPackage::SCHEDULINGPARAMETERS__REPLENISHMENT:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::Time_ptr _t1 = dynamic_cast< ::amalthea::Time* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::Time >(_t0);*/
        ::amalthea::SchedulingParameters::setReplenishment(_t1);
        return;
    }
    }
    throw std::runtime_error(
            "SchedulingParameters::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean SchedulingParameters::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::SCHEDULINGPARAMETERS__PRIORITY:
    {
        return ::ecorecpp::mapping::set_traits < ::ecore::EIntegerObject
                > ::is_set(m_priority);
    }
    case ::amalthea::AmaltheaPackage::SCHEDULINGPARAMETERS__MINBUDGET:
    {
        return (bool) m_minBudget;
    }
    case ::amalthea::AmaltheaPackage::SCHEDULINGPARAMETERS__MAXBUDGET:
    {
        return (bool) m_maxBudget;
    }
    case ::amalthea::AmaltheaPackage::SCHEDULINGPARAMETERS__REPLENISHMENT:
    {
        return (bool) m_replenishment;
    }
    }
    throw std::runtime_error(
            "SchedulingParameters::eIsSet Error. FeatureID:" + _featureID);
}

void SchedulingParameters::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "SchedulingParameters::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr SchedulingParameters::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getSchedulingParameters();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void SchedulingParameters::_inverseAdd(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::SCHEDULINGPARAMETERS__MINBUDGET:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::SCHEDULINGPARAMETERS__MAXBUDGET:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::SCHEDULINGPARAMETERS__REPLENISHMENT:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void SchedulingParameters::_inverseRemove(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::SCHEDULINGPARAMETERS__MINBUDGET:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::SCHEDULINGPARAMETERS__MAXBUDGET:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::SCHEDULINGPARAMETERS__REPLENISHMENT:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

