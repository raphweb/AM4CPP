// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/ContinuousValueIntervalImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "ContinuousValueInterval.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(ContinuousValueIntervalImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void ContinuousValueInterval::_initialize()
{
    // Supertypes

    // References

    /*PROTECTED REGION ID(ContinuousValueIntervalImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

::ecore::EDoubleObject ContinuousValueInterval::getAverage()
{
    /*PROTECTED REGION ID(ContinuousValueIntervalImpl_getAverage) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    throw "UnsupportedOperationException: amalthea::ContinuousValueInterval::getAverage";
    /*PROTECTED REGION END*/
}

::ecore::EBoolean ContinuousValueInterval::validateInvariants(
        ::ecore::EDiagnosticChain _diagnostics,
        std::map< ::ecore::EJavaObject, ::ecore::EJavaObject > const &_context)
{
    /*PROTECTED REGION ID(ContinuousValueIntervalImpl_validateInvariants) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    throw "UnsupportedOperationException: amalthea::ContinuousValueInterval::validateInvariants";
    /*PROTECTED REGION END*/
}

// EObject
::ecore::EJavaObject ContinuousValueInterval::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::CONTINUOUSVALUEINTERVAL__LOWERBOUND:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EDoubleObject
                > ::toAny(_any, m_lowerBound);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::CONTINUOUSVALUEINTERVAL__UPPERBOUND:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EDoubleObject
                > ::toAny(_any, m_upperBound);
        return _any;
    }
    }
    throw std::runtime_error(
            "ContinuousValueInterval::eGet Error. FeatureID:" + _featureID);
}

void ContinuousValueInterval::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::CONTINUOUSVALUEINTERVAL__LOWERBOUND:
    {
        ::ecore::EDoubleObject _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EDoubleObject
                > ::fromAny(_newValue, _t0);
        ::amalthea::ContinuousValueInterval::setLowerBound(_t0);
        return;
    }
    case ::amalthea::AmaltheaPackage::CONTINUOUSVALUEINTERVAL__UPPERBOUND:
    {
        ::ecore::EDoubleObject _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EDoubleObject
                > ::fromAny(_newValue, _t0);
        ::amalthea::ContinuousValueInterval::setUpperBound(_t0);
        return;
    }
    }
    throw std::runtime_error(
            "ContinuousValueInterval::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean ContinuousValueInterval::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::CONTINUOUSVALUEINTERVAL__LOWERBOUND:
    {
        return m_lowerBound != 0.0;
    }
    case ::amalthea::AmaltheaPackage::CONTINUOUSVALUEINTERVAL__UPPERBOUND:
    {
        return m_upperBound != 0.0;
    }
    }
    throw std::runtime_error(
            "ContinuousValueInterval::eIsSet Error. FeatureID:" + _featureID);
}

void ContinuousValueInterval::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "ContinuousValueInterval::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr ContinuousValueInterval::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getContinuousValueInterval();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void ContinuousValueInterval::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void ContinuousValueInterval::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

