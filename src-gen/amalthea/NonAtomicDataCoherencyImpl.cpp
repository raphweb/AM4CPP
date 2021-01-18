// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/NonAtomicDataCoherencyImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "NonAtomicDataCoherency.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(NonAtomicDataCoherencyImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void NonAtomicDataCoherency::_initialize()
{
    // Supertypes

    // References

    /*PROTECTED REGION ID(NonAtomicDataCoherencyImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject NonAtomicDataCoherency::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::NONATOMICDATACOHERENCY__ENABLED:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EBoolean
                > ::toAny(_any, m_enabled);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::NONATOMICDATACOHERENCY__ALGORITHM:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::toAny(_any, m_algorithm);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::NONATOMICDATACOHERENCY__ACCESSMULTIPLICITY:
    {
        ::ecorecpp::mapping::any_traits < ::amalthea::AccessMultiplicity
                > ::toAny(_any, m_accessMultiplicity);
        return _any;
    }
    }
    throw std::runtime_error(
            "NonAtomicDataCoherency::eGet Error. FeatureID:" + _featureID);
}

void NonAtomicDataCoherency::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::NONATOMICDATACOHERENCY__ENABLED:
    {
        ::ecore::EBoolean _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EBoolean
                > ::fromAny(_newValue, _t0);
        ::amalthea::NonAtomicDataCoherency::setEnabled(_t0);
        return;
    }
    case ::amalthea::AmaltheaPackage::NONATOMICDATACOHERENCY__ALGORITHM:
    {
        ::ecore::EString _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::fromAny(_newValue, _t0);
        ::amalthea::NonAtomicDataCoherency::setAlgorithm(_t0);
        return;
    }
    case ::amalthea::AmaltheaPackage::NONATOMICDATACOHERENCY__ACCESSMULTIPLICITY:
    {
        ::amalthea::AccessMultiplicity _t0;
        ::ecorecpp::mapping::any_traits < ::amalthea::AccessMultiplicity
                > ::fromAny(_newValue, _t0);
        ::amalthea::NonAtomicDataCoherency::setAccessMultiplicity(_t0);
        return;
    }
    }
    throw std::runtime_error(
            "NonAtomicDataCoherency::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean NonAtomicDataCoherency::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::NONATOMICDATACOHERENCY__ENABLED:
    {
        return m_enabled != false;
    }
    case ::amalthea::AmaltheaPackage::NONATOMICDATACOHERENCY__ALGORITHM:
    {
        return ::ecorecpp::mapping::set_traits < ::ecore::EString
                > ::is_set(m_algorithm);
    }
    case ::amalthea::AmaltheaPackage::NONATOMICDATACOHERENCY__ACCESSMULTIPLICITY:
    {
        return ::ecorecpp::mapping::set_traits < ::amalthea::AccessMultiplicity
                > ::is_set(m_accessMultiplicity);
    }
    }
    throw std::runtime_error(
            "NonAtomicDataCoherency::eIsSet Error. FeatureID:" + _featureID);
}

void NonAtomicDataCoherency::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "NonAtomicDataCoherency::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr NonAtomicDataCoherency::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getNonAtomicDataCoherency();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void NonAtomicDataCoherency::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void NonAtomicDataCoherency::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

