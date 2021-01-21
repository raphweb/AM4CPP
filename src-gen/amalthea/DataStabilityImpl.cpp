// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/DataStabilityImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "DataStability.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(DataStabilityImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void DataStability::_initialize()
{
    // Supertypes

    // References

    /*PROTECTED REGION ID(DataStabilityImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject DataStability::eGet(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::DATASTABILITY__ENABLED:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EBoolean
                > ::toAny(_any, m_enabled);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::DATASTABILITY__ALGORITHM:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::toAny(_any, m_algorithm);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::DATASTABILITY__ACCESSMULTIPLICITY:
    {
        ::ecorecpp::mapping::any_traits < ::amalthea::AccessMultiplicity
                > ::toAny(_any, m_accessMultiplicity);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::DATASTABILITY__LEVEL:
    {
        ::ecorecpp::mapping::any_traits < ::amalthea::DataStabilityLevel
                > ::toAny(_any, m_level);
        return _any;
    }
    }
    throw std::runtime_error(
            "DataStability::eGet Error. FeatureID:" + _featureID);
}

void DataStability::eSet(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::DATASTABILITY__ENABLED:
    {
        ::ecore::EBoolean _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EBoolean
                > ::fromAny(_newValue, _t0);
        ::amalthea::DataStability::setEnabled(_t0);
        return;
    }
    case ::amalthea::AmaltheaPackage::DATASTABILITY__ALGORITHM:
    {
        ::ecore::EString _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::fromAny(_newValue, _t0);
        ::amalthea::DataStability::setAlgorithm(_t0);
        return;
    }
    case ::amalthea::AmaltheaPackage::DATASTABILITY__ACCESSMULTIPLICITY:
    {
        ::amalthea::AccessMultiplicity _t0;
        ::ecorecpp::mapping::any_traits < ::amalthea::AccessMultiplicity
                > ::fromAny(_newValue, _t0);
        ::amalthea::DataStability::setAccessMultiplicity(_t0);
        return;
    }
    case ::amalthea::AmaltheaPackage::DATASTABILITY__LEVEL:
    {
        ::amalthea::DataStabilityLevel _t0;
        ::ecorecpp::mapping::any_traits < ::amalthea::DataStabilityLevel
                > ::fromAny(_newValue, _t0);
        ::amalthea::DataStability::setLevel(_t0);
        return;
    }
    }
    throw std::runtime_error(
            "DataStability::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean DataStability::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::DATASTABILITY__ENABLED:
    {
        return m_enabled != false;
    }
    case ::amalthea::AmaltheaPackage::DATASTABILITY__ALGORITHM:
    {
        return ::ecorecpp::mapping::set_traits < ::ecore::EString
                > ::is_set(m_algorithm);
    }
    case ::amalthea::AmaltheaPackage::DATASTABILITY__ACCESSMULTIPLICITY:
    {
        return ::ecorecpp::mapping::set_traits < ::amalthea::AccessMultiplicity
                > ::is_set(m_accessMultiplicity);
    }
    case ::amalthea::AmaltheaPackage::DATASTABILITY__LEVEL:
    {
        return ::ecorecpp::mapping::set_traits < ::amalthea::DataStabilityLevel
                > ::is_set(m_level);
    }
    }
    throw std::runtime_error(
            "DataStability::eIsSet Error. FeatureID:" + _featureID);
}

void DataStability::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "DataStability::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr DataStability::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getDataStability();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void DataStability::_inverseAdd(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void DataStability::_inverseRemove(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

