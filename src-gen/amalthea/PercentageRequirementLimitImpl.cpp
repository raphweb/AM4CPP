// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/PercentageRequirementLimitImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "PercentageRequirementLimit.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/RequirementLimit.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(PercentageRequirementLimitImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void PercentageRequirementLimit::_initialize()
{
    // Supertypes
    ::amalthea::RequirementLimit::_initialize();

    // References

    /*PROTECTED REGION ID(PercentageRequirementLimitImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject PercentageRequirementLimit::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::REQUIREMENTLIMIT__LIMITTYPE:
    {
        return amalthea::RequirementLimit::eGet(_featureID, _resolve);
    }
    case ::amalthea::AmaltheaPackage::PERCENTAGEREQUIREMENTLIMIT__METRIC:
    {
        ::ecorecpp::mapping::any_traits < ::amalthea::PercentageMetric
                > ::toAny(_any, m_metric);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::PERCENTAGEREQUIREMENTLIMIT__LIMITVALUE:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EDouble
                > ::toAny(_any, m_limitValue);
        return _any;
    }
    }
    throw std::runtime_error(
            "PercentageRequirementLimit::eGet Error. FeatureID:" + _featureID);
}

void PercentageRequirementLimit::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::REQUIREMENTLIMIT__LIMITTYPE:
    {
        amalthea::RequirementLimit::eSet(_featureID, _newValue);
        return;
    }
    case ::amalthea::AmaltheaPackage::PERCENTAGEREQUIREMENTLIMIT__METRIC:
    {
        ::amalthea::PercentageMetric _t0;
        ::ecorecpp::mapping::any_traits < ::amalthea::PercentageMetric
                > ::fromAny(_newValue, _t0);
        ::amalthea::PercentageRequirementLimit::setMetric(_t0);
        return;
    }
    case ::amalthea::AmaltheaPackage::PERCENTAGEREQUIREMENTLIMIT__LIMITVALUE:
    {
        ::ecore::EDouble _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EDouble
                > ::fromAny(_newValue, _t0);
        ::amalthea::PercentageRequirementLimit::setLimitValue(_t0);
        return;
    }
    }
    throw std::runtime_error(
            "PercentageRequirementLimit::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean PercentageRequirementLimit::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::REQUIREMENTLIMIT__LIMITTYPE:
    {
        return amalthea::RequirementLimit::eIsSet(_featureID);
    }
    case ::amalthea::AmaltheaPackage::PERCENTAGEREQUIREMENTLIMIT__METRIC:
    {
        return ::ecorecpp::mapping::set_traits < ::amalthea::PercentageMetric
                > ::is_set(m_metric);
    }
    case ::amalthea::AmaltheaPackage::PERCENTAGEREQUIREMENTLIMIT__LIMITVALUE:
    {
        return m_limitValue != 0.0;
    }
    }
    throw std::runtime_error(
            "PercentageRequirementLimit::eIsSet Error. FeatureID:"
                    + _featureID);
}

void PercentageRequirementLimit::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "PercentageRequirementLimit::eUnset Error. FeatureID:"
                    + _featureID);
}

::ecore::EClass_ptr PercentageRequirementLimit::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getPercentageRequirementLimit();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void PercentageRequirementLimit::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void PercentageRequirementLimit::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

