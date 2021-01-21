// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/TimeRequirementLimitImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "TimeRequirementLimit.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/RequirementLimit.hpp>
#include <amalthea/Time.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(TimeRequirementLimitImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void TimeRequirementLimit::_initialize()
{
    // Supertypes
    ::amalthea::RequirementLimit::_initialize();

    // References
    if (m_limitValue)
    {
        m_limitValue->_initialize();
    }

    /*PROTECTED REGION ID(TimeRequirementLimitImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject TimeRequirementLimit::eGet(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::REQUIREMENTLIMIT__LIMITTYPE:
    {
        return amalthea::RequirementLimit::eGet(_featureID, _resolve);
    }
    case ::amalthea::AmaltheaPackage::TIMEREQUIREMENTLIMIT__METRIC:
    {
        ::ecorecpp::mapping::any_traits < ::amalthea::TimeMetric
                > ::toAny(_any, m_metric);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::TIMEREQUIREMENTLIMIT__LIMITVALUE:
    {
        if (m_limitValue)
            _any = ::ecore::as < ::ecore::EObject > (m_limitValue);
        return _any;
    }
    }
    throw std::runtime_error(
            "TimeRequirementLimit::eGet Error. FeatureID:" + _featureID);
}

void TimeRequirementLimit::eSet(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::REQUIREMENTLIMIT__LIMITTYPE:
    {
        amalthea::RequirementLimit::eSet(_featureID, _newValue);
        return;
    }
    case ::amalthea::AmaltheaPackage::TIMEREQUIREMENTLIMIT__METRIC:
    {
        ::amalthea::TimeMetric _t0;
        ::ecorecpp::mapping::any_traits < ::amalthea::TimeMetric
                > ::fromAny(_newValue, _t0);
        ::amalthea::TimeRequirementLimit::setMetric(_t0);
        return;
    }
    case ::amalthea::AmaltheaPackage::TIMEREQUIREMENTLIMIT__LIMITVALUE:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::Time_ptr _t1 = dynamic_cast< ::amalthea::Time* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::Time >(_t0);*/
        ::amalthea::TimeRequirementLimit::setLimitValue(_t1);
        return;
    }
    }
    throw std::runtime_error(
            "TimeRequirementLimit::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean TimeRequirementLimit::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::REQUIREMENTLIMIT__LIMITTYPE:
    {
        return amalthea::RequirementLimit::eIsSet(_featureID);
    }
    case ::amalthea::AmaltheaPackage::TIMEREQUIREMENTLIMIT__METRIC:
    {
        return ::ecorecpp::mapping::set_traits < ::amalthea::TimeMetric
                > ::is_set(m_metric);
    }
    case ::amalthea::AmaltheaPackage::TIMEREQUIREMENTLIMIT__LIMITVALUE:
    {
        return (bool) m_limitValue;
    }
    }
    throw std::runtime_error(
            "TimeRequirementLimit::eIsSet Error. FeatureID:" + _featureID);
}

void TimeRequirementLimit::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "TimeRequirementLimit::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr TimeRequirementLimit::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getTimeRequirementLimit();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void TimeRequirementLimit::_inverseAdd(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::TIMEREQUIREMENTLIMIT__LIMITVALUE:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void TimeRequirementLimit::_inverseRemove(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::TIMEREQUIREMENTLIMIT__LIMITVALUE:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

