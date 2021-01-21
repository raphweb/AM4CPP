// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/BoundedContinuousValueDistributionImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "BoundedContinuousValueDistribution.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/ContinuousValueInterval.hpp>
#include <amalthea/IContinuousValueDeviation.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(BoundedContinuousValueDistributionImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void BoundedContinuousValueDistribution::_initialize()
{
    // Supertypes
    ::amalthea::ContinuousValueInterval::_initialize();
    ::amalthea::IContinuousValueDeviation::_initialize();

    // References

    /*PROTECTED REGION ID(BoundedContinuousValueDistributionImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject BoundedContinuousValueDistribution::eGet(
        ::ecore::EInt _featureID, [[maybe_unused]] ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::CONTINUOUSVALUEINTERVAL__LOWERBOUND:
    case ::amalthea::AmaltheaPackage::CONTINUOUSVALUEINTERVAL__UPPERBOUND:
    {
        return amalthea::ContinuousValueInterval::eGet(_featureID, _resolve);
    }
    }
    throw std::runtime_error(
            "BoundedContinuousValueDistribution::eGet Error. FeatureID:"
                    + _featureID);
}

void BoundedContinuousValueDistribution::eSet(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::CONTINUOUSVALUEINTERVAL__LOWERBOUND:
    case ::amalthea::AmaltheaPackage::CONTINUOUSVALUEINTERVAL__UPPERBOUND:
    {
        amalthea::ContinuousValueInterval::eSet(_featureID, _newValue);
        return;
    }
    }
    throw std::runtime_error(
            "BoundedContinuousValueDistribution::eSet Error. FeatureID:"
                    + _featureID);
}

::ecore::EBoolean BoundedContinuousValueDistribution::eIsSet(
        ::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::CONTINUOUSVALUEINTERVAL__LOWERBOUND:
    case ::amalthea::AmaltheaPackage::CONTINUOUSVALUEINTERVAL__UPPERBOUND:
    {
        return amalthea::ContinuousValueInterval::eIsSet(_featureID);
    }
    }
    throw std::runtime_error(
            "BoundedContinuousValueDistribution::eIsSet Error. FeatureID:"
                    + _featureID);
}

void BoundedContinuousValueDistribution::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "BoundedContinuousValueDistribution::eUnset Error. FeatureID:"
                    + _featureID);
}

::ecore::EClass_ptr BoundedContinuousValueDistribution::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getBoundedContinuousValueDistribution();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void BoundedContinuousValueDistribution::_inverseAdd(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void BoundedContinuousValueDistribution::_inverseRemove(
        ::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

