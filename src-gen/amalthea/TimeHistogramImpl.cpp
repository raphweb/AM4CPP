// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/TimeHistogramImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "TimeHistogram.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/ITimeDeviation.hpp>
#include <amalthea/TimeHistogramEntry.hpp>
#include <amalthea/Time.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(TimeHistogramImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void TimeHistogram::_initialize()
{
    // Supertypes
    ::amalthea::ITimeDeviation::_initialize();

    // References
    for (size_t i = 0; i < m_entries->size(); i++)
    {
        (*m_entries)[i]->_initialize();
    }

    /*PROTECTED REGION ID(TimeHistogramImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

::amalthea::Time_ptr TimeHistogram::getLowerBound()
{
    /*PROTECTED REGION ID(TimeHistogramImpl_getLowerBound) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    throw "UnsupportedOperationException: amalthea::TimeHistogram::getLowerBound";
    /*PROTECTED REGION END*/
}

::amalthea::Time_ptr TimeHistogram::getUpperBound()
{
    /*PROTECTED REGION ID(TimeHistogramImpl_getUpperBound) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    throw "UnsupportedOperationException: amalthea::TimeHistogram::getUpperBound";
    /*PROTECTED REGION END*/
}

::amalthea::Time_ptr TimeHistogram::getAverage()
{
    /*PROTECTED REGION ID(TimeHistogramImpl_getAverage) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    throw "UnsupportedOperationException: amalthea::TimeHistogram::getAverage";
    /*PROTECTED REGION END*/
}

// EObject
::ecore::EJavaObject TimeHistogram::eGet(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::TIMEHISTOGRAM__ENTRIES:
    {
        _any = m_entries->asEListOf< ::ecore::EObject_ptr >();
        return _any;
    }
    }
    throw std::runtime_error(
            "TimeHistogram::eGet Error. FeatureID:" + _featureID);
}

void TimeHistogram::eSet(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::TIMEHISTOGRAM__ENTRIES:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::amalthea::TimeHistogram::getEntries().clear();
        ::amalthea::TimeHistogram::getEntries().insert_all(*_t0);
        return;
    }
    }
    throw std::runtime_error(
            "TimeHistogram::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean TimeHistogram::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::TIMEHISTOGRAM__ENTRIES:
    {
        return m_entries && m_entries->size();
    }
    }
    throw std::runtime_error(
            "TimeHistogram::eIsSet Error. FeatureID:" + _featureID);
}

void TimeHistogram::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "TimeHistogram::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr TimeHistogram::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getTimeHistogram();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void TimeHistogram::_inverseAdd(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::TIMEHISTOGRAM__ENTRIES:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void TimeHistogram::_inverseRemove(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::TIMEHISTOGRAM__ENTRIES:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

