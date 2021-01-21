// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/ChannelSendImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "ChannelSend.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/ChannelAccess.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Process.hpp>
#include <amalthea/Runnable.hpp>
#include <amalthea/ActivityGraph.hpp>
#include <amalthea/Channel.hpp>
#include <amalthea/TransmissionPolicy.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(ChannelSendImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void ChannelSend::_initialize()
{
    // Supertypes
    ::amalthea::ChannelAccess::_initialize();

    // References

    /*PROTECTED REGION ID(ChannelSendImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject ChannelSend::eGet(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        return amalthea::IAnnotatable::eGet(_featureID, _resolve);
    }
    case ::amalthea::AmaltheaPackage::CHANNELACCESS__DATA:
    case ::amalthea::AmaltheaPackage::CHANNELACCESS__ELEMENTS:
    case ::amalthea::AmaltheaPackage::CHANNELACCESS__TRANSMISSIONPOLICY:
    {
        return amalthea::ChannelAccess::eGet(_featureID, _resolve);
    }
    }
    throw std::runtime_error(
            "ChannelSend::eGet Error. FeatureID:" + _featureID);
}

void ChannelSend::eSet(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        amalthea::IAnnotatable::eSet(_featureID, _newValue);
        return;
    }
    case ::amalthea::AmaltheaPackage::CHANNELACCESS__DATA:
    case ::amalthea::AmaltheaPackage::CHANNELACCESS__ELEMENTS:
    case ::amalthea::AmaltheaPackage::CHANNELACCESS__TRANSMISSIONPOLICY:
    {
        amalthea::ChannelAccess::eSet(_featureID, _newValue);
        return;
    }
    }
    throw std::runtime_error(
            "ChannelSend::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean ChannelSend::eIsSet(::ecore::EInt _featureID)
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
    case ::amalthea::AmaltheaPackage::CHANNELACCESS__DATA:
    case ::amalthea::AmaltheaPackage::CHANNELACCESS__ELEMENTS:
    case ::amalthea::AmaltheaPackage::CHANNELACCESS__TRANSMISSIONPOLICY:
    {
        return amalthea::ChannelAccess::eIsSet(_featureID);
    }
    }
    throw std::runtime_error(
            "ChannelSend::eIsSet Error. FeatureID:" + _featureID);
}

void ChannelSend::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "ChannelSend::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr ChannelSend::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getChannelSend();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void ChannelSend::_inverseAdd(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::CHANNELACCESS__DATA:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::CHANNELACCESS__TRANSMISSIONPOLICY:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void ChannelSend::_inverseRemove(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::CHANNELACCESS__DATA:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::CHANNELACCESS__TRANSMISSIONPOLICY:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

