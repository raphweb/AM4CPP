// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/BoundedTimeDistributionImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "BoundedTimeDistribution.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/TimeInterval.hpp>
#include <amalthea/ITimeDeviation.hpp>
#include <amalthea/Time.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(BoundedTimeDistributionImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void BoundedTimeDistribution::_initialize()
{
    // Supertypes
    ::amalthea::TimeInterval::_initialize();
    ::amalthea::ITimeDeviation::_initialize();

    // References

    /*PROTECTED REGION ID(BoundedTimeDistributionImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject BoundedTimeDistribution::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::TIMEINTERVAL__LOWERBOUND:
    case ::amalthea::AmaltheaPackage::TIMEINTERVAL__UPPERBOUND:
    {
        return amalthea::TimeInterval::eGet(_featureID, _resolve);
    }
    }
    throw std::runtime_error(
            "BoundedTimeDistribution::eGet Error. FeatureID:" + _featureID);
}

void BoundedTimeDistribution::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::TIMEINTERVAL__LOWERBOUND:
    case ::amalthea::AmaltheaPackage::TIMEINTERVAL__UPPERBOUND:
    {
        amalthea::TimeInterval::eSet(_featureID, _newValue);
        return;
    }
    }
    throw std::runtime_error(
            "BoundedTimeDistribution::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean BoundedTimeDistribution::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::TIMEINTERVAL__LOWERBOUND:
    case ::amalthea::AmaltheaPackage::TIMEINTERVAL__UPPERBOUND:
    {
        return amalthea::TimeInterval::eIsSet(_featureID);
    }
    }
    throw std::runtime_error(
            "BoundedTimeDistribution::eIsSet Error. FeatureID:" + _featureID);
}

void BoundedTimeDistribution::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "BoundedTimeDistribution::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr BoundedTimeDistribution::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getBoundedTimeDistribution();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void BoundedTimeDistribution::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::TIMEINTERVAL__LOWERBOUND:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::TIMEINTERVAL__UPPERBOUND:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void BoundedTimeDistribution::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::TIMEINTERVAL__LOWERBOUND:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::TIMEINTERVAL__UPPERBOUND:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

