// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/TimeHistogramEntryImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "TimeHistogramEntry.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/TimeInterval.hpp>
#include <amalthea/Time.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(TimeHistogramEntryImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void TimeHistogramEntry::_initialize()
{
    // Supertypes
    ::amalthea::TimeInterval::_initialize();

    // References

    /*PROTECTED REGION ID(TimeHistogramEntryImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject TimeHistogramEntry::eGet(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::TIMEINTERVAL__LOWERBOUND:
    case ::amalthea::AmaltheaPackage::TIMEINTERVAL__UPPERBOUND:
    {
        return amalthea::TimeInterval::eGet(_featureID, _resolve);
    }
    case ::amalthea::AmaltheaPackage::TIMEHISTOGRAMENTRY__OCCURRENCES:
    {
        ::ecorecpp::mapping::any_traits < ::amalthea::PositiveLong
                > ::toAny(_any, m_occurrences);
        return _any;
    }
    }
    throw std::runtime_error(
            "TimeHistogramEntry::eGet Error. FeatureID:" + _featureID);
}

void TimeHistogramEntry::eSet(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::TIMEINTERVAL__LOWERBOUND:
    case ::amalthea::AmaltheaPackage::TIMEINTERVAL__UPPERBOUND:
    {
        amalthea::TimeInterval::eSet(_featureID, _newValue);
        return;
    }
    case ::amalthea::AmaltheaPackage::TIMEHISTOGRAMENTRY__OCCURRENCES:
    {
        ::amalthea::PositiveLong _t0;
        ::ecorecpp::mapping::any_traits < ::amalthea::PositiveLong
                > ::fromAny(_newValue, _t0);
        ::amalthea::TimeHistogramEntry::setOccurrences(_t0);
        return;
    }
    }
    throw std::runtime_error(
            "TimeHistogramEntry::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean TimeHistogramEntry::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::TIMEINTERVAL__LOWERBOUND:
    case ::amalthea::AmaltheaPackage::TIMEINTERVAL__UPPERBOUND:
    {
        return amalthea::TimeInterval::eIsSet(_featureID);
    }
    case ::amalthea::AmaltheaPackage::TIMEHISTOGRAMENTRY__OCCURRENCES:
    {
        return m_occurrences != 1;
    }
    }
    throw std::runtime_error(
            "TimeHistogramEntry::eIsSet Error. FeatureID:" + _featureID);
}

void TimeHistogramEntry::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "TimeHistogramEntry::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr TimeHistogramEntry::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getTimeHistogramEntry();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void TimeHistogramEntry::_inverseAdd(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
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
void TimeHistogramEntry::_inverseRemove(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_oldValue)
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

