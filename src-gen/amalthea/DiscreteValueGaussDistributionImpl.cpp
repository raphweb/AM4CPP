// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/DiscreteValueGaussDistributionImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "DiscreteValueGaussDistribution.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/TruncatedDiscreteValueDistribution.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(DiscreteValueGaussDistributionImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void DiscreteValueGaussDistribution::_initialize()
{
    // Supertypes
    ::amalthea::TruncatedDiscreteValueDistribution::_initialize();

    // References

    /*PROTECTED REGION ID(DiscreteValueGaussDistributionImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

::ecore::EDoubleObject DiscreteValueGaussDistribution::getAverage()
{
    /*PROTECTED REGION ID(DiscreteValueGaussDistributionImpl_getAverage) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    throw "UnsupportedOperationException: amalthea::DiscreteValueGaussDistribution::getAverage";
    /*PROTECTED REGION END*/
}

// EObject
::ecore::EJavaObject DiscreteValueGaussDistribution::eGet(
        ::ecore::EInt _featureID, ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::TRUNCATEDDISCRETEVALUEDISTRIBUTION__LOWERBOUND:
    case ::amalthea::AmaltheaPackage::TRUNCATEDDISCRETEVALUEDISTRIBUTION__UPPERBOUND:
    {
        return amalthea::TruncatedDiscreteValueDistribution::eGet(_featureID,
                _resolve);
    }
    case ::amalthea::AmaltheaPackage::DISCRETEVALUEGAUSSDISTRIBUTION__MEAN:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EDouble
                > ::toAny(_any, m_mean);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::DISCRETEVALUEGAUSSDISTRIBUTION__SD:
    {
        ::ecorecpp::mapping::any_traits < ::amalthea::PositiveDouble
                > ::toAny(_any, m_sd);
        return _any;
    }
    }
    throw std::runtime_error(
            "DiscreteValueGaussDistribution::eGet Error. FeatureID:"
                    + _featureID);
}

void DiscreteValueGaussDistribution::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::TRUNCATEDDISCRETEVALUEDISTRIBUTION__LOWERBOUND:
    case ::amalthea::AmaltheaPackage::TRUNCATEDDISCRETEVALUEDISTRIBUTION__UPPERBOUND:
    {
        amalthea::TruncatedDiscreteValueDistribution::eSet(_featureID,
                _newValue);
        return;
    }
    case ::amalthea::AmaltheaPackage::DISCRETEVALUEGAUSSDISTRIBUTION__MEAN:
    {
        ::ecore::EDouble _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EDouble
                > ::fromAny(_newValue, _t0);
        ::amalthea::DiscreteValueGaussDistribution::setMean(_t0);
        return;
    }
    case ::amalthea::AmaltheaPackage::DISCRETEVALUEGAUSSDISTRIBUTION__SD:
    {
        ::amalthea::PositiveDouble _t0;
        ::ecorecpp::mapping::any_traits < ::amalthea::PositiveDouble
                > ::fromAny(_newValue, _t0);
        ::amalthea::DiscreteValueGaussDistribution::setSd(_t0);
        return;
    }
    }
    throw std::runtime_error(
            "DiscreteValueGaussDistribution::eSet Error. FeatureID:"
                    + _featureID);
}

::ecore::EBoolean DiscreteValueGaussDistribution::eIsSet(
        ::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::TRUNCATEDDISCRETEVALUEDISTRIBUTION__LOWERBOUND:
    case ::amalthea::AmaltheaPackage::TRUNCATEDDISCRETEVALUEDISTRIBUTION__UPPERBOUND:
    {
        return amalthea::TruncatedDiscreteValueDistribution::eIsSet(_featureID);
    }
    case ::amalthea::AmaltheaPackage::DISCRETEVALUEGAUSSDISTRIBUTION__MEAN:
    {
        return m_mean != 0.0;
    }
    case ::amalthea::AmaltheaPackage::DISCRETEVALUEGAUSSDISTRIBUTION__SD:
    {
        return m_sd != 1.0;
    }
    }
    throw std::runtime_error(
            "DiscreteValueGaussDistribution::eIsSet Error. FeatureID:"
                    + _featureID);
}

void DiscreteValueGaussDistribution::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "DiscreteValueGaussDistribution::eUnset Error. FeatureID:"
                    + _featureID);
}

::ecore::EClass_ptr DiscreteValueGaussDistribution::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getDiscreteValueGaussDistribution();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void DiscreteValueGaussDistribution::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void DiscreteValueGaussDistribution::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

