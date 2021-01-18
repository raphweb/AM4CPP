// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/SenderReceiverReadImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "SenderReceiverRead.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/SenderReceiverCommunication.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Process.hpp>
#include <amalthea/Runnable.hpp>
#include <amalthea/ActivityGraph.hpp>
#include <amalthea/Label.hpp>
#include <amalthea/ComponentPort.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(SenderReceiverReadImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void SenderReceiverRead::_initialize()
{
    // Supertypes
    ::amalthea::SenderReceiverCommunication::_initialize();

    // References

    /*PROTECTED REGION ID(SenderReceiverReadImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject SenderReceiverRead::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        return amalthea::IAnnotatable::eGet(_featureID, _resolve);
    }
    case ::amalthea::AmaltheaPackage::SENDERRECEIVERCOMMUNICATION__BUFFERED:
    case ::amalthea::AmaltheaPackage::SENDERRECEIVERCOMMUNICATION__LABEL:
    case ::amalthea::AmaltheaPackage::SENDERRECEIVERCOMMUNICATION__PORT:
    {
        return amalthea::SenderReceiverCommunication::eGet(_featureID, _resolve);
    }
    }
    throw std::runtime_error(
            "SenderReceiverRead::eGet Error. FeatureID:" + _featureID);
}

void SenderReceiverRead::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        amalthea::IAnnotatable::eSet(_featureID, _newValue);
        return;
    }
    case ::amalthea::AmaltheaPackage::SENDERRECEIVERCOMMUNICATION__BUFFERED:
    case ::amalthea::AmaltheaPackage::SENDERRECEIVERCOMMUNICATION__LABEL:
    case ::amalthea::AmaltheaPackage::SENDERRECEIVERCOMMUNICATION__PORT:
    {
        amalthea::SenderReceiverCommunication::eSet(_featureID, _newValue);
        return;
    }
    }
    throw std::runtime_error(
            "SenderReceiverRead::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean SenderReceiverRead::eIsSet(::ecore::EInt _featureID)
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
    case ::amalthea::AmaltheaPackage::SENDERRECEIVERCOMMUNICATION__BUFFERED:
    case ::amalthea::AmaltheaPackage::SENDERRECEIVERCOMMUNICATION__LABEL:
    case ::amalthea::AmaltheaPackage::SENDERRECEIVERCOMMUNICATION__PORT:
    {
        return amalthea::SenderReceiverCommunication::eIsSet(_featureID);
    }
    }
    throw std::runtime_error(
            "SenderReceiverRead::eIsSet Error. FeatureID:" + _featureID);
}

void SenderReceiverRead::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "SenderReceiverRead::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr SenderReceiverRead::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getSenderReceiverRead();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void SenderReceiverRead::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::SENDERRECEIVERCOMMUNICATION__LABEL:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::SENDERRECEIVERCOMMUNICATION__PORT:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void SenderReceiverRead::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::SENDERRECEIVERCOMMUNICATION__LABEL:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::SENDERRECEIVERCOMMUNICATION__PORT:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

