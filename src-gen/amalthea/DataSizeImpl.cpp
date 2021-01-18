// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/DataSizeImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "DataSize.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/Quantity.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(DataSizeImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void DataSize::_initialize()
{
    // Supertypes
    ::amalthea::Quantity::_initialize();

    // References

    /*PROTECTED REGION ID(DataSizeImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

::ecore::EString DataSize::toString()
{
    /*PROTECTED REGION ID(DataSizeImpl_toString) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    throw "UnsupportedOperationException: amalthea::DataSize::toString";
    /*PROTECTED REGION END*/
}

::ecore::ELong DataSize::getNumberBits()
{
    /*PROTECTED REGION ID(DataSizeImpl_getNumberBits) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    throw "UnsupportedOperationException: amalthea::DataSize::getNumberBits";
    /*PROTECTED REGION END*/
}

::ecore::ELong DataSize::getNumberBytes()
{
    /*PROTECTED REGION ID(DataSizeImpl_getNumberBytes) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    throw "UnsupportedOperationException: amalthea::DataSize::getNumberBytes";
    /*PROTECTED REGION END*/
}

// EObject
::ecore::EJavaObject DataSize::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::DATASIZE__VALUE:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EBigInteger
                > ::toAny(_any, m_value);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::DATASIZE__UNIT:
    {
        ::ecorecpp::mapping::any_traits < ::amalthea::DataSizeUnit
                > ::toAny(_any, m_unit);
        return _any;
    }
    }
    throw std::runtime_error("DataSize::eGet Error. FeatureID:" + _featureID);
}

void DataSize::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::DATASIZE__VALUE:
    {
        ::ecore::EBigInteger _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EBigInteger
                > ::fromAny(_newValue, _t0);
        ::amalthea::DataSize::setValue(_t0);
        return;
    }
    case ::amalthea::AmaltheaPackage::DATASIZE__UNIT:
    {
        ::amalthea::DataSizeUnit _t0;
        ::ecorecpp::mapping::any_traits < ::amalthea::DataSizeUnit
                > ::fromAny(_newValue, _t0);
        ::amalthea::DataSize::setUnit(_t0);
        return;
    }
    }
    throw std::runtime_error("DataSize::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean DataSize::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::DATASIZE__VALUE:
    {
        return m_value != 0;
    }
    case ::amalthea::AmaltheaPackage::DATASIZE__UNIT:
    {
        return ::ecorecpp::mapping::set_traits < ::amalthea::DataSizeUnit
                > ::is_set(m_unit);
    }
    }
    throw std::runtime_error("DataSize::eIsSet Error. FeatureID:" + _featureID);
}

void DataSize::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error("DataSize::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr DataSize::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getDataSize();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void DataSize::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void DataSize::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

