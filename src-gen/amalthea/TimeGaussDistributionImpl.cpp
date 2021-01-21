// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/TimeGaussDistributionImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "TimeGaussDistribution.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/TruncatedTimeDistribution.hpp>
#include <amalthea/Time.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(TimeGaussDistributionImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void TimeGaussDistribution::_initialize()
{
    // Supertypes
    ::amalthea::TruncatedTimeDistribution::_initialize();

    // References
    if (m_mean)
    {
        m_mean->_initialize();
    }
    if (m_sd)
    {
        m_sd->_initialize();
    }

    /*PROTECTED REGION ID(TimeGaussDistributionImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

::amalthea::Time_ptr TimeGaussDistribution::getAverage()
{
    /*PROTECTED REGION ID(TimeGaussDistributionImpl_getAverage) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    throw "UnsupportedOperationException: amalthea::TimeGaussDistribution::getAverage";
    /*PROTECTED REGION END*/
}

// EObject
::ecore::EJavaObject TimeGaussDistribution::eGet(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::TRUNCATEDTIMEDISTRIBUTION__LOWERBOUND:
    case ::amalthea::AmaltheaPackage::TRUNCATEDTIMEDISTRIBUTION__UPPERBOUND:
    {
        return amalthea::TruncatedTimeDistribution::eGet(_featureID, _resolve);
    }
    case ::amalthea::AmaltheaPackage::TIMEGAUSSDISTRIBUTION__MEAN:
    {
        if (m_mean)
            _any = ::ecore::as < ::ecore::EObject > (m_mean);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::TIMEGAUSSDISTRIBUTION__SD:
    {
        if (m_sd)
            _any = ::ecore::as < ::ecore::EObject > (m_sd);
        return _any;
    }
    }
    throw std::runtime_error(
            "TimeGaussDistribution::eGet Error. FeatureID:" + _featureID);
}

void TimeGaussDistribution::eSet(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::TRUNCATEDTIMEDISTRIBUTION__LOWERBOUND:
    case ::amalthea::AmaltheaPackage::TRUNCATEDTIMEDISTRIBUTION__UPPERBOUND:
    {
        amalthea::TruncatedTimeDistribution::eSet(_featureID, _newValue);
        return;
    }
    case ::amalthea::AmaltheaPackage::TIMEGAUSSDISTRIBUTION__MEAN:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::Time_ptr _t1 = dynamic_cast< ::amalthea::Time* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::Time >(_t0);*/
        ::amalthea::TimeGaussDistribution::setMean(_t1);
        return;
    }
    case ::amalthea::AmaltheaPackage::TIMEGAUSSDISTRIBUTION__SD:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::Time_ptr _t1 = dynamic_cast< ::amalthea::Time* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::Time >(_t0);*/
        ::amalthea::TimeGaussDistribution::setSd(_t1);
        return;
    }
    }
    throw std::runtime_error(
            "TimeGaussDistribution::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean TimeGaussDistribution::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::TRUNCATEDTIMEDISTRIBUTION__LOWERBOUND:
    case ::amalthea::AmaltheaPackage::TRUNCATEDTIMEDISTRIBUTION__UPPERBOUND:
    {
        return amalthea::TruncatedTimeDistribution::eIsSet(_featureID);
    }
    case ::amalthea::AmaltheaPackage::TIMEGAUSSDISTRIBUTION__MEAN:
    {
        return (bool) m_mean;
    }
    case ::amalthea::AmaltheaPackage::TIMEGAUSSDISTRIBUTION__SD:
    {
        return (bool) m_sd;
    }
    }
    throw std::runtime_error(
            "TimeGaussDistribution::eIsSet Error. FeatureID:" + _featureID);
}

void TimeGaussDistribution::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "TimeGaussDistribution::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr TimeGaussDistribution::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getTimeGaussDistribution();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void TimeGaussDistribution::_inverseAdd(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::TRUNCATEDTIMEDISTRIBUTION__LOWERBOUND:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::TRUNCATEDTIMEDISTRIBUTION__UPPERBOUND:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::TIMEGAUSSDISTRIBUTION__MEAN:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::TIMEGAUSSDISTRIBUTION__SD:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void TimeGaussDistribution::_inverseRemove(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::TRUNCATEDTIMEDISTRIBUTION__LOWERBOUND:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::TRUNCATEDTIMEDISTRIBUTION__UPPERBOUND:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::TIMEGAUSSDISTRIBUTION__MEAN:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::TIMEGAUSSDISTRIBUTION__SD:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

