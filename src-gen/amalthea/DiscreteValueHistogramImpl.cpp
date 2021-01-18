// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/DiscreteValueHistogramImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "DiscreteValueHistogram.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/IDiscreteValueDeviation.hpp>
#include <amalthea/DiscreteValueHistogramEntry.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(DiscreteValueHistogramImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void DiscreteValueHistogram::_initialize()
{
    // Supertypes
    ::amalthea::IDiscreteValueDeviation::_initialize();

    // References
    for (size_t i = 0; i < m_entries->size(); i++)
    {
        (*m_entries)[i]->_initialize();
    }

    /*PROTECTED REGION ID(DiscreteValueHistogramImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

::ecore::ELongObject DiscreteValueHistogram::getLowerBound()
{
    /*PROTECTED REGION ID(DiscreteValueHistogramImpl_getLowerBound) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    throw "UnsupportedOperationException: amalthea::DiscreteValueHistogram::getLowerBound";
    /*PROTECTED REGION END*/
}

::ecore::ELongObject DiscreteValueHistogram::getUpperBound()
{
    /*PROTECTED REGION ID(DiscreteValueHistogramImpl_getUpperBound) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    throw "UnsupportedOperationException: amalthea::DiscreteValueHistogram::getUpperBound";
    /*PROTECTED REGION END*/
}

::ecore::EDoubleObject DiscreteValueHistogram::getAverage()
{
    /*PROTECTED REGION ID(DiscreteValueHistogramImpl_getAverage) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    throw "UnsupportedOperationException: amalthea::DiscreteValueHistogram::getAverage";
    /*PROTECTED REGION END*/
}

// EObject
::ecore::EJavaObject DiscreteValueHistogram::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::DISCRETEVALUEHISTOGRAM__ENTRIES:
    {
        _any = m_entries->asEListOf< ::ecore::EObject_ptr >();
        return _any;
    }
    }
    throw std::runtime_error(
            "DiscreteValueHistogram::eGet Error. FeatureID:" + _featureID);
}

void DiscreteValueHistogram::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::DISCRETEVALUEHISTOGRAM__ENTRIES:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::amalthea::DiscreteValueHistogram::getEntries().clear();
        ::amalthea::DiscreteValueHistogram::getEntries().insert_all(*_t0);
        return;
    }
    }
    throw std::runtime_error(
            "DiscreteValueHistogram::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean DiscreteValueHistogram::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::DISCRETEVALUEHISTOGRAM__ENTRIES:
    {
        return m_entries && m_entries->size();
    }
    }
    throw std::runtime_error(
            "DiscreteValueHistogram::eIsSet Error. FeatureID:" + _featureID);
}

void DiscreteValueHistogram::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "DiscreteValueHistogram::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr DiscreteValueHistogram::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getDiscreteValueHistogram();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void DiscreteValueHistogram::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::DISCRETEVALUEHISTOGRAM__ENTRIES:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void DiscreteValueHistogram::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::DISCRETEVALUEHISTOGRAM__ENTRIES:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

