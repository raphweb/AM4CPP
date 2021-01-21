// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/DiscreteValueWeibullEstimatorsDistributionImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "DiscreteValueWeibullEstimatorsDistribution.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/BoundedDiscreteValueDistribution.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(DiscreteValueWeibullEstimatorsDistributionImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void DiscreteValueWeibullEstimatorsDistribution::_initialize()
{
    // Supertypes
    ::amalthea::BoundedDiscreteValueDistribution::_initialize();

    // References

    /*PROTECTED REGION ID(DiscreteValueWeibullEstimatorsDistributionImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject DiscreteValueWeibullEstimatorsDistribution::eGet(
        ::ecore::EInt _featureID, [[maybe_unused]] ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::DISCRETEVALUEINTERVAL__LOWERBOUND:
    case ::amalthea::AmaltheaPackage::DISCRETEVALUEINTERVAL__UPPERBOUND:
    {
        return amalthea::DiscreteValueInterval::eGet(_featureID, _resolve);
    }
    case ::amalthea::AmaltheaPackage::DISCRETEVALUEWEIBULLESTIMATORSDISTRIBUTION__AVERAGE:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EDoubleObject
                > ::toAny(_any, m_average);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::DISCRETEVALUEWEIBULLESTIMATORSDISTRIBUTION__PREMAINPROMILLE:
    {
        ::ecorecpp::mapping::any_traits < ::amalthea::PositiveDouble
                > ::toAny(_any, m_pRemainPromille);
        return _any;
    }
    }
    throw std::runtime_error(
            "DiscreteValueWeibullEstimatorsDistribution::eGet Error. FeatureID:"
                    + _featureID);
}

void DiscreteValueWeibullEstimatorsDistribution::eSet(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::DISCRETEVALUEINTERVAL__LOWERBOUND:
    case ::amalthea::AmaltheaPackage::DISCRETEVALUEINTERVAL__UPPERBOUND:
    {
        amalthea::DiscreteValueInterval::eSet(_featureID, _newValue);
        return;
    }
    case ::amalthea::AmaltheaPackage::DISCRETEVALUEWEIBULLESTIMATORSDISTRIBUTION__AVERAGE:
    {
        ::ecore::EDoubleObject _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EDoubleObject
                > ::fromAny(_newValue, _t0);
        ::amalthea::DiscreteValueWeibullEstimatorsDistribution::setAverage(_t0);
        return;
    }
    case ::amalthea::AmaltheaPackage::DISCRETEVALUEWEIBULLESTIMATORSDISTRIBUTION__PREMAINPROMILLE:
    {
        ::amalthea::PositiveDouble _t0;
        ::ecorecpp::mapping::any_traits < ::amalthea::PositiveDouble
                > ::fromAny(_newValue, _t0);
        ::amalthea::DiscreteValueWeibullEstimatorsDistribution::setPRemainPromille(
                _t0);
        return;
    }
    }
    throw std::runtime_error(
            "DiscreteValueWeibullEstimatorsDistribution::eSet Error. FeatureID:"
                    + _featureID);
}

::ecore::EBoolean DiscreteValueWeibullEstimatorsDistribution::eIsSet(
        ::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::DISCRETEVALUEINTERVAL__LOWERBOUND:
    case ::amalthea::AmaltheaPackage::DISCRETEVALUEINTERVAL__UPPERBOUND:
    {
        return amalthea::DiscreteValueInterval::eIsSet(_featureID);
    }
    case ::amalthea::AmaltheaPackage::DISCRETEVALUEWEIBULLESTIMATORSDISTRIBUTION__AVERAGE:
    {
        return m_average != 0.0;
    }
    case ::amalthea::AmaltheaPackage::DISCRETEVALUEWEIBULLESTIMATORSDISTRIBUTION__PREMAINPROMILLE:
    {
        return m_pRemainPromille != 1.0;
    }
    }
    throw std::runtime_error(
            "DiscreteValueWeibullEstimatorsDistribution::eIsSet Error. FeatureID:"
                    + _featureID);
}

void DiscreteValueWeibullEstimatorsDistribution::eUnset(
        ::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "DiscreteValueWeibullEstimatorsDistribution::eUnset Error. FeatureID:"
                    + _featureID);
}

::ecore::EClass_ptr DiscreteValueWeibullEstimatorsDistribution::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getDiscreteValueWeibullEstimatorsDistribution();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void DiscreteValueWeibullEstimatorsDistribution::_inverseAdd(
        ::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void DiscreteValueWeibullEstimatorsDistribution::_inverseRemove(
        ::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

