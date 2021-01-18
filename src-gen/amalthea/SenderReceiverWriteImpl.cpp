// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/SenderReceiverWriteImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "SenderReceiverWrite.hpp"
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

/*PROTECTED REGION ID(SenderReceiverWriteImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void SenderReceiverWrite::_initialize()
{
    // Supertypes
    ::amalthea::SenderReceiverCommunication::_initialize();

    // References

    /*PROTECTED REGION ID(SenderReceiverWriteImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject SenderReceiverWrite::eGet(::ecore::EInt _featureID,
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
    case ::amalthea::AmaltheaPackage::SENDERRECEIVERWRITE__NOTIFIEDRUNNABLES:
    {
        _any = m_notifiedRunnables->asEListOf< ::ecore::EObject_ptr >();
        return _any;
    }
    }
    throw std::runtime_error(
            "SenderReceiverWrite::eGet Error. FeatureID:" + _featureID);
}

void SenderReceiverWrite::eSet(::ecore::EInt _featureID,
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
    case ::amalthea::AmaltheaPackage::SENDERRECEIVERWRITE__NOTIFIEDRUNNABLES:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::amalthea::SenderReceiverWrite::getNotifiedRunnables().clear();
        ::amalthea::SenderReceiverWrite::getNotifiedRunnables().insert_all(
                *_t0);
        return;
    }
    }
    throw std::runtime_error(
            "SenderReceiverWrite::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean SenderReceiverWrite::eIsSet(::ecore::EInt _featureID)
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
    case ::amalthea::AmaltheaPackage::SENDERRECEIVERWRITE__NOTIFIEDRUNNABLES:
    {
        return m_notifiedRunnables && m_notifiedRunnables->size();
    }
    }
    throw std::runtime_error(
            "SenderReceiverWrite::eIsSet Error. FeatureID:" + _featureID);
}

void SenderReceiverWrite::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "SenderReceiverWrite::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr SenderReceiverWrite::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getSenderReceiverWrite();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void SenderReceiverWrite::_inverseAdd(::ecore::EInt _featureID,
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
    case ::amalthea::AmaltheaPackage::SENDERRECEIVERWRITE__NOTIFIEDRUNNABLES:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void SenderReceiverWrite::_inverseRemove(::ecore::EInt _featureID,
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
    case ::amalthea::AmaltheaPackage::SENDERRECEIVERWRITE__NOTIFIEDRUNNABLES:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

