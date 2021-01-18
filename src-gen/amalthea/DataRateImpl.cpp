// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/DataRateImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "DataRate.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/Quantity.hpp>
#include <amalthea/DataRateComparable.hpp>
#include <amalthea/DataRate.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(DataRateImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void DataRate::_initialize()
{
    // Supertypes
    ::amalthea::Quantity::_initialize();
    ::amalthea::DataRateComparable::_initialize();

    // References

    /*PROTECTED REGION ID(DataRateImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

::ecore::EString DataRate::toString()
{
    /*PROTECTED REGION ID(DataRateImpl_toString) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    throw "UnsupportedOperationException: amalthea::DataRate::toString";
    /*PROTECTED REGION END*/
}

::ecore::EInt DataRate::compareTo(::amalthea::DataRate_ptr _rate)
{
    /*PROTECTED REGION ID(DataRateImpl_compareTo) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    throw "UnsupportedOperationException: amalthea::DataRate::compareTo";
    /*PROTECTED REGION END*/
}

// EObject
::ecore::EJavaObject DataRate::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::DATARATE__VALUE:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EBigInteger
                > ::toAny(_any, m_value);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::DATARATE__UNIT:
    {
        ::ecorecpp::mapping::any_traits < ::amalthea::DataRateUnit
                > ::toAny(_any, m_unit);
        return _any;
    }
    }
    throw std::runtime_error("DataRate::eGet Error. FeatureID:" + _featureID);
}

void DataRate::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::DATARATE__VALUE:
    {
        ::ecore::EBigInteger _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EBigInteger
                > ::fromAny(_newValue, _t0);
        ::amalthea::DataRate::setValue(_t0);
        return;
    }
    case ::amalthea::AmaltheaPackage::DATARATE__UNIT:
    {
        ::amalthea::DataRateUnit _t0;
        ::ecorecpp::mapping::any_traits < ::amalthea::DataRateUnit
                > ::fromAny(_newValue, _t0);
        ::amalthea::DataRate::setUnit(_t0);
        return;
    }
    }
    throw std::runtime_error("DataRate::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean DataRate::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::DATARATE__VALUE:
    {
        return m_value != 0;
    }
    case ::amalthea::AmaltheaPackage::DATARATE__UNIT:
    {
        return ::ecorecpp::mapping::set_traits < ::amalthea::DataRateUnit
                > ::is_set(m_unit);
    }
    }
    throw std::runtime_error("DataRate::eIsSet Error. FeatureID:" + _featureID);
}

void DataRate::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error("DataRate::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr DataRate::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getDataRate();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void DataRate::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void DataRate::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

