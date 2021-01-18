// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/TruncatedDiscreteValueDistributionImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "TruncatedDiscreteValueDistribution.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/IDiscreteValueDeviation.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(TruncatedDiscreteValueDistributionImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void TruncatedDiscreteValueDistribution::_initialize()
{
    // Supertypes
    ::amalthea::IDiscreteValueDeviation::_initialize();

    // References

    /*PROTECTED REGION ID(TruncatedDiscreteValueDistributionImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

::ecore::EBoolean TruncatedDiscreteValueDistribution::validateInvariants(
        ::ecore::EDiagnosticChain _diagnostics,
        std::map< ::ecore::EJavaObject, ::ecore::EJavaObject > const &_context)
{
    /*PROTECTED REGION ID(TruncatedDiscreteValueDistributionImpl_validateInvariants) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    throw "UnsupportedOperationException: amalthea::TruncatedDiscreteValueDistribution::validateInvariants";
    /*PROTECTED REGION END*/
}

// EObject
::ecore::EJavaObject TruncatedDiscreteValueDistribution::eGet(
        ::ecore::EInt _featureID, ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::TRUNCATEDDISCRETEVALUEDISTRIBUTION__LOWERBOUND:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::ELongObject
                > ::toAny(_any, m_lowerBound);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::TRUNCATEDDISCRETEVALUEDISTRIBUTION__UPPERBOUND:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::ELongObject
                > ::toAny(_any, m_upperBound);
        return _any;
    }
    }
    throw std::runtime_error(
            "TruncatedDiscreteValueDistribution::eGet Error. FeatureID:"
                    + _featureID);
}

void TruncatedDiscreteValueDistribution::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::TRUNCATEDDISCRETEVALUEDISTRIBUTION__LOWERBOUND:
    {
        ::ecore::ELongObject _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::ELongObject
                > ::fromAny(_newValue, _t0);
        ::amalthea::TruncatedDiscreteValueDistribution::setLowerBound(_t0);
        return;
    }
    case ::amalthea::AmaltheaPackage::TRUNCATEDDISCRETEVALUEDISTRIBUTION__UPPERBOUND:
    {
        ::ecore::ELongObject _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::ELongObject
                > ::fromAny(_newValue, _t0);
        ::amalthea::TruncatedDiscreteValueDistribution::setUpperBound(_t0);
        return;
    }
    }
    throw std::runtime_error(
            "TruncatedDiscreteValueDistribution::eSet Error. FeatureID:"
                    + _featureID);
}

::ecore::EBoolean TruncatedDiscreteValueDistribution::eIsSet(
        ::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::TRUNCATEDDISCRETEVALUEDISTRIBUTION__LOWERBOUND:
    {
        return ::ecorecpp::mapping::set_traits < ::ecore::ELongObject
                > ::is_set(m_lowerBound);
    }
    case ::amalthea::AmaltheaPackage::TRUNCATEDDISCRETEVALUEDISTRIBUTION__UPPERBOUND:
    {
        return ::ecorecpp::mapping::set_traits < ::ecore::ELongObject
                > ::is_set(m_upperBound);
    }
    }
    throw std::runtime_error(
            "TruncatedDiscreteValueDistribution::eIsSet Error. FeatureID:"
                    + _featureID);
}

void TruncatedDiscreteValueDistribution::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "TruncatedDiscreteValueDistribution::eUnset Error. FeatureID:"
                    + _featureID);
}

::ecore::EClass_ptr TruncatedDiscreteValueDistribution::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getTruncatedDiscreteValueDistribution();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void TruncatedDiscreteValueDistribution::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void TruncatedDiscreteValueDistribution::_inverseRemove(
        ::ecore::EInt _featureID, ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

