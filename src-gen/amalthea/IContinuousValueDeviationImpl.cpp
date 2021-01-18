// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/IContinuousValueDeviationImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "IContinuousValueDeviation.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(IContinuousValueDeviationImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void IContinuousValueDeviation::_initialize()
{
    // Supertypes

    // References

    /*PROTECTED REGION ID(IContinuousValueDeviationImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

::ecore::EDoubleObject IContinuousValueDeviation::getLowerBound()
{
    /*PROTECTED REGION ID(IContinuousValueDeviationImpl_getLowerBound) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    throw "UnsupportedOperationException: amalthea::IContinuousValueDeviation::getLowerBound";
    /*PROTECTED REGION END*/
}

::ecore::EDoubleObject IContinuousValueDeviation::getUpperBound()
{
    /*PROTECTED REGION ID(IContinuousValueDeviationImpl_getUpperBound) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    throw "UnsupportedOperationException: amalthea::IContinuousValueDeviation::getUpperBound";
    /*PROTECTED REGION END*/
}

::ecore::EDoubleObject IContinuousValueDeviation::getAverage()
{
    /*PROTECTED REGION ID(IContinuousValueDeviationImpl_getAverage) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    throw "UnsupportedOperationException: amalthea::IContinuousValueDeviation::getAverage";
    /*PROTECTED REGION END*/
}

// EObject
::ecore::EJavaObject IContinuousValueDeviation::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    }
    throw std::runtime_error(
            "IContinuousValueDeviation::eGet Error. FeatureID:" + _featureID);
}

void IContinuousValueDeviation::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    }
    throw std::runtime_error(
            "IContinuousValueDeviation::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean IContinuousValueDeviation::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    }
    throw std::runtime_error(
            "IContinuousValueDeviation::eIsSet Error. FeatureID:" + _featureID);
}

void IContinuousValueDeviation::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "IContinuousValueDeviation::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr IContinuousValueDeviation::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getIContinuousValueDeviation();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void IContinuousValueDeviation::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void IContinuousValueDeviation::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

