// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/IDiscreteValueDeviationImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "IDiscreteValueDeviation.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(IDiscreteValueDeviationImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void IDiscreteValueDeviation::_initialize()
{
    // Supertypes

    // References

    /*PROTECTED REGION ID(IDiscreteValueDeviationImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

::ecore::ELongObject IDiscreteValueDeviation::getLowerBound()
{
    /*PROTECTED REGION ID(IDiscreteValueDeviationImpl_getLowerBound) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    throw "UnsupportedOperationException: amalthea::IDiscreteValueDeviation::getLowerBound";
    /*PROTECTED REGION END*/
}

::ecore::ELongObject IDiscreteValueDeviation::getUpperBound()
{
    /*PROTECTED REGION ID(IDiscreteValueDeviationImpl_getUpperBound) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    throw "UnsupportedOperationException: amalthea::IDiscreteValueDeviation::getUpperBound";
    /*PROTECTED REGION END*/
}

::ecore::EDoubleObject IDiscreteValueDeviation::getAverage()
{
    /*PROTECTED REGION ID(IDiscreteValueDeviationImpl_getAverage) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    throw "UnsupportedOperationException: amalthea::IDiscreteValueDeviation::getAverage";
    /*PROTECTED REGION END*/
}

// EObject
::ecore::EJavaObject IDiscreteValueDeviation::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    }
    throw std::runtime_error(
            "IDiscreteValueDeviation::eGet Error. FeatureID:" + _featureID);
}

void IDiscreteValueDeviation::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    }
    throw std::runtime_error(
            "IDiscreteValueDeviation::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean IDiscreteValueDeviation::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    }
    throw std::runtime_error(
            "IDiscreteValueDeviation::eIsSet Error. FeatureID:" + _featureID);
}

void IDiscreteValueDeviation::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "IDiscreteValueDeviation::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr IDiscreteValueDeviation::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getIDiscreteValueDeviation();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void IDiscreteValueDeviation::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void IDiscreteValueDeviation::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

