// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/AsynchronousServerCallImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "AsynchronousServerCall.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/ServerCall.hpp>
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

/*PROTECTED REGION ID(AsynchronousServerCallImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void AsynchronousServerCall::_initialize()
{
    // Supertypes
    ::amalthea::ServerCall::_initialize();

    // References

    /*PROTECTED REGION ID(AsynchronousServerCallImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject AsynchronousServerCall::eGet(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        return amalthea::IAnnotatable::eGet(_featureID, _resolve);
    }
    case ::amalthea::AmaltheaPackage::SERVERCALL__SERVERRUNNABLE:
    case ::amalthea::AmaltheaPackage::SERVERCALL__PORT:
    {
        return amalthea::ServerCall::eGet(_featureID, _resolve);
    }
    case ::amalthea::AmaltheaPackage::ASYNCHRONOUSSERVERCALL__RESULTRUNNABLE:
    {
        if (m_resultRunnable)
            _any = ::ecore::as < ::ecore::EObject > (m_resultRunnable);
        return _any;
    }
    }
    throw std::runtime_error(
            "AsynchronousServerCall::eGet Error. FeatureID:" + _featureID);
}

void AsynchronousServerCall::eSet(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        amalthea::IAnnotatable::eSet(_featureID, _newValue);
        return;
    }
    case ::amalthea::AmaltheaPackage::SERVERCALL__SERVERRUNNABLE:
    case ::amalthea::AmaltheaPackage::SERVERCALL__PORT:
    {
        amalthea::ServerCall::eSet(_featureID, _newValue);
        return;
    }
    case ::amalthea::AmaltheaPackage::ASYNCHRONOUSSERVERCALL__RESULTRUNNABLE:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::Runnable_ptr _t1 =
                dynamic_cast< ::amalthea::Runnable* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::Runnable >(_t0);*/
        ::amalthea::AsynchronousServerCall::setResultRunnable(_t1);
        return;
    }
    }
    throw std::runtime_error(
            "AsynchronousServerCall::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean AsynchronousServerCall::eIsSet(::ecore::EInt _featureID)
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
    case ::amalthea::AmaltheaPackage::SERVERCALL__PORT:
    {
        return amalthea::ServerCall::eIsSet(_featureID);
    }
    case ::amalthea::AmaltheaPackage::ASYNCHRONOUSSERVERCALL__RESULTRUNNABLE:
    {
        return (bool) m_resultRunnable;
    }
    }
    throw std::runtime_error(
            "AsynchronousServerCall::eIsSet Error. FeatureID:" + _featureID);
}

void AsynchronousServerCall::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "AsynchronousServerCall::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr AsynchronousServerCall::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getAsynchronousServerCall();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void AsynchronousServerCall::_inverseAdd(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
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
    case ::amalthea::AmaltheaPackage::ASYNCHRONOUSSERVERCALL__RESULTRUNNABLE:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void AsynchronousServerCall::_inverseRemove(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_oldValue)
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
    case ::amalthea::AmaltheaPackage::ASYNCHRONOUSSERVERCALL__RESULTRUNNABLE:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

