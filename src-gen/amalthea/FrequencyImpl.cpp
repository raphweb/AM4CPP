// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/FrequencyImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "Frequency.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/Quantity.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(FrequencyImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void Frequency::_initialize()
{
    // Supertypes
    ::amalthea::Quantity::_initialize();

    // References

    /*PROTECTED REGION ID(FrequencyImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

::ecore::EString Frequency::toString()
{
    /*PROTECTED REGION ID(FrequencyImpl_toString) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    throw "UnsupportedOperationException: amalthea::Frequency::toString";
    /*PROTECTED REGION END*/
}

// EObject
::ecore::EJavaObject Frequency::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::FREQUENCY__VALUE:
    {
        ::ecorecpp::mapping::any_traits < ::amalthea::NonNegativeDouble
                > ::toAny(_any, m_value);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::FREQUENCY__UNIT:
    {
        ::ecorecpp::mapping::any_traits < ::amalthea::FrequencyUnit
                > ::toAny(_any, m_unit);
        return _any;
    }
    }
    throw std::runtime_error("Frequency::eGet Error. FeatureID:" + _featureID);
}

void Frequency::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::FREQUENCY__VALUE:
    {
        ::amalthea::NonNegativeDouble _t0;
        ::ecorecpp::mapping::any_traits < ::amalthea::NonNegativeDouble
                > ::fromAny(_newValue, _t0);
        ::amalthea::Frequency::setValue(_t0);
        return;
    }
    case ::amalthea::AmaltheaPackage::FREQUENCY__UNIT:
    {
        ::amalthea::FrequencyUnit _t0;
        ::ecorecpp::mapping::any_traits < ::amalthea::FrequencyUnit
                > ::fromAny(_newValue, _t0);
        ::amalthea::Frequency::setUnit(_t0);
        return;
    }
    }
    throw std::runtime_error("Frequency::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean Frequency::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::FREQUENCY__VALUE:
    {
        return m_value != 0.0;
    }
    case ::amalthea::AmaltheaPackage::FREQUENCY__UNIT:
    {
        return ::ecorecpp::mapping::set_traits < ::amalthea::FrequencyUnit
                > ::is_set(m_unit);
    }
    }
    throw std::runtime_error(
            "Frequency::eIsSet Error. FeatureID:" + _featureID);
}

void Frequency::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "Frequency::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr Frequency::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getFrequency();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void Frequency::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void Frequency::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

