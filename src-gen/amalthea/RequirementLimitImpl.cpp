// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/RequirementLimitImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "RequirementLimit.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(RequirementLimitImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void RequirementLimit::_initialize()
{
    // Supertypes

    // References

    /*PROTECTED REGION ID(RequirementLimitImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject RequirementLimit::eGet(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::REQUIREMENTLIMIT__LIMITTYPE:
    {
        ::ecorecpp::mapping::any_traits < ::amalthea::LimitType
                > ::toAny(_any, m_limitType);
        return _any;
    }
    }
    throw std::runtime_error(
            "RequirementLimit::eGet Error. FeatureID:" + _featureID);
}

void RequirementLimit::eSet(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::REQUIREMENTLIMIT__LIMITTYPE:
    {
        ::amalthea::LimitType _t0;
        ::ecorecpp::mapping::any_traits < ::amalthea::LimitType
                > ::fromAny(_newValue, _t0);
        ::amalthea::RequirementLimit::setLimitType(_t0);
        return;
    }
    }
    throw std::runtime_error(
            "RequirementLimit::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean RequirementLimit::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::REQUIREMENTLIMIT__LIMITTYPE:
    {
        return ::ecorecpp::mapping::set_traits < ::amalthea::LimitType
                > ::is_set(m_limitType);
    }
    }
    throw std::runtime_error(
            "RequirementLimit::eIsSet Error. FeatureID:" + _featureID);
}

void RequirementLimit::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "RequirementLimit::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr RequirementLimit::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getRequirementLimit();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void RequirementLimit::_inverseAdd(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void RequirementLimit::_inverseRemove(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

