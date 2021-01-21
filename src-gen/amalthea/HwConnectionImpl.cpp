// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/HwConnectionImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "HwConnection.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/ReferableBaseObject.hpp>
#include <amalthea/HwPathElement.hpp>
#include <amalthea/ITaggable.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Tag.hpp>
#include <amalthea/IDiscreteValueDeviation.hpp>
#include <amalthea/DataRate.hpp>
#include <amalthea/HwPort.hpp>
#include <amalthea/INamed.hpp>
#include <amalthea/Namespace.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(HwConnectionImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void HwConnection::_initialize()
{
    // Supertypes
    ::amalthea::ReferableBaseObject::_initialize();
    ::amalthea::HwPathElement::_initialize();
    ::amalthea::ITaggable::_initialize();

    // References
    if (m_readLatency)
    {
        m_readLatency->_initialize();
    }
    if (m_writeLatency)
    {
        m_writeLatency->_initialize();
    }
    if (m_dataRate)
    {
        m_dataRate->_initialize();
    }

    /*PROTECTED REGION ID(HwConnectionImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

std::vector< ::ecore::EString > HwConnection::getNamePrefixSegments()
{
    /*PROTECTED REGION ID(HwConnectionImpl_getNamePrefixSegments) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    throw "UnsupportedOperationException: amalthea::HwConnection::getNamePrefixSegments";
    /*PROTECTED REGION END*/
}

std::vector< ::amalthea::HwPort_ptr > HwConnection::getPorts()
{
    /*PROTECTED REGION ID(HwConnectionImpl_getPorts) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    throw "UnsupportedOperationException: amalthea::HwConnection::getPorts";
    /*PROTECTED REGION END*/
}

// EObject
::ecore::EJavaObject HwConnection::eGet(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        return amalthea::IAnnotatable::eGet(_featureID, _resolve);
    }
    case ::amalthea::AmaltheaPackage::INAMED__NAME:
    {
        return amalthea::INamed::eGet(_featureID, _resolve);
    }
    case ::amalthea::AmaltheaPackage::ITAGGABLE__TAGS:
    {
        return amalthea::ITaggable::eGet(_featureID, _resolve);
    }
    case ::amalthea::AmaltheaPackage::HWCONNECTION__READLATENCY:
    {
        if (m_readLatency)
            _any = ::ecore::as < ::ecore::EObject > (m_readLatency);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::HWCONNECTION__WRITELATENCY:
    {
        if (m_writeLatency)
            _any = ::ecore::as < ::ecore::EObject > (m_writeLatency);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::HWCONNECTION__DATARATE:
    {
        if (m_dataRate)
            _any = ::ecore::as < ::ecore::EObject > (m_dataRate);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::HWCONNECTION__PORT1:
    {
        if (m_port1)
            _any = ::ecore::as < ::ecore::EObject > (m_port1);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::HWCONNECTION__PORT2:
    {
        if (m_port2)
            _any = ::ecore::as < ::ecore::EObject > (m_port2);
        return _any;
    }
    }
    throw std::runtime_error(
            "HwConnection::eGet Error. FeatureID:" + _featureID);
}

void HwConnection::eSet(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        amalthea::IAnnotatable::eSet(_featureID, _newValue);
        return;
    }
    case ::amalthea::AmaltheaPackage::INAMED__NAME:
    {
        amalthea::INamed::eSet(_featureID, _newValue);
        return;
    }
    case ::amalthea::AmaltheaPackage::ITAGGABLE__TAGS:
    {
        amalthea::ITaggable::eSet(_featureID, _newValue);
        return;
    }
    case ::amalthea::AmaltheaPackage::HWCONNECTION__READLATENCY:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::IDiscreteValueDeviation_ptr _t1 =
                dynamic_cast< ::amalthea::IDiscreteValueDeviation* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::IDiscreteValueDeviation >(_t0);*/
        ::amalthea::HwConnection::setReadLatency(_t1);
        return;
    }
    case ::amalthea::AmaltheaPackage::HWCONNECTION__WRITELATENCY:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::IDiscreteValueDeviation_ptr _t1 =
                dynamic_cast< ::amalthea::IDiscreteValueDeviation* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::IDiscreteValueDeviation >(_t0);*/
        ::amalthea::HwConnection::setWriteLatency(_t1);
        return;
    }
    case ::amalthea::AmaltheaPackage::HWCONNECTION__DATARATE:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::DataRate_ptr _t1 =
                dynamic_cast< ::amalthea::DataRate* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::DataRate >(_t0);*/
        ::amalthea::HwConnection::setDataRate(_t1);
        return;
    }
    case ::amalthea::AmaltheaPackage::HWCONNECTION__PORT1:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::HwPort_ptr _t1 =
                dynamic_cast< ::amalthea::HwPort* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::HwPort >(_t0);*/
        ::amalthea::HwConnection::setPort1(_t1);
        return;
    }
    case ::amalthea::AmaltheaPackage::HWCONNECTION__PORT2:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::HwPort_ptr _t1 =
                dynamic_cast< ::amalthea::HwPort* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::HwPort >(_t0);*/
        ::amalthea::HwConnection::setPort2(_t1);
        return;
    }
    }
    throw std::runtime_error(
            "HwConnection::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean HwConnection::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        return amalthea::IAnnotatable::eIsSet(_featureID);
    }
    case ::amalthea::AmaltheaPackage::INAMED__NAME:
    case ::amalthea::AmaltheaPackage::INAMED__QUALIFIEDNAME:
    {
        return amalthea::INamed::eIsSet(_featureID);
    }
    case ::amalthea::AmaltheaPackage::IREFERABLE__UNIQUENAME:
    {
        return amalthea::IReferable::eIsSet(_featureID);
    }
    case ::amalthea::AmaltheaPackage::ITAGGABLE__TAGS:
    {
        return amalthea::ITaggable::eIsSet(_featureID);
    }
    case ::amalthea::AmaltheaPackage::HWCONNECTION__READLATENCY:
    {
        return (bool) m_readLatency;
    }
    case ::amalthea::AmaltheaPackage::HWCONNECTION__WRITELATENCY:
    {
        return (bool) m_writeLatency;
    }
    case ::amalthea::AmaltheaPackage::HWCONNECTION__DATARATE:
    {
        return (bool) m_dataRate;
    }
    case ::amalthea::AmaltheaPackage::HWCONNECTION__PORT1:
    {
        return (bool) m_port1;
    }
    case ::amalthea::AmaltheaPackage::HWCONNECTION__PORT2:
    {
        return (bool) m_port2;
    }
    case ::amalthea::AmaltheaPackage::HWCONNECTION__INTERNAL:
    {
        return ::ecorecpp::mapping::set_traits < ::ecore::EBoolean
                > ::is_set(m_internal);
    }
    }
    throw std::runtime_error(
            "HwConnection::eIsSet Error. FeatureID:" + _featureID);
}

void HwConnection::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "HwConnection::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr HwConnection::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getHwConnection();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void HwConnection::_inverseAdd(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::ITAGGABLE__TAGS:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::HWCONNECTION__READLATENCY:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::HWCONNECTION__WRITELATENCY:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::HWCONNECTION__DATARATE:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::HWCONNECTION__PORT1:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::HWCONNECTION__PORT2:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void HwConnection::_inverseRemove(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::ITAGGABLE__TAGS:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::HWCONNECTION__READLATENCY:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::HWCONNECTION__WRITELATENCY:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::HWCONNECTION__DATARATE:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::HWCONNECTION__PORT1:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::HWCONNECTION__PORT2:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

