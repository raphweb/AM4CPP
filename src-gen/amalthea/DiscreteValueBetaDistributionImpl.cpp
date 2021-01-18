// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/DiscreteValueBetaDistributionImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "DiscreteValueBetaDistribution.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/BoundedDiscreteValueDistribution.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(DiscreteValueBetaDistributionImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void DiscreteValueBetaDistribution::_initialize()
{
    // Supertypes
    ::amalthea::BoundedDiscreteValueDistribution::_initialize();

    // References

    /*PROTECTED REGION ID(DiscreteValueBetaDistributionImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

::ecore::EDoubleObject DiscreteValueBetaDistribution::getAverage()
{
    /*PROTECTED REGION ID(DiscreteValueBetaDistributionImpl_getAverage) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    throw "UnsupportedOperationException: amalthea::DiscreteValueBetaDistribution::getAverage";
    /*PROTECTED REGION END*/
}

// EObject
::ecore::EJavaObject DiscreteValueBetaDistribution::eGet(
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
    case ::amalthea::AmaltheaPackage::DISCRETEVALUEBETADISTRIBUTION__ALPHA:
    {
        ::ecorecpp::mapping::any_traits < ::amalthea::PositiveDouble
                > ::toAny(_any, m_alpha);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::DISCRETEVALUEBETADISTRIBUTION__BETA:
    {
        ::ecorecpp::mapping::any_traits < ::amalthea::PositiveDouble
                > ::toAny(_any, m_beta);
        return _any;
    }
    }
    throw std::runtime_error(
            "DiscreteValueBetaDistribution::eGet Error. FeatureID:"
                    + _featureID);
}

void DiscreteValueBetaDistribution::eSet(::ecore::EInt _featureID,
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
    case ::amalthea::AmaltheaPackage::DISCRETEVALUEBETADISTRIBUTION__ALPHA:
    {
        ::amalthea::PositiveDouble _t0;
        ::ecorecpp::mapping::any_traits < ::amalthea::PositiveDouble
                > ::fromAny(_newValue, _t0);
        ::amalthea::DiscreteValueBetaDistribution::setAlpha(_t0);
        return;
    }
    case ::amalthea::AmaltheaPackage::DISCRETEVALUEBETADISTRIBUTION__BETA:
    {
        ::amalthea::PositiveDouble _t0;
        ::ecorecpp::mapping::any_traits < ::amalthea::PositiveDouble
                > ::fromAny(_newValue, _t0);
        ::amalthea::DiscreteValueBetaDistribution::setBeta(_t0);
        return;
    }
    }
    throw std::runtime_error(
            "DiscreteValueBetaDistribution::eSet Error. FeatureID:"
                    + _featureID);
}

::ecore::EBoolean DiscreteValueBetaDistribution::eIsSet(
        ::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::DISCRETEVALUEINTERVAL__LOWERBOUND:
    case ::amalthea::AmaltheaPackage::DISCRETEVALUEINTERVAL__UPPERBOUND:
    {
        return amalthea::DiscreteValueInterval::eIsSet(_featureID);
    }
    case ::amalthea::AmaltheaPackage::DISCRETEVALUEBETADISTRIBUTION__ALPHA:
    {
        return m_alpha != 1.0;
    }
    case ::amalthea::AmaltheaPackage::DISCRETEVALUEBETADISTRIBUTION__BETA:
    {
        return m_beta != 1.0;
    }
    }
    throw std::runtime_error(
            "DiscreteValueBetaDistribution::eIsSet Error. FeatureID:"
                    + _featureID);
}

void DiscreteValueBetaDistribution::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "DiscreteValueBetaDistribution::eUnset Error. FeatureID:"
                    + _featureID);
}

::ecore::EClass_ptr DiscreteValueBetaDistribution::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getDiscreteValueBetaDistribution();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void DiscreteValueBetaDistribution::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void DiscreteValueBetaDistribution::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

