// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/TruncatedTimeDistributionImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "TruncatedTimeDistribution.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/ITimeDeviation.hpp>
#include <amalthea/Time.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(TruncatedTimeDistributionImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void TruncatedTimeDistribution::_initialize()
{
    // Supertypes
    ::amalthea::ITimeDeviation::_initialize();

    // References
    if (m_lowerBound)
    {
        m_lowerBound->_initialize();
    }
    if (m_upperBound)
    {
        m_upperBound->_initialize();
    }

    /*PROTECTED REGION ID(TruncatedTimeDistributionImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

::ecore::EBoolean TruncatedTimeDistribution::validateInvariants(
        ::ecore::EDiagnosticChain _diagnostics,
        std::map< ::ecore::EJavaObject, ::ecore::EJavaObject > const &_context)
{
    /*PROTECTED REGION ID(TruncatedTimeDistributionImpl_validateInvariants) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    throw "UnsupportedOperationException: amalthea::TruncatedTimeDistribution::validateInvariants";
    /*PROTECTED REGION END*/
}

// EObject
::ecore::EJavaObject TruncatedTimeDistribution::eGet(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::TRUNCATEDTIMEDISTRIBUTION__LOWERBOUND:
    {
        if (m_lowerBound)
            _any = ::ecore::as < ::ecore::EObject > (m_lowerBound);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::TRUNCATEDTIMEDISTRIBUTION__UPPERBOUND:
    {
        if (m_upperBound)
            _any = ::ecore::as < ::ecore::EObject > (m_upperBound);
        return _any;
    }
    }
    throw std::runtime_error(
            "TruncatedTimeDistribution::eGet Error. FeatureID:" + _featureID);
}

void TruncatedTimeDistribution::eSet(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::TRUNCATEDTIMEDISTRIBUTION__LOWERBOUND:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::Time_ptr _t1 = dynamic_cast< ::amalthea::Time* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::Time >(_t0);*/
        ::amalthea::TruncatedTimeDistribution::setLowerBound(_t1);
        return;
    }
    case ::amalthea::AmaltheaPackage::TRUNCATEDTIMEDISTRIBUTION__UPPERBOUND:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::Time_ptr _t1 = dynamic_cast< ::amalthea::Time* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::Time >(_t0);*/
        ::amalthea::TruncatedTimeDistribution::setUpperBound(_t1);
        return;
    }
    }
    throw std::runtime_error(
            "TruncatedTimeDistribution::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean TruncatedTimeDistribution::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::TRUNCATEDTIMEDISTRIBUTION__LOWERBOUND:
    {
        return (bool) m_lowerBound;
    }
    case ::amalthea::AmaltheaPackage::TRUNCATEDTIMEDISTRIBUTION__UPPERBOUND:
    {
        return (bool) m_upperBound;
    }
    }
    throw std::runtime_error(
            "TruncatedTimeDistribution::eIsSet Error. FeatureID:" + _featureID);
}

void TruncatedTimeDistribution::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "TruncatedTimeDistribution::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr TruncatedTimeDistribution::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getTruncatedTimeDistribution();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void TruncatedTimeDistribution::_inverseAdd(::ecore::EInt _featureID,
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

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void TruncatedTimeDistribution::_inverseRemove(::ecore::EInt _featureID,
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

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

