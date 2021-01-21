// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/TimeStatisticsImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "TimeStatistics.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/BoundedTimeDistribution.hpp>
#include <amalthea/Time.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(TimeStatisticsImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void TimeStatistics::_initialize()
{
    // Supertypes
    ::amalthea::BoundedTimeDistribution::_initialize();

    // References
    if (m_average)
    {
        m_average->_initialize();
    }

    /*PROTECTED REGION ID(TimeStatisticsImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject TimeStatistics::eGet(::ecore::EInt _featureID,
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
    case ::amalthea::AmaltheaPackage::TIMESTATISTICS__AVERAGE:
    {
        if (m_average)
            _any = ::ecore::as < ::ecore::EObject > (m_average);
        return _any;
    }
    }
    throw std::runtime_error(
            "TimeStatistics::eGet Error. FeatureID:" + _featureID);
}

void TimeStatistics::eSet(::ecore::EInt _featureID,
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
    case ::amalthea::AmaltheaPackage::TIMESTATISTICS__AVERAGE:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::Time_ptr _t1 = dynamic_cast< ::amalthea::Time* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::Time >(_t0);*/
        ::amalthea::TimeStatistics::setAverage(_t1);
        return;
    }
    }
    throw std::runtime_error(
            "TimeStatistics::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean TimeStatistics::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::TIMEINTERVAL__LOWERBOUND:
    case ::amalthea::AmaltheaPackage::TIMEINTERVAL__UPPERBOUND:
    {
        return amalthea::TimeInterval::eIsSet(_featureID);
    }
    case ::amalthea::AmaltheaPackage::TIMESTATISTICS__AVERAGE:
    {
        return (bool) m_average;
    }
    }
    throw std::runtime_error(
            "TimeStatistics::eIsSet Error. FeatureID:" + _featureID);
}

void TimeStatistics::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "TimeStatistics::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr TimeStatistics::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getTimeStatistics();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void TimeStatistics::_inverseAdd(::ecore::EInt _featureID,
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
    case ::amalthea::AmaltheaPackage::TIMESTATISTICS__AVERAGE:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void TimeStatistics::_inverseRemove(::ecore::EInt _featureID,
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
    case ::amalthea::AmaltheaPackage::TIMESTATISTICS__AVERAGE:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

