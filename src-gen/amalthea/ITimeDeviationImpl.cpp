// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/ITimeDeviationImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "ITimeDeviation.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/Time.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(ITimeDeviationImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void ITimeDeviation::_initialize()
{
    // Supertypes

    // References

    /*PROTECTED REGION ID(ITimeDeviationImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

::amalthea::Time_ptr ITimeDeviation::getLowerBound()
{
    /*PROTECTED REGION ID(ITimeDeviationImpl_getLowerBound) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    throw "UnsupportedOperationException: amalthea::ITimeDeviation::getLowerBound";
    /*PROTECTED REGION END*/
}

::amalthea::Time_ptr ITimeDeviation::getUpperBound()
{
    /*PROTECTED REGION ID(ITimeDeviationImpl_getUpperBound) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    throw "UnsupportedOperationException: amalthea::ITimeDeviation::getUpperBound";
    /*PROTECTED REGION END*/
}

::amalthea::Time_ptr ITimeDeviation::getAverage()
{
    /*PROTECTED REGION ID(ITimeDeviationImpl_getAverage) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    throw "UnsupportedOperationException: amalthea::ITimeDeviation::getAverage";
    /*PROTECTED REGION END*/
}

// EObject
::ecore::EJavaObject ITimeDeviation::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    }
    throw std::runtime_error(
            "ITimeDeviation::eGet Error. FeatureID:" + _featureID);
}

void ITimeDeviation::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    }
    throw std::runtime_error(
            "ITimeDeviation::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean ITimeDeviation::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    }
    throw std::runtime_error(
            "ITimeDeviation::eIsSet Error. FeatureID:" + _featureID);
}

void ITimeDeviation::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "ITimeDeviation::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr ITimeDeviation::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getITimeDeviation();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void ITimeDeviation::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void ITimeDeviation::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

