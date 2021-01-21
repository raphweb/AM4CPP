// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/SenderReceiverCommunicationImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "SenderReceiverCommunication.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/ActivityGraphItem.hpp>
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

/*PROTECTED REGION ID(SenderReceiverCommunicationImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void SenderReceiverCommunication::_initialize()
{
    // Supertypes
    ::amalthea::ActivityGraphItem::_initialize();

    // References

    /*PROTECTED REGION ID(SenderReceiverCommunicationImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject SenderReceiverCommunication::eGet(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        return amalthea::IAnnotatable::eGet(_featureID, _resolve);
    }
    case ::amalthea::AmaltheaPackage::SENDERRECEIVERCOMMUNICATION__BUFFERED:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EBoolean
                > ::toAny(_any, m_buffered);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::SENDERRECEIVERCOMMUNICATION__LABEL:
    {
        if (m_label)
            _any = ::ecore::as < ::ecore::EObject > (m_label);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::SENDERRECEIVERCOMMUNICATION__PORT:
    {
        if (m_port)
            _any = ::ecore::as < ::ecore::EObject > (m_port);
        return _any;
    }
    }
    throw std::runtime_error(
            "SenderReceiverCommunication::eGet Error. FeatureID:" + _featureID);
}

void SenderReceiverCommunication::eSet(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        amalthea::IAnnotatable::eSet(_featureID, _newValue);
        return;
    }
    case ::amalthea::AmaltheaPackage::SENDERRECEIVERCOMMUNICATION__BUFFERED:
    {
        ::ecore::EBoolean _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EBoolean
                > ::fromAny(_newValue, _t0);
        ::amalthea::SenderReceiverCommunication::setBuffered(_t0);
        return;
    }
    case ::amalthea::AmaltheaPackage::SENDERRECEIVERCOMMUNICATION__LABEL:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::Label_ptr _t1 =
                dynamic_cast< ::amalthea::Label* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::Label >(_t0);*/
        ::amalthea::SenderReceiverCommunication::setLabel(_t1);
        return;
    }
    case ::amalthea::AmaltheaPackage::SENDERRECEIVERCOMMUNICATION__PORT:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::ComponentPort_ptr _t1 =
                dynamic_cast< ::amalthea::ComponentPort* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::ComponentPort >(_t0);*/
        ::amalthea::SenderReceiverCommunication::setPort(_t1);
        return;
    }
    }
    throw std::runtime_error(
            "SenderReceiverCommunication::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean SenderReceiverCommunication::eIsSet(::ecore::EInt _featureID)
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
    {
        return m_buffered != false;
    }
    case ::amalthea::AmaltheaPackage::SENDERRECEIVERCOMMUNICATION__LABEL:
    {
        return (bool) m_label;
    }
    case ::amalthea::AmaltheaPackage::SENDERRECEIVERCOMMUNICATION__PORT:
    {
        return (bool) m_port;
    }
    }
    throw std::runtime_error(
            "SenderReceiverCommunication::eIsSet Error. FeatureID:"
                    + _featureID);
}

void SenderReceiverCommunication::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "SenderReceiverCommunication::eUnset Error. FeatureID:"
                    + _featureID);
}

::ecore::EClass_ptr SenderReceiverCommunication::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getSenderReceiverCommunication();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void SenderReceiverCommunication::_inverseAdd(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
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
void SenderReceiverCommunication::_inverseRemove(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_oldValue)
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

