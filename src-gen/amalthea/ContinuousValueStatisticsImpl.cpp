// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/ContinuousValueStatisticsImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "ContinuousValueStatistics.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/BoundedContinuousValueDistribution.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(ContinuousValueStatisticsImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void ContinuousValueStatistics::_initialize()
{
    // Supertypes
    ::amalthea::BoundedContinuousValueDistribution::_initialize();

    // References

    /*PROTECTED REGION ID(ContinuousValueStatisticsImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject ContinuousValueStatistics::eGet(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::CONTINUOUSVALUEINTERVAL__LOWERBOUND:
    case ::amalthea::AmaltheaPackage::CONTINUOUSVALUEINTERVAL__UPPERBOUND:
    {
        return amalthea::ContinuousValueInterval::eGet(_featureID, _resolve);
    }
    case ::amalthea::AmaltheaPackage::CONTINUOUSVALUESTATISTICS__AVERAGE:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EDoubleObject
                > ::toAny(_any, m_average);
        return _any;
    }
    }
    throw std::runtime_error(
            "ContinuousValueStatistics::eGet Error. FeatureID:" + _featureID);
}

void ContinuousValueStatistics::eSet(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::CONTINUOUSVALUEINTERVAL__LOWERBOUND:
    case ::amalthea::AmaltheaPackage::CONTINUOUSVALUEINTERVAL__UPPERBOUND:
    {
        amalthea::ContinuousValueInterval::eSet(_featureID, _newValue);
        return;
    }
    case ::amalthea::AmaltheaPackage::CONTINUOUSVALUESTATISTICS__AVERAGE:
    {
        ::ecore::EDoubleObject _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EDoubleObject
                > ::fromAny(_newValue, _t0);
        ::amalthea::ContinuousValueStatistics::setAverage(_t0);
        return;
    }
    }
    throw std::runtime_error(
            "ContinuousValueStatistics::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean ContinuousValueStatistics::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::CONTINUOUSVALUEINTERVAL__LOWERBOUND:
    case ::amalthea::AmaltheaPackage::CONTINUOUSVALUEINTERVAL__UPPERBOUND:
    {
        return amalthea::ContinuousValueInterval::eIsSet(_featureID);
    }
    case ::amalthea::AmaltheaPackage::CONTINUOUSVALUESTATISTICS__AVERAGE:
    {
        return m_average != 0.0;
    }
    }
    throw std::runtime_error(
            "ContinuousValueStatistics::eIsSet Error. FeatureID:" + _featureID);
}

void ContinuousValueStatistics::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "ContinuousValueStatistics::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr ContinuousValueStatistics::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getContinuousValueStatistics();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void ContinuousValueStatistics::_inverseAdd(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void ContinuousValueStatistics::_inverseRemove(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

