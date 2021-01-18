// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/ContinuousValueWeibullEstimatorsDistributionImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "ContinuousValueWeibullEstimatorsDistribution.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/BoundedContinuousValueDistribution.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(ContinuousValueWeibullEstimatorsDistributionImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void ContinuousValueWeibullEstimatorsDistribution::_initialize()
{
    // Supertypes
    ::amalthea::BoundedContinuousValueDistribution::_initialize();

    // References

    /*PROTECTED REGION ID(ContinuousValueWeibullEstimatorsDistributionImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject ContinuousValueWeibullEstimatorsDistribution::eGet(
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
    case ::amalthea::AmaltheaPackage::CONTINUOUSVALUEWEIBULLESTIMATORSDISTRIBUTION__AVERAGE:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EDoubleObject
                > ::toAny(_any, m_average);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::CONTINUOUSVALUEWEIBULLESTIMATORSDISTRIBUTION__PREMAINPROMILLE:
    {
        ::ecorecpp::mapping::any_traits < ::amalthea::PositiveDouble
                > ::toAny(_any, m_pRemainPromille);
        return _any;
    }
    }
    throw std::runtime_error(
            "ContinuousValueWeibullEstimatorsDistribution::eGet Error. FeatureID:"
                    + _featureID);
}

void ContinuousValueWeibullEstimatorsDistribution::eSet(
        ::ecore::EInt _featureID, ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::CONTINUOUSVALUEINTERVAL__LOWERBOUND:
    case ::amalthea::AmaltheaPackage::CONTINUOUSVALUEINTERVAL__UPPERBOUND:
    {
        amalthea::ContinuousValueInterval::eSet(_featureID, _newValue);
        return;
    }
    case ::amalthea::AmaltheaPackage::CONTINUOUSVALUEWEIBULLESTIMATORSDISTRIBUTION__AVERAGE:
    {
        ::ecore::EDoubleObject _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EDoubleObject
                > ::fromAny(_newValue, _t0);
        ::amalthea::ContinuousValueWeibullEstimatorsDistribution::setAverage(
                _t0);
        return;
    }
    case ::amalthea::AmaltheaPackage::CONTINUOUSVALUEWEIBULLESTIMATORSDISTRIBUTION__PREMAINPROMILLE:
    {
        ::amalthea::PositiveDouble _t0;
        ::ecorecpp::mapping::any_traits < ::amalthea::PositiveDouble
                > ::fromAny(_newValue, _t0);
        ::amalthea::ContinuousValueWeibullEstimatorsDistribution::setPRemainPromille(
                _t0);
        return;
    }
    }
    throw std::runtime_error(
            "ContinuousValueWeibullEstimatorsDistribution::eSet Error. FeatureID:"
                    + _featureID);
}

::ecore::EBoolean ContinuousValueWeibullEstimatorsDistribution::eIsSet(
        ::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::CONTINUOUSVALUEINTERVAL__LOWERBOUND:
    case ::amalthea::AmaltheaPackage::CONTINUOUSVALUEINTERVAL__UPPERBOUND:
    {
        return amalthea::ContinuousValueInterval::eIsSet(_featureID);
    }
    case ::amalthea::AmaltheaPackage::CONTINUOUSVALUEWEIBULLESTIMATORSDISTRIBUTION__AVERAGE:
    {
        return m_average != 0.0;
    }
    case ::amalthea::AmaltheaPackage::CONTINUOUSVALUEWEIBULLESTIMATORSDISTRIBUTION__PREMAINPROMILLE:
    {
        return m_pRemainPromille != 1.0;
    }
    }
    throw std::runtime_error(
            "ContinuousValueWeibullEstimatorsDistribution::eIsSet Error. FeatureID:"
                    + _featureID);
}

void ContinuousValueWeibullEstimatorsDistribution::eUnset(
        ::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "ContinuousValueWeibullEstimatorsDistribution::eUnset Error. FeatureID:"
                    + _featureID);
}

::ecore::EClass_ptr ContinuousValueWeibullEstimatorsDistribution::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getContinuousValueWeibullEstimatorsDistribution();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void ContinuousValueWeibullEstimatorsDistribution::_inverseAdd(
        ::ecore::EInt _featureID, ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void ContinuousValueWeibullEstimatorsDistribution::_inverseRemove(
        ::ecore::EInt _featureID, ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

