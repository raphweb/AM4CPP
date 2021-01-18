// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/TimeBoundariesImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "TimeBoundaries.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/BoundedTimeDistribution.hpp>
#include <amalthea/Time.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(TimeBoundariesImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void TimeBoundaries::_initialize()
{
    // Supertypes
    ::amalthea::BoundedTimeDistribution::_initialize();

    // References

    /*PROTECTED REGION ID(TimeBoundariesImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject TimeBoundaries::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::TIMEINTERVAL__LOWERBOUND:
    case ::amalthea::AmaltheaPackage::TIMEINTERVAL__UPPERBOUND:
    {
        return amalthea::TimeInterval::eGet(_featureID, _resolve);
    }
    case ::amalthea::AmaltheaPackage::TIMEBOUNDARIES__SAMPLINGTYPE:
    {
        ::ecorecpp::mapping::any_traits < ::amalthea::SamplingType
                > ::toAny(_any, m_samplingType);
        return _any;
    }
    }
    throw std::runtime_error(
            "TimeBoundaries::eGet Error. FeatureID:" + _featureID);
}

void TimeBoundaries::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::TIMEINTERVAL__LOWERBOUND:
    case ::amalthea::AmaltheaPackage::TIMEINTERVAL__UPPERBOUND:
    {
        amalthea::TimeInterval::eSet(_featureID, _newValue);
        return;
    }
    case ::amalthea::AmaltheaPackage::TIMEBOUNDARIES__SAMPLINGTYPE:
    {
        ::amalthea::SamplingType _t0;
        ::ecorecpp::mapping::any_traits < ::amalthea::SamplingType
                > ::fromAny(_newValue, _t0);
        ::amalthea::TimeBoundaries::setSamplingType(_t0);
        return;
    }
    }
    throw std::runtime_error(
            "TimeBoundaries::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean TimeBoundaries::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::TIMEINTERVAL__LOWERBOUND:
    case ::amalthea::AmaltheaPackage::TIMEINTERVAL__UPPERBOUND:
    {
        return amalthea::TimeInterval::eIsSet(_featureID);
    }
    case ::amalthea::AmaltheaPackage::TIMEBOUNDARIES__SAMPLINGTYPE:
    {
        return ::ecorecpp::mapping::set_traits < ::amalthea::SamplingType
                > ::is_set(m_samplingType);
    }
    }
    throw std::runtime_error(
            "TimeBoundaries::eIsSet Error. FeatureID:" + _featureID);
}

void TimeBoundaries::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "TimeBoundaries::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr TimeBoundaries::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getTimeBoundaries();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void TimeBoundaries::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::TIMEINTERVAL__LOWERBOUND:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::TIMEINTERVAL__UPPERBOUND:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void TimeBoundaries::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::TIMEINTERVAL__LOWERBOUND:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::TIMEINTERVAL__UPPERBOUND:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

