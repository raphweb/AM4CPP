// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/ContinuousValueBoundariesImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "ContinuousValueBoundaries.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/BoundedContinuousValueDistribution.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(ContinuousValueBoundariesImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void ContinuousValueBoundaries::_initialize()
{
    // Supertypes
    ::amalthea::BoundedContinuousValueDistribution::_initialize();

    // References

    /*PROTECTED REGION ID(ContinuousValueBoundariesImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject ContinuousValueBoundaries::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::CONTINUOUSVALUEINTERVAL__LOWERBOUND:
    case ::amalthea::AmaltheaPackage::CONTINUOUSVALUEINTERVAL__UPPERBOUND:
    {
        return amalthea::ContinuousValueInterval::eGet(_featureID, _resolve);
    }
    case ::amalthea::AmaltheaPackage::CONTINUOUSVALUEBOUNDARIES__SAMPLINGTYPE:
    {
        ::ecorecpp::mapping::any_traits < ::amalthea::SamplingType
                > ::toAny(_any, m_samplingType);
        return _any;
    }
    }
    throw std::runtime_error(
            "ContinuousValueBoundaries::eGet Error. FeatureID:" + _featureID);
}

void ContinuousValueBoundaries::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::CONTINUOUSVALUEINTERVAL__LOWERBOUND:
    case ::amalthea::AmaltheaPackage::CONTINUOUSVALUEINTERVAL__UPPERBOUND:
    {
        amalthea::ContinuousValueInterval::eSet(_featureID, _newValue);
        return;
    }
    case ::amalthea::AmaltheaPackage::CONTINUOUSVALUEBOUNDARIES__SAMPLINGTYPE:
    {
        ::amalthea::SamplingType _t0;
        ::ecorecpp::mapping::any_traits < ::amalthea::SamplingType
                > ::fromAny(_newValue, _t0);
        ::amalthea::ContinuousValueBoundaries::setSamplingType(_t0);
        return;
    }
    }
    throw std::runtime_error(
            "ContinuousValueBoundaries::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean ContinuousValueBoundaries::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::CONTINUOUSVALUEINTERVAL__LOWERBOUND:
    case ::amalthea::AmaltheaPackage::CONTINUOUSVALUEINTERVAL__UPPERBOUND:
    {
        return amalthea::ContinuousValueInterval::eIsSet(_featureID);
    }
    case ::amalthea::AmaltheaPackage::CONTINUOUSVALUEBOUNDARIES__SAMPLINGTYPE:
    {
        return ::ecorecpp::mapping::set_traits < ::amalthea::SamplingType
                > ::is_set(m_samplingType);
    }
    }
    throw std::runtime_error(
            "ContinuousValueBoundaries::eIsSet Error. FeatureID:" + _featureID);
}

void ContinuousValueBoundaries::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "ContinuousValueBoundaries::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr ContinuousValueBoundaries::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getContinuousValueBoundaries();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void ContinuousValueBoundaries::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void ContinuousValueBoundaries::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

