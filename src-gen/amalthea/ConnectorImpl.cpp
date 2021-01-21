// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/ConnectorImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "Connector.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/BaseObject.hpp>
#include <amalthea/INamed.hpp>
#include <amalthea/ITaggable.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Tag.hpp>
#include <amalthea/ISystem.hpp>
#include <amalthea/QualifiedPort.hpp>
#include <amalthea/InterfaceChannel.hpp>
#include <amalthea/Namespace.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(ConnectorImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void Connector::_initialize()
{
    // Supertypes
    ::amalthea::BaseObject::_initialize();
    ::amalthea::INamed::_initialize();
    ::amalthea::ITaggable::_initialize();

    // References
    if (m_sourcePort)
    {
        m_sourcePort->_initialize();
    }
    if (m_targetPort)
    {
        m_targetPort->_initialize();
    }
    for (size_t i = 0; i < m_implementedInterfaces->size(); i++)
    {
        (*m_implementedInterfaces)[i]->_initialize();
    }

    /*PROTECTED REGION ID(ConnectorImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject Connector::eGet(::ecore::EInt _featureID,
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
    case ::amalthea::AmaltheaPackage::CONNECTOR__CONTAININGSYSTEM:
    {
        if (m_containingSystem)
            _any = ::ecore::as < ::ecore::EObject > (m_containingSystem);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::CONNECTOR__SOURCEPORT:
    {
        if (m_sourcePort)
            _any = ::ecore::as < ::ecore::EObject > (m_sourcePort);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::CONNECTOR__TARGETPORT:
    {
        if (m_targetPort)
            _any = ::ecore::as < ::ecore::EObject > (m_targetPort);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::CONNECTOR__IMPLEMENTEDINTERFACES:
    {
        _any = m_implementedInterfaces->asEListOf< ::ecore::EObject_ptr >();
        return _any;
    }
    }
    throw std::runtime_error("Connector::eGet Error. FeatureID:" + _featureID);
}

void Connector::eSet(::ecore::EInt _featureID,
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
    case ::amalthea::AmaltheaPackage::CONNECTOR__CONTAININGSYSTEM:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::ISystem_ptr _t1 =
                dynamic_cast< ::amalthea::ISystem* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::ISystem >(_t0);*/
        ::amalthea::Connector::setContainingSystem(_t1);
        return;
    }
    case ::amalthea::AmaltheaPackage::CONNECTOR__SOURCEPORT:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::QualifiedPort_ptr _t1 =
                dynamic_cast< ::amalthea::QualifiedPort* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::QualifiedPort >(_t0);*/
        ::amalthea::Connector::setSourcePort(_t1);
        return;
    }
    case ::amalthea::AmaltheaPackage::CONNECTOR__TARGETPORT:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::QualifiedPort_ptr _t1 =
                dynamic_cast< ::amalthea::QualifiedPort* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::QualifiedPort >(_t0);*/
        ::amalthea::Connector::setTargetPort(_t1);
        return;
    }
    case ::amalthea::AmaltheaPackage::CONNECTOR__IMPLEMENTEDINTERFACES:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::amalthea::Connector::getImplementedInterfaces().clear();
        ::amalthea::Connector::getImplementedInterfaces().insert_all(*_t0);
        return;
    }
    }
    throw std::runtime_error("Connector::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean Connector::eIsSet(::ecore::EInt _featureID)
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
    case ::amalthea::AmaltheaPackage::ITAGGABLE__TAGS:
    {
        return amalthea::ITaggable::eIsSet(_featureID);
    }
    case ::amalthea::AmaltheaPackage::CONNECTOR__CONTAININGSYSTEM:
    {
        return (bool) m_containingSystem;
    }
    case ::amalthea::AmaltheaPackage::CONNECTOR__SOURCEPORT:
    {
        return (bool) m_sourcePort;
    }
    case ::amalthea::AmaltheaPackage::CONNECTOR__TARGETPORT:
    {
        return (bool) m_targetPort;
    }
    case ::amalthea::AmaltheaPackage::CONNECTOR__IMPLEMENTEDINTERFACES:
    {
        return m_implementedInterfaces && m_implementedInterfaces->size();
    }
    }
    throw std::runtime_error(
            "Connector::eIsSet Error. FeatureID:" + _featureID);
}

void Connector::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "Connector::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr Connector::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getConnector();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void Connector::_inverseAdd(::ecore::EInt _featureID,
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
    case ::amalthea::AmaltheaPackage::CONNECTOR__CONTAININGSYSTEM:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::ISystem_ptr _t1 =
                dynamic_cast< ::amalthea::ISystem* >(_t0.get());

        // set reference
        basicsetContainingSystem(_t1);
    }
        return;
    case ::amalthea::AmaltheaPackage::CONNECTOR__SOURCEPORT:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::CONNECTOR__TARGETPORT:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::CONNECTOR__IMPLEMENTEDINTERFACES:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void Connector::_inverseRemove(::ecore::EInt _featureID,
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
    case ::amalthea::AmaltheaPackage::CONNECTOR__CONTAININGSYSTEM:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_oldValue);
        ::amalthea::ISystem_ptr _t1 =
                dynamic_cast< ::amalthea::ISystem* >(_t0.get());

        // set reference
        if (basicgetContainingSystem() == _t1)
            basicsetContainingSystem(nullptr);
    }
        return;
    case ::amalthea::AmaltheaPackage::CONNECTOR__SOURCEPORT:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::CONNECTOR__TARGETPORT:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::CONNECTOR__IMPLEMENTEDINTERFACES:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

