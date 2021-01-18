// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/TimeIntervalImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "TimeInterval.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/Time.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(TimeIntervalImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void TimeInterval::_initialize()
{
    // Supertypes

    // References
    if (m_lowerBound)
    {
        m_lowerBound->_initialize();
    }
    if (m_upperBound)
    {
        m_upperBound->_initialize();
    }

    /*PROTECTED REGION ID(TimeIntervalImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

::amalthea::Time_ptr TimeInterval::getAverage()
{
    /*PROTECTED REGION ID(TimeIntervalImpl_getAverage) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    throw "UnsupportedOperationException: amalthea::TimeInterval::getAverage";
    /*PROTECTED REGION END*/
}

::ecore::EBoolean TimeInterval::validateInvariants(
        ::ecore::EDiagnosticChain _diagnostics,
        std::map< ::ecore::EJavaObject, ::ecore::EJavaObject > const &_context)
{
    /*PROTECTED REGION ID(TimeIntervalImpl_validateInvariants) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    throw "UnsupportedOperationException: amalthea::TimeInterval::validateInvariants";
    /*PROTECTED REGION END*/
}

// EObject
::ecore::EJavaObject TimeInterval::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::TIMEINTERVAL__LOWERBOUND:
    {
        if (m_lowerBound)
            _any = ::ecore::as < ::ecore::EObject > (m_lowerBound);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::TIMEINTERVAL__UPPERBOUND:
    {
        if (m_upperBound)
            _any = ::ecore::as < ::ecore::EObject > (m_upperBound);
        return _any;
    }
    }
    throw std::runtime_error(
            "TimeInterval::eGet Error. FeatureID:" + _featureID);
}

void TimeInterval::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::TIMEINTERVAL__LOWERBOUND:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::Time_ptr _t1 = dynamic_cast< ::amalthea::Time* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::Time >(_t0);*/
        ::amalthea::TimeInterval::setLowerBound(_t1);
        return;
    }
    case ::amalthea::AmaltheaPackage::TIMEINTERVAL__UPPERBOUND:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::Time_ptr _t1 = dynamic_cast< ::amalthea::Time* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::Time >(_t0);*/
        ::amalthea::TimeInterval::setUpperBound(_t1);
        return;
    }
    }
    throw std::runtime_error(
            "TimeInterval::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean TimeInterval::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::TIMEINTERVAL__LOWERBOUND:
    {
        return (bool) m_lowerBound;
    }
    case ::amalthea::AmaltheaPackage::TIMEINTERVAL__UPPERBOUND:
    {
        return (bool) m_upperBound;
    }
    }
    throw std::runtime_error(
            "TimeInterval::eIsSet Error. FeatureID:" + _featureID);
}

void TimeInterval::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "TimeInterval::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr TimeInterval::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getTimeInterval();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void TimeInterval::_inverseAdd(::ecore::EInt _featureID,
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
void TimeInterval::_inverseRemove(::ecore::EInt _featureID,
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

