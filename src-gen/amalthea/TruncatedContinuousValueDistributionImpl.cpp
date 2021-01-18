// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/TruncatedContinuousValueDistributionImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "TruncatedContinuousValueDistribution.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/IContinuousValueDeviation.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(TruncatedContinuousValueDistributionImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void TruncatedContinuousValueDistribution::_initialize()
{
    // Supertypes
    ::amalthea::IContinuousValueDeviation::_initialize();

    // References

    /*PROTECTED REGION ID(TruncatedContinuousValueDistributionImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

::ecore::EBoolean TruncatedContinuousValueDistribution::validateInvariants(
        ::ecore::EDiagnosticChain _diagnostics,
        std::map< ::ecore::EJavaObject, ::ecore::EJavaObject > const &_context)
{
    /*PROTECTED REGION ID(TruncatedContinuousValueDistributionImpl_validateInvariants) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    throw "UnsupportedOperationException: amalthea::TruncatedContinuousValueDistribution::validateInvariants";
    /*PROTECTED REGION END*/
}

// EObject
::ecore::EJavaObject TruncatedContinuousValueDistribution::eGet(
        ::ecore::EInt _featureID, ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::TRUNCATEDCONTINUOUSVALUEDISTRIBUTION__LOWERBOUND:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EDoubleObject
                > ::toAny(_any, m_lowerBound);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::TRUNCATEDCONTINUOUSVALUEDISTRIBUTION__UPPERBOUND:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EDoubleObject
                > ::toAny(_any, m_upperBound);
        return _any;
    }
    }
    throw std::runtime_error(
            "TruncatedContinuousValueDistribution::eGet Error. FeatureID:"
                    + _featureID);
}

void TruncatedContinuousValueDistribution::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::TRUNCATEDCONTINUOUSVALUEDISTRIBUTION__LOWERBOUND:
    {
        ::ecore::EDoubleObject _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EDoubleObject
                > ::fromAny(_newValue, _t0);
        ::amalthea::TruncatedContinuousValueDistribution::setLowerBound(_t0);
        return;
    }
    case ::amalthea::AmaltheaPackage::TRUNCATEDCONTINUOUSVALUEDISTRIBUTION__UPPERBOUND:
    {
        ::ecore::EDoubleObject _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EDoubleObject
                > ::fromAny(_newValue, _t0);
        ::amalthea::TruncatedContinuousValueDistribution::setUpperBound(_t0);
        return;
    }
    }
    throw std::runtime_error(
            "TruncatedContinuousValueDistribution::eSet Error. FeatureID:"
                    + _featureID);
}

::ecore::EBoolean TruncatedContinuousValueDistribution::eIsSet(
        ::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::TRUNCATEDCONTINUOUSVALUEDISTRIBUTION__LOWERBOUND:
    {
        return ::ecorecpp::mapping::set_traits < ::ecore::EDoubleObject
                > ::is_set(m_lowerBound);
    }
    case ::amalthea::AmaltheaPackage::TRUNCATEDCONTINUOUSVALUEDISTRIBUTION__UPPERBOUND:
    {
        return ::ecorecpp::mapping::set_traits < ::ecore::EDoubleObject
                > ::is_set(m_upperBound);
    }
    }
    throw std::runtime_error(
            "TruncatedContinuousValueDistribution::eIsSet Error. FeatureID:"
                    + _featureID);
}

void TruncatedContinuousValueDistribution::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "TruncatedContinuousValueDistribution::eUnset Error. FeatureID:"
                    + _featureID);
}

::ecore::EClass_ptr TruncatedContinuousValueDistribution::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getTruncatedContinuousValueDistribution();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void TruncatedContinuousValueDistribution::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void TruncatedContinuousValueDistribution::_inverseRemove(
        ::ecore::EInt _featureID, ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

