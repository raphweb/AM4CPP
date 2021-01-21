// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/ContinuousValueGaussDistributionImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "ContinuousValueGaussDistribution.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/TruncatedContinuousValueDistribution.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(ContinuousValueGaussDistributionImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void ContinuousValueGaussDistribution::_initialize()
{
    // Supertypes
    ::amalthea::TruncatedContinuousValueDistribution::_initialize();

    // References

    /*PROTECTED REGION ID(ContinuousValueGaussDistributionImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

::ecore::EDoubleObject ContinuousValueGaussDistribution::getAverage()
{
    /*PROTECTED REGION ID(ContinuousValueGaussDistributionImpl_getAverage) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    throw "UnsupportedOperationException: amalthea::ContinuousValueGaussDistribution::getAverage";
    /*PROTECTED REGION END*/
}

// EObject
::ecore::EJavaObject ContinuousValueGaussDistribution::eGet(
        ::ecore::EInt _featureID, [[maybe_unused]] ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::TRUNCATEDCONTINUOUSVALUEDISTRIBUTION__LOWERBOUND:
    case ::amalthea::AmaltheaPackage::TRUNCATEDCONTINUOUSVALUEDISTRIBUTION__UPPERBOUND:
    {
        return amalthea::TruncatedContinuousValueDistribution::eGet(_featureID,
                _resolve);
    }
    case ::amalthea::AmaltheaPackage::CONTINUOUSVALUEGAUSSDISTRIBUTION__MEAN:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EDouble
                > ::toAny(_any, m_mean);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::CONTINUOUSVALUEGAUSSDISTRIBUTION__SD:
    {
        ::ecorecpp::mapping::any_traits < ::amalthea::PositiveDouble
                > ::toAny(_any, m_sd);
        return _any;
    }
    }
    throw std::runtime_error(
            "ContinuousValueGaussDistribution::eGet Error. FeatureID:"
                    + _featureID);
}

void ContinuousValueGaussDistribution::eSet(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::TRUNCATEDCONTINUOUSVALUEDISTRIBUTION__LOWERBOUND:
    case ::amalthea::AmaltheaPackage::TRUNCATEDCONTINUOUSVALUEDISTRIBUTION__UPPERBOUND:
    {
        amalthea::TruncatedContinuousValueDistribution::eSet(_featureID,
                _newValue);
        return;
    }
    case ::amalthea::AmaltheaPackage::CONTINUOUSVALUEGAUSSDISTRIBUTION__MEAN:
    {
        ::ecore::EDouble _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EDouble
                > ::fromAny(_newValue, _t0);
        ::amalthea::ContinuousValueGaussDistribution::setMean(_t0);
        return;
    }
    case ::amalthea::AmaltheaPackage::CONTINUOUSVALUEGAUSSDISTRIBUTION__SD:
    {
        ::amalthea::PositiveDouble _t0;
        ::ecorecpp::mapping::any_traits < ::amalthea::PositiveDouble
                > ::fromAny(_newValue, _t0);
        ::amalthea::ContinuousValueGaussDistribution::setSd(_t0);
        return;
    }
    }
    throw std::runtime_error(
            "ContinuousValueGaussDistribution::eSet Error. FeatureID:"
                    + _featureID);
}

::ecore::EBoolean ContinuousValueGaussDistribution::eIsSet(
        ::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::TRUNCATEDCONTINUOUSVALUEDISTRIBUTION__LOWERBOUND:
    case ::amalthea::AmaltheaPackage::TRUNCATEDCONTINUOUSVALUEDISTRIBUTION__UPPERBOUND:
    {
        return amalthea::TruncatedContinuousValueDistribution::eIsSet(
                _featureID);
    }
    case ::amalthea::AmaltheaPackage::CONTINUOUSVALUEGAUSSDISTRIBUTION__MEAN:
    {
        return m_mean != 0.0;
    }
    case ::amalthea::AmaltheaPackage::CONTINUOUSVALUEGAUSSDISTRIBUTION__SD:
    {
        return m_sd != 1.0;
    }
    }
    throw std::runtime_error(
            "ContinuousValueGaussDistribution::eIsSet Error. FeatureID:"
                    + _featureID);
}

void ContinuousValueGaussDistribution::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "ContinuousValueGaussDistribution::eUnset Error. FeatureID:"
                    + _featureID);
}

::ecore::EClass_ptr ContinuousValueGaussDistribution::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getContinuousValueGaussDistribution();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void ContinuousValueGaussDistribution::_inverseAdd(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void ContinuousValueGaussDistribution::_inverseRemove(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

