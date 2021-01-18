// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/ServerCallImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "ServerCall.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/ActivityGraphItem.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Process.hpp>
#include <amalthea/Runnable.hpp>
#include <amalthea/ActivityGraph.hpp>
#include <amalthea/ComponentPort.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(ServerCallImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void ServerCall::_initialize()
{
    // Supertypes
    ::amalthea::ActivityGraphItem::_initialize();

    // References

    /*PROTECTED REGION ID(ServerCallImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject ServerCall::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        return amalthea::IAnnotatable::eGet(_featureID, _resolve);
    }
    case ::amalthea::AmaltheaPackage::SERVERCALL__SERVERRUNNABLE:
    {
        if (m_serverRunnable)
            _any = ::ecore::as < ::ecore::EObject > (m_serverRunnable);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::SERVERCALL__PORT:
    {
        if (m_port)
            _any = ::ecore::as < ::ecore::EObject > (m_port);
        return _any;
    }
    }
    throw std::runtime_error("ServerCall::eGet Error. FeatureID:" + _featureID);
}

void ServerCall::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        amalthea::IAnnotatable::eSet(_featureID, _newValue);
        return;
    }
    case ::amalthea::AmaltheaPackage::SERVERCALL__SERVERRUNNABLE:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::Runnable_ptr _t1 =
                dynamic_cast< ::amalthea::Runnable* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::Runnable >(_t0);*/
        ::amalthea::ServerCall::setServerRunnable(_t1);
        return;
    }
    case ::amalthea::AmaltheaPackage::SERVERCALL__PORT:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::ComponentPort_ptr _t1 =
                dynamic_cast< ::amalthea::ComponentPort* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::ComponentPort >(_t0);*/
        ::amalthea::ServerCall::setPort(_t1);
        return;
    }
    }
    throw std::runtime_error("ServerCall::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean ServerCall::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        return amalthea::IAnnotatable::eIsSet(_featureID);
    }
    case ::amalthea::AmaltheaPackage::ACTIVITYGRAPHITEM__CONTAININGPROCESS:
    case ::amalthea::AmaltheaPackage::ACTIVITYGRAPHITEM__CONTAININGRUNNABLE:
    case ::amalthea::AmaltheaPackage::ACTIVITYGRAPHITEM__CONTAININGACTIVITYGRAPH:
    {
        return amalthea::ActivityGraphItem::eIsSet(_featureID);
    }
    case ::amalthea::AmaltheaPackage::SERVERCALL__SERVERRUNNABLE:
    {
        return (bool) m_serverRunnable;
    }
    case ::amalthea::AmaltheaPackage::SERVERCALL__PORT:
    {
        return (bool) m_port;
    }
    }
    throw std::runtime_error(
            "ServerCall::eIsSet Error. FeatureID:" + _featureID);
}

void ServerCall::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "ServerCall::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr ServerCall::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getServerCall();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void ServerCall::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::SERVERCALL__SERVERRUNNABLE:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::SERVERCALL__PORT:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void ServerCall::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::SERVERCALL__SERVERRUNNABLE:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::SERVERCALL__PORT:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

