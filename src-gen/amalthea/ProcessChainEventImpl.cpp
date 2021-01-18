// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/ProcessChainEventImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "ProcessChainEvent.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/EntityEvent.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Tag.hpp>
#include <amalthea/ProcessChain.hpp>
#include <amalthea/ProcessingUnit.hpp>
#include <amalthea/INamed.hpp>
#include <amalthea/Namespace.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(ProcessChainEventImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void ProcessChainEvent::_initialize()
{
    // Supertypes
    ::amalthea::EntityEvent::_initialize();

    // References

    /*PROTECTED REGION ID(ProcessChainEventImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject ProcessChainEvent::eGet(::ecore::EInt _featureID,
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
    case ::amalthea::AmaltheaPackage::IDESCRIPTION__DESCRIPTION:
    {
        return amalthea::IDescription::eGet(_featureID, _resolve);
    }
    case ::amalthea::AmaltheaPackage::PROCESSCHAINEVENT__EVENTTYPE:
    {
        ::ecorecpp::mapping::any_traits < ::amalthea::ProcessEventType
                > ::toAny(_any, m_eventType);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::PROCESSCHAINEVENT__ENTITY:
    {
        if (m_entity)
            _any = ::ecore::as < ::ecore::EObject > (m_entity);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::PROCESSCHAINEVENT__PROCESSINGUNIT:
    {
        if (m_processingUnit)
            _any = ::ecore::as < ::ecore::EObject > (m_processingUnit);
        return _any;
    }
    }
    throw std::runtime_error(
            "ProcessChainEvent::eGet Error. FeatureID:" + _featureID);
}

void ProcessChainEvent::eSet(::ecore::EInt _featureID,
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
    case ::amalthea::AmaltheaPackage::IDESCRIPTION__DESCRIPTION:
    {
        amalthea::IDescription::eSet(_featureID, _newValue);
        return;
    }
    case ::amalthea::AmaltheaPackage::PROCESSCHAINEVENT__EVENTTYPE:
    {
        ::amalthea::ProcessEventType _t0;
        ::ecorecpp::mapping::any_traits < ::amalthea::ProcessEventType
                > ::fromAny(_newValue, _t0);
        ::amalthea::ProcessChainEvent::setEventType(_t0);
        return;
    }
    case ::amalthea::AmaltheaPackage::PROCESSCHAINEVENT__ENTITY:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::ProcessChain_ptr _t1 =
                dynamic_cast< ::amalthea::ProcessChain* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::ProcessChain >(_t0);*/
        ::amalthea::ProcessChainEvent::setEntity(_t1);
        return;
    }
    case ::amalthea::AmaltheaPackage::PROCESSCHAINEVENT__PROCESSINGUNIT:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::ProcessingUnit_ptr _t1 =
                dynamic_cast< ::amalthea::ProcessingUnit* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::ProcessingUnit >(_t0);*/
        ::amalthea::ProcessChainEvent::setProcessingUnit(_t1);
        return;
    }
    }
    throw std::runtime_error(
            "ProcessChainEvent::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean ProcessChainEvent::eIsSet(::ecore::EInt _featureID)
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
    case ::amalthea::AmaltheaPackage::IDESCRIPTION__DESCRIPTION:
    {
        return amalthea::IDescription::eIsSet(_featureID);
    }
    case ::amalthea::AmaltheaPackage::PROCESSCHAINEVENT__EVENTTYPE:
    {
        return ::ecorecpp::mapping::set_traits < ::amalthea::ProcessEventType
                > ::is_set(m_eventType);
    }
    case ::amalthea::AmaltheaPackage::PROCESSCHAINEVENT__ENTITY:
    {
        return (bool) m_entity;
    }
    case ::amalthea::AmaltheaPackage::PROCESSCHAINEVENT__PROCESSINGUNIT:
    {
        return (bool) m_processingUnit;
    }
    }
    throw std::runtime_error(
            "ProcessChainEvent::eIsSet Error. FeatureID:" + _featureID);
}

void ProcessChainEvent::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "ProcessChainEvent::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr ProcessChainEvent::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getProcessChainEvent();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void ProcessChainEvent::_inverseAdd(::ecore::EInt _featureID,
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
    case ::amalthea::AmaltheaPackage::PROCESSCHAINEVENT__ENTITY:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::PROCESSCHAINEVENT__PROCESSINGUNIT:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void ProcessChainEvent::_inverseRemove(::ecore::EInt _featureID,
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
    case ::amalthea::AmaltheaPackage::PROCESSCHAINEVENT__ENTITY:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::PROCESSCHAINEVENT__PROCESSINGUNIT:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

