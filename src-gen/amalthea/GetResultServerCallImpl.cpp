// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/GetResultServerCallImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "GetResultServerCall.hpp"
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

/*PROTECTED REGION ID(GetResultServerCallImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void GetResultServerCall::_initialize()
{
    // Supertypes
    ::amalthea::ServerCall::_initialize();

    // References

    /*PROTECTED REGION ID(GetResultServerCallImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject GetResultServerCall::eGet(::ecore::EInt _featureID,
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
    case ::amalthea::AmaltheaPackage::SERVERCALL__PORT:
    {
        return amalthea::ServerCall::eGet(_featureID, _resolve);
    }
    case ::amalthea::AmaltheaPackage::GETRESULTSERVERCALL__BLOCKINGTYPE:
    {
        ::ecorecpp::mapping::any_traits < ::amalthea::BlockingType
                > ::toAny(_any, m_blockingType);
        return _any;
    }
    }
    throw std::runtime_error(
            "GetResultServerCall::eGet Error. FeatureID:" + _featureID);
}

void GetResultServerCall::eSet(::ecore::EInt _featureID,
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
    case ::amalthea::AmaltheaPackage::SERVERCALL__PORT:
    {
        amalthea::ServerCall::eSet(_featureID, _newValue);
        return;
    }
    case ::amalthea::AmaltheaPackage::GETRESULTSERVERCALL__BLOCKINGTYPE:
    {
        ::amalthea::BlockingType _t0;
        ::ecorecpp::mapping::any_traits < ::amalthea::BlockingType
                > ::fromAny(_newValue, _t0);
        ::amalthea::GetResultServerCall::setBlockingType(_t0);
        return;
    }
    }
    throw std::runtime_error(
            "GetResultServerCall::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean GetResultServerCall::eIsSet(::ecore::EInt _featureID)
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
    case ::amalthea::AmaltheaPackage::GETRESULTSERVERCALL__BLOCKINGTYPE:
    {
        return ::ecorecpp::mapping::set_traits < ::amalthea::BlockingType
                > ::is_set(m_blockingType);
    }
    }
    throw std::runtime_error(
            "GetResultServerCall::eIsSet Error. FeatureID:" + _featureID);
}

void GetResultServerCall::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "GetResultServerCall::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr GetResultServerCall::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getGetResultServerCall();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void GetResultServerCall::_inverseAdd(::ecore::EInt _featureID,
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
void GetResultServerCall::_inverseRemove(::ecore::EInt _featureID,
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

