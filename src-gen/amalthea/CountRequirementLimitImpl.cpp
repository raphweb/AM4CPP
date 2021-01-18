// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/CountRequirementLimitImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "CountRequirementLimit.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/RequirementLimit.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(CountRequirementLimitImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void CountRequirementLimit::_initialize()
{
    // Supertypes
    ::amalthea::RequirementLimit::_initialize();

    // References

    /*PROTECTED REGION ID(CountRequirementLimitImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject CountRequirementLimit::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::REQUIREMENTLIMIT__LIMITTYPE:
    {
        return amalthea::RequirementLimit::eGet(_featureID, _resolve);
    }
    case ::amalthea::AmaltheaPackage::COUNTREQUIREMENTLIMIT__METRIC:
    {
        ::ecorecpp::mapping::any_traits < ::amalthea::CountMetric
                > ::toAny(_any, m_metric);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::COUNTREQUIREMENTLIMIT__LIMITVALUE:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EInt
                > ::toAny(_any, m_limitValue);
        return _any;
    }
    }
    throw std::runtime_error(
            "CountRequirementLimit::eGet Error. FeatureID:" + _featureID);
}

void CountRequirementLimit::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::REQUIREMENTLIMIT__LIMITTYPE:
    {
        amalthea::RequirementLimit::eSet(_featureID, _newValue);
        return;
    }
    case ::amalthea::AmaltheaPackage::COUNTREQUIREMENTLIMIT__METRIC:
    {
        ::amalthea::CountMetric _t0;
        ::ecorecpp::mapping::any_traits < ::amalthea::CountMetric
                > ::fromAny(_newValue, _t0);
        ::amalthea::CountRequirementLimit::setMetric(_t0);
        return;
    }
    case ::amalthea::AmaltheaPackage::COUNTREQUIREMENTLIMIT__LIMITVALUE:
    {
        ::ecore::EInt _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EInt
                > ::fromAny(_newValue, _t0);
        ::amalthea::CountRequirementLimit::setLimitValue(_t0);
        return;
    }
    }
    throw std::runtime_error(
            "CountRequirementLimit::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean CountRequirementLimit::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::REQUIREMENTLIMIT__LIMITTYPE:
    {
        return amalthea::RequirementLimit::eIsSet(_featureID);
    }
    case ::amalthea::AmaltheaPackage::COUNTREQUIREMENTLIMIT__METRIC:
    {
        return ::ecorecpp::mapping::set_traits < ::amalthea::CountMetric
                > ::is_set(m_metric);
    }
    case ::amalthea::AmaltheaPackage::COUNTREQUIREMENTLIMIT__LIMITVALUE:
    {
        return m_limitValue != 0;
    }
    }
    throw std::runtime_error(
            "CountRequirementLimit::eIsSet Error. FeatureID:" + _featureID);
}

void CountRequirementLimit::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "CountRequirementLimit::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr CountRequirementLimit::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getCountRequirementLimit();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void CountRequirementLimit::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void CountRequirementLimit::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

