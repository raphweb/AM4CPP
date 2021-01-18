// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/ProcessPrototypeImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "ProcessPrototype.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/AbstractProcess.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Tag.hpp>
#include <amalthea/DataSize.hpp>
#include <amalthea/MemoryMapping.hpp>
#include <amalthea/Component.hpp>
#include <amalthea/Runnable.hpp>
#include <amalthea/AccessPrecedenceSpec.hpp>
#include <amalthea/OrderPrecedenceSpec.hpp>
#include <amalthea/ChainedProcessPrototype.hpp>
#include <amalthea/Activation.hpp>
#include <amalthea/RunnableCall.hpp>
#include <amalthea/INamed.hpp>
#include <amalthea/Namespace.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(ProcessPrototypeImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void ProcessPrototype::_initialize()
{
    // Supertypes
    ::amalthea::AbstractProcess::_initialize();

    // References
    for (size_t i = 0; i < m_accessPrecedenceSpec->size(); i++)
    {
        (*m_accessPrecedenceSpec)[i]->_initialize();
    }
    for (size_t i = 0; i < m_orderPrecedenceSpec->size(); i++)
    {
        (*m_orderPrecedenceSpec)[i]->_initialize();
    }
    for (size_t i = 0; i < m_chainedPrototypes->size(); i++)
    {
        (*m_chainedPrototypes)[i]->_initialize();
    }
    for (size_t i = 0; i < m_runnableCalls->size(); i++)
    {
        (*m_runnableCalls)[i]->_initialize();
    }

    /*PROTECTED REGION ID(ProcessPrototypeImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject ProcessPrototype::eGet(::ecore::EInt _featureID,
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
    case ::amalthea::AmaltheaPackage::ABSTRACTMEMORYELEMENT__SIZE:
    {
        return amalthea::AbstractMemoryElement::eGet(_featureID, _resolve);
    }
    case ::amalthea::AmaltheaPackage::PROCESSPROTOTYPE__PREEMPTION:
    {
        ::ecorecpp::mapping::any_traits < ::amalthea::Preemption
                > ::toAny(_any, m_preemption);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::PROCESSPROTOTYPE__FIRSTRUNNABLE:
    {
        if (m_firstRunnable)
            _any = ::ecore::as < ::ecore::EObject > (m_firstRunnable);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::PROCESSPROTOTYPE__LASTRUNNABLE:
    {
        if (m_lastRunnable)
            _any = ::ecore::as < ::ecore::EObject > (m_lastRunnable);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::PROCESSPROTOTYPE__ACCESSPRECEDENCESPEC:
    {
        _any = m_accessPrecedenceSpec->asEListOf< ::ecore::EObject_ptr >();
        return _any;
    }
    case ::amalthea::AmaltheaPackage::PROCESSPROTOTYPE__ORDERPRECEDENCESPEC:
    {
        _any = m_orderPrecedenceSpec->asEListOf< ::ecore::EObject_ptr >();
        return _any;
    }
    case ::amalthea::AmaltheaPackage::PROCESSPROTOTYPE__CHAINEDPROTOTYPES:
    {
        _any = m_chainedPrototypes->asEListOf< ::ecore::EObject_ptr >();
        return _any;
    }
    case ::amalthea::AmaltheaPackage::PROCESSPROTOTYPE__ACTIVATION:
    {
        if (m_activation)
            _any = ::ecore::as < ::ecore::EObject > (m_activation);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::PROCESSPROTOTYPE__RUNNABLECALLS:
    {
        _any = m_runnableCalls->asEListOf< ::ecore::EObject_ptr >();
        return _any;
    }
    }
    throw std::runtime_error(
            "ProcessPrototype::eGet Error. FeatureID:" + _featureID);
}

void ProcessPrototype::eSet(::ecore::EInt _featureID,
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
    case ::amalthea::AmaltheaPackage::ABSTRACTMEMORYELEMENT__SIZE:
    {
        amalthea::AbstractMemoryElement::eSet(_featureID, _newValue);
        return;
    }
    case ::amalthea::AmaltheaPackage::PROCESSPROTOTYPE__PREEMPTION:
    {
        ::amalthea::Preemption _t0;
        ::ecorecpp::mapping::any_traits < ::amalthea::Preemption
                > ::fromAny(_newValue, _t0);
        ::amalthea::ProcessPrototype::setPreemption(_t0);
        return;
    }
    case ::amalthea::AmaltheaPackage::PROCESSPROTOTYPE__FIRSTRUNNABLE:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::Runnable_ptr _t1 =
                dynamic_cast< ::amalthea::Runnable* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::Runnable >(_t0);*/
        ::amalthea::ProcessPrototype::setFirstRunnable(_t1);
        return;
    }
    case ::amalthea::AmaltheaPackage::PROCESSPROTOTYPE__LASTRUNNABLE:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::Runnable_ptr _t1 =
                dynamic_cast< ::amalthea::Runnable* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::Runnable >(_t0);*/
        ::amalthea::ProcessPrototype::setLastRunnable(_t1);
        return;
    }
    case ::amalthea::AmaltheaPackage::PROCESSPROTOTYPE__ACCESSPRECEDENCESPEC:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::amalthea::ProcessPrototype::getAccessPrecedenceSpec().clear();
        ::amalthea::ProcessPrototype::getAccessPrecedenceSpec().insert_all(
                *_t0);
        return;
    }
    case ::amalthea::AmaltheaPackage::PROCESSPROTOTYPE__ORDERPRECEDENCESPEC:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::amalthea::ProcessPrototype::getOrderPrecedenceSpec().clear();
        ::amalthea::ProcessPrototype::getOrderPrecedenceSpec().insert_all(*_t0);
        return;
    }
    case ::amalthea::AmaltheaPackage::PROCESSPROTOTYPE__CHAINEDPROTOTYPES:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::amalthea::ProcessPrototype::getChainedPrototypes().clear();
        ::amalthea::ProcessPrototype::getChainedPrototypes().insert_all(*_t0);
        return;
    }
    case ::amalthea::AmaltheaPackage::PROCESSPROTOTYPE__ACTIVATION:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::Activation_ptr _t1 =
                dynamic_cast< ::amalthea::Activation* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::Activation >(_t0);*/
        ::amalthea::ProcessPrototype::setActivation(_t1);
        return;
    }
    case ::amalthea::AmaltheaPackage::PROCESSPROTOTYPE__RUNNABLECALLS:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::amalthea::ProcessPrototype::getRunnableCalls().clear();
        ::amalthea::ProcessPrototype::getRunnableCalls().insert_all(*_t0);
        return;
    }
    }
    throw std::runtime_error(
            "ProcessPrototype::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean ProcessPrototype::eIsSet(::ecore::EInt _featureID)
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
    case ::amalthea::AmaltheaPackage::ABSTRACTMEMORYELEMENT__SIZE:
    case ::amalthea::AmaltheaPackage::ABSTRACTMEMORYELEMENT__MAPPINGS:
    {
        return amalthea::AbstractMemoryElement::eIsSet(_featureID);
    }
    case ::amalthea::AmaltheaPackage::ABSTRACTPROCESS__REFERRINGCOMPONENTS:
    {
        return amalthea::AbstractProcess::eIsSet(_featureID);
    }
    case ::amalthea::AmaltheaPackage::PROCESSPROTOTYPE__PREEMPTION:
    {
        return ::ecorecpp::mapping::set_traits < ::amalthea::Preemption
                > ::is_set(m_preemption);
    }
    case ::amalthea::AmaltheaPackage::PROCESSPROTOTYPE__FIRSTRUNNABLE:
    {
        return (bool) m_firstRunnable;
    }
    case ::amalthea::AmaltheaPackage::PROCESSPROTOTYPE__LASTRUNNABLE:
    {
        return (bool) m_lastRunnable;
    }
    case ::amalthea::AmaltheaPackage::PROCESSPROTOTYPE__ACCESSPRECEDENCESPEC:
    {
        return m_accessPrecedenceSpec && m_accessPrecedenceSpec->size();
    }
    case ::amalthea::AmaltheaPackage::PROCESSPROTOTYPE__ORDERPRECEDENCESPEC:
    {
        return m_orderPrecedenceSpec && m_orderPrecedenceSpec->size();
    }
    case ::amalthea::AmaltheaPackage::PROCESSPROTOTYPE__CHAINEDPROTOTYPES:
    {
        return m_chainedPrototypes && m_chainedPrototypes->size();
    }
    case ::amalthea::AmaltheaPackage::PROCESSPROTOTYPE__ACTIVATION:
    {
        return (bool) m_activation;
    }
    case ::amalthea::AmaltheaPackage::PROCESSPROTOTYPE__RUNNABLECALLS:
    {
        return m_runnableCalls && m_runnableCalls->size();
    }
    }
    throw std::runtime_error(
            "ProcessPrototype::eIsSet Error. FeatureID:" + _featureID);
}

void ProcessPrototype::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "ProcessPrototype::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr ProcessPrototype::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getProcessPrototype();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void ProcessPrototype::_inverseAdd(::ecore::EInt _featureID,
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
    case ::amalthea::AmaltheaPackage::ABSTRACTMEMORYELEMENT__SIZE:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::PROCESSPROTOTYPE__FIRSTRUNNABLE:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::PROCESSPROTOTYPE__LASTRUNNABLE:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::PROCESSPROTOTYPE__ACCESSPRECEDENCESPEC:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::PROCESSPROTOTYPE__ORDERPRECEDENCESPEC:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::PROCESSPROTOTYPE__CHAINEDPROTOTYPES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::PROCESSPROTOTYPE__ACTIVATION:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::PROCESSPROTOTYPE__RUNNABLECALLS:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void ProcessPrototype::_inverseRemove(::ecore::EInt _featureID,
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
    case ::amalthea::AmaltheaPackage::ABSTRACTMEMORYELEMENT__SIZE:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::PROCESSPROTOTYPE__FIRSTRUNNABLE:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::PROCESSPROTOTYPE__LASTRUNNABLE:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::PROCESSPROTOTYPE__ACCESSPRECEDENCESPEC:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::PROCESSPROTOTYPE__ORDERPRECEDENCESPEC:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::PROCESSPROTOTYPE__CHAINEDPROTOTYPES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::PROCESSPROTOTYPE__ACTIVATION:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::PROCESSPROTOTYPE__RUNNABLECALLS:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

