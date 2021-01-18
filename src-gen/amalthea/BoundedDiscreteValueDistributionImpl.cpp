// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/BoundedDiscreteValueDistributionImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "BoundedDiscreteValueDistribution.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/DiscreteValueInterval.hpp>
#include <amalthea/IDiscreteValueDeviation.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(BoundedDiscreteValueDistributionImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void BoundedDiscreteValueDistribution::_initialize()
{
    // Supertypes
    ::amalthea::DiscreteValueInterval::_initialize();
    ::amalthea::IDiscreteValueDeviation::_initialize();

    // References

    /*PROTECTED REGION ID(BoundedDiscreteValueDistributionImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject BoundedDiscreteValueDistribution::eGet(
        ::ecore::EInt _featureID, ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::DISCRETEVALUEINTERVAL__LOWERBOUND:
    case ::amalthea::AmaltheaPackage::DISCRETEVALUEINTERVAL__UPPERBOUND:
    {
        return amalthea::DiscreteValueInterval::eGet(_featureID, _resolve);
    }
    }
    throw std::runtime_error(
            "BoundedDiscreteValueDistribution::eGet Error. FeatureID:"
                    + _featureID);
}

void BoundedDiscreteValueDistribution::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::DISCRETEVALUEINTERVAL__LOWERBOUND:
    case ::amalthea::AmaltheaPackage::DISCRETEVALUEINTERVAL__UPPERBOUND:
    {
        amalthea::DiscreteValueInterval::eSet(_featureID, _newValue);
        return;
    }
    }
    throw std::runtime_error(
            "BoundedDiscreteValueDistribution::eSet Error. FeatureID:"
                    + _featureID);
}

::ecore::EBoolean BoundedDiscreteValueDistribution::eIsSet(
        ::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::DISCRETEVALUEINTERVAL__LOWERBOUND:
    case ::amalthea::AmaltheaPackage::DISCRETEVALUEINTERVAL__UPPERBOUND:
    {
        return amalthea::DiscreteValueInterval::eIsSet(_featureID);
    }
    }
    throw std::runtime_error(
            "BoundedDiscreteValueDistribution::eIsSet Error. FeatureID:"
                    + _featureID);
}

void BoundedDiscreteValueDistribution::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "BoundedDiscreteValueDistribution::eUnset Error. FeatureID:"
                    + _featureID);
}

::ecore::EClass_ptr BoundedDiscreteValueDistribution::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getBoundedDiscreteValueDistribution();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void BoundedDiscreteValueDistribution::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void BoundedDiscreteValueDistribution::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

