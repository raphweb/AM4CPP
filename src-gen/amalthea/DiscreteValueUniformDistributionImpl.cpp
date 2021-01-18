// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/DiscreteValueUniformDistributionImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "DiscreteValueUniformDistribution.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/BoundedDiscreteValueDistribution.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(DiscreteValueUniformDistributionImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void DiscreteValueUniformDistribution::_initialize()
{
    // Supertypes
    ::amalthea::BoundedDiscreteValueDistribution::_initialize();

    // References

    /*PROTECTED REGION ID(DiscreteValueUniformDistributionImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject DiscreteValueUniformDistribution::eGet(
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
            "DiscreteValueUniformDistribution::eGet Error. FeatureID:"
                    + _featureID);
}

void DiscreteValueUniformDistribution::eSet(::ecore::EInt _featureID,
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
            "DiscreteValueUniformDistribution::eSet Error. FeatureID:"
                    + _featureID);
}

::ecore::EBoolean DiscreteValueUniformDistribution::eIsSet(
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
            "DiscreteValueUniformDistribution::eIsSet Error. FeatureID:"
                    + _featureID);
}

void DiscreteValueUniformDistribution::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "DiscreteValueUniformDistribution::eUnset Error. FeatureID:"
                    + _featureID);
}

::ecore::EClass_ptr DiscreteValueUniformDistribution::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getDiscreteValueUniformDistribution();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void DiscreteValueUniformDistribution::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void DiscreteValueUniformDistribution::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

