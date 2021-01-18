// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/MinAvgMaxStatisticImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "MinAvgMaxStatistic.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/NumericStatistic.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(MinAvgMaxStatisticImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void MinAvgMaxStatistic::_initialize()
{
    // Supertypes
    ::amalthea::NumericStatistic::_initialize();

    // References

    /*PROTECTED REGION ID(MinAvgMaxStatisticImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

::ecore::EBoolean MinAvgMaxStatistic::validateInvariants(
        ::ecore::EDiagnosticChain _diagnostics,
        std::map< ::ecore::EJavaObject, ::ecore::EJavaObject > const &_context)
{
    /*PROTECTED REGION ID(MinAvgMaxStatisticImpl_validateInvariants) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    throw "UnsupportedOperationException: amalthea::MinAvgMaxStatistic::validateInvariants";
    /*PROTECTED REGION END*/
}

// EObject
::ecore::EJavaObject MinAvgMaxStatistic::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::MINAVGMAXSTATISTIC__MIN:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EInt > ::toAny(_any, m_min);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::MINAVGMAXSTATISTIC__AVG:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EFloat
                > ::toAny(_any, m_avg);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::MINAVGMAXSTATISTIC__MAX:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EInt > ::toAny(_any, m_max);
        return _any;
    }
    }
    throw std::runtime_error(
            "MinAvgMaxStatistic::eGet Error. FeatureID:" + _featureID);
}

void MinAvgMaxStatistic::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::MINAVGMAXSTATISTIC__MIN:
    {
        ::ecore::EInt _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EInt
                > ::fromAny(_newValue, _t0);
        ::amalthea::MinAvgMaxStatistic::setMin(_t0);
        return;
    }
    case ::amalthea::AmaltheaPackage::MINAVGMAXSTATISTIC__AVG:
    {
        ::ecore::EFloat _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EFloat
                > ::fromAny(_newValue, _t0);
        ::amalthea::MinAvgMaxStatistic::setAvg(_t0);
        return;
    }
    case ::amalthea::AmaltheaPackage::MINAVGMAXSTATISTIC__MAX:
    {
        ::ecore::EInt _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EInt
                > ::fromAny(_newValue, _t0);
        ::amalthea::MinAvgMaxStatistic::setMax(_t0);
        return;
    }
    }
    throw std::runtime_error(
            "MinAvgMaxStatistic::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean MinAvgMaxStatistic::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::MINAVGMAXSTATISTIC__MIN:
    {
        return m_min != 0;
    }
    case ::amalthea::AmaltheaPackage::MINAVGMAXSTATISTIC__AVG:
    {
        return m_avg != 0f;
    }
    case ::amalthea::AmaltheaPackage::MINAVGMAXSTATISTIC__MAX:
    {
        return m_max != 0;
    }
    }
    throw std::runtime_error(
            "MinAvgMaxStatistic::eIsSet Error. FeatureID:" + _featureID);
}

void MinAvgMaxStatistic::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "MinAvgMaxStatistic::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr MinAvgMaxStatistic::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getMinAvgMaxStatistic();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void MinAvgMaxStatistic::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void MinAvgMaxStatistic::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

