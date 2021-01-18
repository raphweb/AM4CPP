// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/VoltageImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "Voltage.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/Quantity.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(VoltageImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void Voltage::_initialize()
{
    // Supertypes
    ::amalthea::Quantity::_initialize();

    // References

    /*PROTECTED REGION ID(VoltageImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

::ecore::EString Voltage::toString()
{
    /*PROTECTED REGION ID(VoltageImpl_toString) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    throw "UnsupportedOperationException: amalthea::Voltage::toString";
    /*PROTECTED REGION END*/
}

// EObject
::ecore::EJavaObject Voltage::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::VOLTAGE__VALUE:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EDouble
                > ::toAny(_any, m_value);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::VOLTAGE__UNIT:
    {
        ::ecorecpp::mapping::any_traits < ::amalthea::VoltageUnit
                > ::toAny(_any, m_unit);
        return _any;
    }
    }
    throw std::runtime_error("Voltage::eGet Error. FeatureID:" + _featureID);
}

void Voltage::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::VOLTAGE__VALUE:
    {
        ::ecore::EDouble _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EDouble
                > ::fromAny(_newValue, _t0);
        ::amalthea::Voltage::setValue(_t0);
        return;
    }
    case ::amalthea::AmaltheaPackage::VOLTAGE__UNIT:
    {
        ::amalthea::VoltageUnit _t0;
        ::ecorecpp::mapping::any_traits < ::amalthea::VoltageUnit
                > ::fromAny(_newValue, _t0);
        ::amalthea::Voltage::setUnit(_t0);
        return;
    }
    }
    throw std::runtime_error("Voltage::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean Voltage::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::VOLTAGE__VALUE:
    {
        return m_value != 0.0;
    }
    case ::amalthea::AmaltheaPackage::VOLTAGE__UNIT:
    {
        return ::ecorecpp::mapping::set_traits < ::amalthea::VoltageUnit
                > ::is_set(m_unit);
    }
    }
    throw std::runtime_error("Voltage::eIsSet Error. FeatureID:" + _featureID);
}

void Voltage::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error("Voltage::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr Voltage::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getVoltage();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void Voltage::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void Voltage::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

