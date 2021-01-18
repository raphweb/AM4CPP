// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/TransmissionPolicyImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "TransmissionPolicy.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/DataSize.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(TransmissionPolicyImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void TransmissionPolicy::_initialize()
{
    // Supertypes

    // References
    if (m_chunkSize)
    {
        m_chunkSize->_initialize();
    }

    /*PROTECTED REGION ID(TransmissionPolicyImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject TransmissionPolicy::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::TRANSMISSIONPOLICY__CHUNKSIZE:
    {
        if (m_chunkSize)
            _any = ::ecore::as < ::ecore::EObject > (m_chunkSize);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::TRANSMISSIONPOLICY__CHUNKPROCESSINGTICKS:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EInt
                > ::toAny(_any, m_chunkProcessingTicks);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::TRANSMISSIONPOLICY__TRANSMITRATIO:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EDouble
                > ::toAny(_any, m_transmitRatio);
        return _any;
    }
    }
    throw std::runtime_error(
            "TransmissionPolicy::eGet Error. FeatureID:" + _featureID);
}

void TransmissionPolicy::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::TRANSMISSIONPOLICY__CHUNKSIZE:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::DataSize_ptr _t1 =
                dynamic_cast< ::amalthea::DataSize* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::DataSize >(_t0);*/
        ::amalthea::TransmissionPolicy::setChunkSize(_t1);
        return;
    }
    case ::amalthea::AmaltheaPackage::TRANSMISSIONPOLICY__CHUNKPROCESSINGTICKS:
    {
        ::ecore::EInt _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EInt
                > ::fromAny(_newValue, _t0);
        ::amalthea::TransmissionPolicy::setChunkProcessingTicks(_t0);
        return;
    }
    case ::amalthea::AmaltheaPackage::TRANSMISSIONPOLICY__TRANSMITRATIO:
    {
        ::ecore::EDouble _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EDouble
                > ::fromAny(_newValue, _t0);
        ::amalthea::TransmissionPolicy::setTransmitRatio(_t0);
        return;
    }
    }
    throw std::runtime_error(
            "TransmissionPolicy::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean TransmissionPolicy::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::TRANSMISSIONPOLICY__CHUNKSIZE:
    {
        return (bool) m_chunkSize;
    }
    case ::amalthea::AmaltheaPackage::TRANSMISSIONPOLICY__CHUNKPROCESSINGTICKS:
    {
        return m_chunkProcessingTicks != 0;
    }
    case ::amalthea::AmaltheaPackage::TRANSMISSIONPOLICY__TRANSMITRATIO:
    {
        return m_transmitRatio != 1.0;
    }
    }
    throw std::runtime_error(
            "TransmissionPolicy::eIsSet Error. FeatureID:" + _featureID);
}

void TransmissionPolicy::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "TransmissionPolicy::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr TransmissionPolicy::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getTransmissionPolicy();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void TransmissionPolicy::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::TRANSMISSIONPOLICY__CHUNKSIZE:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void TransmissionPolicy::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::TRANSMISSIONPOLICY__CHUNKSIZE:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

