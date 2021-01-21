// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/ContinuousValueHistogramEntryImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "ContinuousValueHistogramEntry.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/ContinuousValueInterval.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(ContinuousValueHistogramEntryImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void ContinuousValueHistogramEntry::_initialize()
{
    // Supertypes
    ::amalthea::ContinuousValueInterval::_initialize();

    // References

    /*PROTECTED REGION ID(ContinuousValueHistogramEntryImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject ContinuousValueHistogramEntry::eGet(
        ::ecore::EInt _featureID, [[maybe_unused]] ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::CONTINUOUSVALUEINTERVAL__LOWERBOUND:
    case ::amalthea::AmaltheaPackage::CONTINUOUSVALUEINTERVAL__UPPERBOUND:
    {
        return amalthea::ContinuousValueInterval::eGet(_featureID, _resolve);
    }
    case ::amalthea::AmaltheaPackage::CONTINUOUSVALUEHISTOGRAMENTRY__OCCURRENCES:
    {
        ::ecorecpp::mapping::any_traits < ::amalthea::PositiveLong
                > ::toAny(_any, m_occurrences);
        return _any;
    }
    }
    throw std::runtime_error(
            "ContinuousValueHistogramEntry::eGet Error. FeatureID:"
                    + _featureID);
}

void ContinuousValueHistogramEntry::eSet(::ecore::EInt _featureID,
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
    case ::amalthea::AmaltheaPackage::CONTINUOUSVALUEHISTOGRAMENTRY__OCCURRENCES:
    {
        ::amalthea::PositiveLong _t0;
        ::ecorecpp::mapping::any_traits < ::amalthea::PositiveLong
                > ::fromAny(_newValue, _t0);
        ::amalthea::ContinuousValueHistogramEntry::setOccurrences(_t0);
        return;
    }
    }
    throw std::runtime_error(
            "ContinuousValueHistogramEntry::eSet Error. FeatureID:"
                    + _featureID);
}

::ecore::EBoolean ContinuousValueHistogramEntry::eIsSet(
        ::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::CONTINUOUSVALUEINTERVAL__LOWERBOUND:
    case ::amalthea::AmaltheaPackage::CONTINUOUSVALUEINTERVAL__UPPERBOUND:
    {
        return amalthea::ContinuousValueInterval::eIsSet(_featureID);
    }
    case ::amalthea::AmaltheaPackage::CONTINUOUSVALUEHISTOGRAMENTRY__OCCURRENCES:
    {
        return m_occurrences != 1;
    }
    }
    throw std::runtime_error(
            "ContinuousValueHistogramEntry::eIsSet Error. FeatureID:"
                    + _featureID);
}

void ContinuousValueHistogramEntry::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "ContinuousValueHistogramEntry::eUnset Error. FeatureID:"
                    + _featureID);
}

::ecore::EClass_ptr ContinuousValueHistogramEntry::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getContinuousValueHistogramEntry();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void ContinuousValueHistogramEntry::_inverseAdd(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void ContinuousValueHistogramEntry::_inverseRemove(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

