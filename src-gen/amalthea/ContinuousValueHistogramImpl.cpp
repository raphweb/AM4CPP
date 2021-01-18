// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/ContinuousValueHistogramImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "ContinuousValueHistogram.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/IContinuousValueDeviation.hpp>
#include <amalthea/ContinuousValueHistogramEntry.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(ContinuousValueHistogramImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void ContinuousValueHistogram::_initialize()
{
    // Supertypes
    ::amalthea::IContinuousValueDeviation::_initialize();

    // References
    for (size_t i = 0; i < m_entries->size(); i++)
    {
        (*m_entries)[i]->_initialize();
    }

    /*PROTECTED REGION ID(ContinuousValueHistogramImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

::ecore::EDoubleObject ContinuousValueHistogram::getLowerBound()
{
    /*PROTECTED REGION ID(ContinuousValueHistogramImpl_getLowerBound) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    throw "UnsupportedOperationException: amalthea::ContinuousValueHistogram::getLowerBound";
    /*PROTECTED REGION END*/
}

::ecore::EDoubleObject ContinuousValueHistogram::getUpperBound()
{
    /*PROTECTED REGION ID(ContinuousValueHistogramImpl_getUpperBound) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    throw "UnsupportedOperationException: amalthea::ContinuousValueHistogram::getUpperBound";
    /*PROTECTED REGION END*/
}

::ecore::EDoubleObject ContinuousValueHistogram::getAverage()
{
    /*PROTECTED REGION ID(ContinuousValueHistogramImpl_getAverage) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    throw "UnsupportedOperationException: amalthea::ContinuousValueHistogram::getAverage";
    /*PROTECTED REGION END*/
}

// EObject
::ecore::EJavaObject ContinuousValueHistogram::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::CONTINUOUSVALUEHISTOGRAM__ENTRIES:
    {
        _any = m_entries->asEListOf< ::ecore::EObject_ptr >();
        return _any;
    }
    }
    throw std::runtime_error(
            "ContinuousValueHistogram::eGet Error. FeatureID:" + _featureID);
}

void ContinuousValueHistogram::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::CONTINUOUSVALUEHISTOGRAM__ENTRIES:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::amalthea::ContinuousValueHistogram::getEntries().clear();
        ::amalthea::ContinuousValueHistogram::getEntries().insert_all(*_t0);
        return;
    }
    }
    throw std::runtime_error(
            "ContinuousValueHistogram::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean ContinuousValueHistogram::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::CONTINUOUSVALUEHISTOGRAM__ENTRIES:
    {
        return m_entries && m_entries->size();
    }
    }
    throw std::runtime_error(
            "ContinuousValueHistogram::eIsSet Error. FeatureID:" + _featureID);
}

void ContinuousValueHistogram::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "ContinuousValueHistogram::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr ContinuousValueHistogram::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getContinuousValueHistogram();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void ContinuousValueHistogram::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::CONTINUOUSVALUEHISTOGRAM__ENTRIES:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void ContinuousValueHistogram::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::CONTINUOUSVALUEHISTOGRAM__ENTRIES:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

