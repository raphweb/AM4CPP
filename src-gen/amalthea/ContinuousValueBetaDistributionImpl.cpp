// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/ContinuousValueBetaDistributionImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "ContinuousValueBetaDistribution.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/BoundedContinuousValueDistribution.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(ContinuousValueBetaDistributionImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void ContinuousValueBetaDistribution::_initialize()
{
    // Supertypes
    ::amalthea::BoundedContinuousValueDistribution::_initialize();

    // References

    /*PROTECTED REGION ID(ContinuousValueBetaDistributionImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

::ecore::EDoubleObject ContinuousValueBetaDistribution::getAverage()
{
    /*PROTECTED REGION ID(ContinuousValueBetaDistributionImpl_getAverage) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    throw "UnsupportedOperationException: amalthea::ContinuousValueBetaDistribution::getAverage";
    /*PROTECTED REGION END*/
}

// EObject
::ecore::EJavaObject ContinuousValueBetaDistribution::eGet(
        ::ecore::EInt _featureID, ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::CONTINUOUSVALUEINTERVAL__LOWERBOUND:
    case ::amalthea::AmaltheaPackage::CONTINUOUSVALUEINTERVAL__UPPERBOUND:
    {
        return amalthea::ContinuousValueInterval::eGet(_featureID, _resolve);
    }
    case ::amalthea::AmaltheaPackage::CONTINUOUSVALUEBETADISTRIBUTION__ALPHA:
    {
        ::ecorecpp::mapping::any_traits < ::amalthea::PositiveDouble
                > ::toAny(_any, m_alpha);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::CONTINUOUSVALUEBETADISTRIBUTION__BETA:
    {
        ::ecorecpp::mapping::any_traits < ::amalthea::PositiveDouble
                > ::toAny(_any, m_beta);
        return _any;
    }
    }
    throw std::runtime_error(
            "ContinuousValueBetaDistribution::eGet Error. FeatureID:"
                    + _featureID);
}

void ContinuousValueBetaDistribution::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::CONTINUOUSVALUEINTERVAL__LOWERBOUND:
    case ::amalthea::AmaltheaPackage::CONTINUOUSVALUEINTERVAL__UPPERBOUND:
    {
        amalthea::ContinuousValueInterval::eSet(_featureID, _newValue);
        return;
    }
    case ::amalthea::AmaltheaPackage::CONTINUOUSVALUEBETADISTRIBUTION__ALPHA:
    {
        ::amalthea::PositiveDouble _t0;
        ::ecorecpp::mapping::any_traits < ::amalthea::PositiveDouble
                > ::fromAny(_newValue, _t0);
        ::amalthea::ContinuousValueBetaDistribution::setAlpha(_t0);
        return;
    }
    case ::amalthea::AmaltheaPackage::CONTINUOUSVALUEBETADISTRIBUTION__BETA:
    {
        ::amalthea::PositiveDouble _t0;
        ::ecorecpp::mapping::any_traits < ::amalthea::PositiveDouble
                > ::fromAny(_newValue, _t0);
        ::amalthea::ContinuousValueBetaDistribution::setBeta(_t0);
        return;
    }
    }
    throw std::runtime_error(
            "ContinuousValueBetaDistribution::eSet Error. FeatureID:"
                    + _featureID);
}

::ecore::EBoolean ContinuousValueBetaDistribution::eIsSet(
        ::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::CONTINUOUSVALUEINTERVAL__LOWERBOUND:
    case ::amalthea::AmaltheaPackage::CONTINUOUSVALUEINTERVAL__UPPERBOUND:
    {
        return amalthea::ContinuousValueInterval::eIsSet(_featureID);
    }
    case ::amalthea::AmaltheaPackage::CONTINUOUSVALUEBETADISTRIBUTION__ALPHA:
    {
        return m_alpha != 1.0;
    }
    case ::amalthea::AmaltheaPackage::CONTINUOUSVALUEBETADISTRIBUTION__BETA:
    {
        return m_beta != 1.0;
    }
    }
    throw std::runtime_error(
            "ContinuousValueBetaDistribution::eIsSet Error. FeatureID:"
                    + _featureID);
}

void ContinuousValueBetaDistribution::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "ContinuousValueBetaDistribution::eUnset Error. FeatureID:"
                    + _featureID);
}

::ecore::EClass_ptr ContinuousValueBetaDistribution::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getContinuousValueBetaDistribution();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void ContinuousValueBetaDistribution::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void ContinuousValueBetaDistribution::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

