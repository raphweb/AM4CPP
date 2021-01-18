// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/ConnectionHandlerDefinitionImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "ConnectionHandlerDefinition.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/HwDefinition.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Tag.hpp>
#include <amalthea/IDiscreteValueDeviation.hpp>
#include <amalthea/DataRate.hpp>
#include <amalthea/INamed.hpp>
#include <amalthea/Namespace.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(ConnectionHandlerDefinitionImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void ConnectionHandlerDefinition::_initialize()
{
    // Supertypes
    ::amalthea::HwDefinition::_initialize();

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

    /*PROTECTED REGION ID(ConnectionHandlerDefinitionImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject ConnectionHandlerDefinition::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
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
    case ::amalthea::AmaltheaPackage::CONNECTIONHANDLERDEFINITION__POLICY:
    {
        ::ecorecpp::mapping::any_traits < ::amalthea::SchedPolicy
                > ::toAny(_any, m_policy);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::CONNECTIONHANDLERDEFINITION__READLATENCY:
    {
        if (m_readLatency)
            _any = ::ecore::as < ::ecore::EObject > (m_readLatency);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::CONNECTIONHANDLERDEFINITION__WRITELATENCY:
    {
        if (m_writeLatency)
            _any = ::ecore::as < ::ecore::EObject > (m_writeLatency);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::CONNECTIONHANDLERDEFINITION__DATARATE:
    {
        if (m_dataRate)
            _any = ::ecore::as < ::ecore::EObject > (m_dataRate);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::CONNECTIONHANDLERDEFINITION__MAXBURSTSIZE:
    {
        ::ecorecpp::mapping::any_traits < ::amalthea::PositiveInt
                > ::toAny(_any, m_maxBurstSize);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::CONNECTIONHANDLERDEFINITION__MAXCONCURRENTTRANSFERS:
    {
        ::ecorecpp::mapping::any_traits < ::amalthea::PositiveInt
                > ::toAny(_any, m_maxConcurrentTransfers);
        return _any;
    }
    }
    throw std::runtime_error(
            "ConnectionHandlerDefinition::eGet Error. FeatureID:" + _featureID);
}

void ConnectionHandlerDefinition::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
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
    case ::amalthea::AmaltheaPackage::CONNECTIONHANDLERDEFINITION__POLICY:
    {
        ::amalthea::SchedPolicy _t0;
        ::ecorecpp::mapping::any_traits < ::amalthea::SchedPolicy
                > ::fromAny(_newValue, _t0);
        ::amalthea::ConnectionHandlerDefinition::setPolicy(_t0);
        return;
    }
    case ::amalthea::AmaltheaPackage::CONNECTIONHANDLERDEFINITION__READLATENCY:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::IDiscreteValueDeviation_ptr _t1 =
                dynamic_cast< ::amalthea::IDiscreteValueDeviation* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::IDiscreteValueDeviation >(_t0);*/
        ::amalthea::ConnectionHandlerDefinition::setReadLatency(_t1);
        return;
    }
    case ::amalthea::AmaltheaPackage::CONNECTIONHANDLERDEFINITION__WRITELATENCY:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::IDiscreteValueDeviation_ptr _t1 =
                dynamic_cast< ::amalthea::IDiscreteValueDeviation* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::IDiscreteValueDeviation >(_t0);*/
        ::amalthea::ConnectionHandlerDefinition::setWriteLatency(_t1);
        return;
    }
    case ::amalthea::AmaltheaPackage::CONNECTIONHANDLERDEFINITION__DATARATE:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::DataRate_ptr _t1 =
                dynamic_cast< ::amalthea::DataRate* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::DataRate >(_t0);*/
        ::amalthea::ConnectionHandlerDefinition::setDataRate(_t1);
        return;
    }
    case ::amalthea::AmaltheaPackage::CONNECTIONHANDLERDEFINITION__MAXBURSTSIZE:
    {
        ::amalthea::PositiveInt _t0;
        ::ecorecpp::mapping::any_traits < ::amalthea::PositiveInt
                > ::fromAny(_newValue, _t0);
        ::amalthea::ConnectionHandlerDefinition::setMaxBurstSize(_t0);
        return;
    }
    case ::amalthea::AmaltheaPackage::CONNECTIONHANDLERDEFINITION__MAXCONCURRENTTRANSFERS:
    {
        ::amalthea::PositiveInt _t0;
        ::ecorecpp::mapping::any_traits < ::amalthea::PositiveInt
                > ::fromAny(_newValue, _t0);
        ::amalthea::ConnectionHandlerDefinition::setMaxConcurrentTransfers(_t0);
        return;
    }
    }
    throw std::runtime_error(
            "ConnectionHandlerDefinition::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean ConnectionHandlerDefinition::eIsSet(::ecore::EInt _featureID)
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
    case ::amalthea::AmaltheaPackage::CONNECTIONHANDLERDEFINITION__POLICY:
    {
        return ::ecorecpp::mapping::set_traits < ::amalthea::SchedPolicy
                > ::is_set(m_policy);
    }
    case ::amalthea::AmaltheaPackage::CONNECTIONHANDLERDEFINITION__READLATENCY:
    {
        return (bool) m_readLatency;
    }
    case ::amalthea::AmaltheaPackage::CONNECTIONHANDLERDEFINITION__WRITELATENCY:
    {
        return (bool) m_writeLatency;
    }
    case ::amalthea::AmaltheaPackage::CONNECTIONHANDLERDEFINITION__DATARATE:
    {
        return (bool) m_dataRate;
    }
    case ::amalthea::AmaltheaPackage::CONNECTIONHANDLERDEFINITION__MAXBURSTSIZE:
    {
        return m_maxBurstSize != 1;
    }
    case ::amalthea::AmaltheaPackage::CONNECTIONHANDLERDEFINITION__MAXCONCURRENTTRANSFERS:
    {
        return m_maxConcurrentTransfers != 1;
    }
    }
    throw std::runtime_error(
            "ConnectionHandlerDefinition::eIsSet Error. FeatureID:"
                    + _featureID);
}

void ConnectionHandlerDefinition::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "ConnectionHandlerDefinition::eUnset Error. FeatureID:"
                    + _featureID);
}

::ecore::EClass_ptr ConnectionHandlerDefinition::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getConnectionHandlerDefinition();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void ConnectionHandlerDefinition::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
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
    case ::amalthea::AmaltheaPackage::CONNECTIONHANDLERDEFINITION__READLATENCY:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::CONNECTIONHANDLERDEFINITION__WRITELATENCY:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::CONNECTIONHANDLERDEFINITION__DATARATE:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void ConnectionHandlerDefinition::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_oldValue)
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
    case ::amalthea::AmaltheaPackage::CONNECTIONHANDLERDEFINITION__READLATENCY:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::CONNECTIONHANDLERDEFINITION__WRITELATENCY:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::CONNECTIONHANDLERDEFINITION__DATARATE:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

