// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/DiscreteValueIntervalImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "DiscreteValueInterval.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(DiscreteValueIntervalImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void DiscreteValueInterval::_initialize()
{
    // Supertypes

    // References

    /*PROTECTED REGION ID(DiscreteValueIntervalImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

::ecore::EDoubleObject DiscreteValueInterval::getAverage()
{
    /*PROTECTED REGION ID(DiscreteValueIntervalImpl_getAverage) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    throw "UnsupportedOperationException: amalthea::DiscreteValueInterval::getAverage";
    /*PROTECTED REGION END*/
}

::ecore::EBoolean DiscreteValueInterval::validateInvariants(
        ::ecore::EDiagnosticChain _diagnostics,
        std::map< ::ecore::EJavaObject, ::ecore::EJavaObject > const &_context)
{
    /*PROTECTED REGION ID(DiscreteValueIntervalImpl_validateInvariants) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    throw "UnsupportedOperationException: amalthea::DiscreteValueInterval::validateInvariants";
    /*PROTECTED REGION END*/
}

// EObject
::ecore::EJavaObject DiscreteValueInterval::eGet(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::DISCRETEVALUEINTERVAL__LOWERBOUND:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::ELongObject
                > ::toAny(_any, m_lowerBound);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::DISCRETEVALUEINTERVAL__UPPERBOUND:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::ELongObject
                > ::toAny(_any, m_upperBound);
        return _any;
    }
    }
    throw std::runtime_error(
            "DiscreteValueInterval::eGet Error. FeatureID:" + _featureID);
}

void DiscreteValueInterval::eSet(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::DISCRETEVALUEINTERVAL__LOWERBOUND:
    {
        ::ecore::ELongObject _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::ELongObject
                > ::fromAny(_newValue, _t0);
        ::amalthea::DiscreteValueInterval::setLowerBound(_t0);
        return;
    }
    case ::amalthea::AmaltheaPackage::DISCRETEVALUEINTERVAL__UPPERBOUND:
    {
        ::ecore::ELongObject _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::ELongObject
                > ::fromAny(_newValue, _t0);
        ::amalthea::DiscreteValueInterval::setUpperBound(_t0);
        return;
    }
    }
    throw std::runtime_error(
            "DiscreteValueInterval::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean DiscreteValueInterval::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::DISCRETEVALUEINTERVAL__LOWERBOUND:
    {
        return m_lowerBound != 0;
    }
    case ::amalthea::AmaltheaPackage::DISCRETEVALUEINTERVAL__UPPERBOUND:
    {
        return m_upperBound != 0;
    }
    }
    throw std::runtime_error(
            "DiscreteValueInterval::eIsSet Error. FeatureID:" + _featureID);
}

void DiscreteValueInterval::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "DiscreteValueInterval::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr DiscreteValueInterval::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getDiscreteValueInterval();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void DiscreteValueInterval::_inverseAdd(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void DiscreteValueInterval::_inverseRemove(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

