// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/ProcessEventImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "ProcessEvent.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/EntityEvent.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Tag.hpp>
#include <amalthea/Process.hpp>
#include <amalthea/ProcessingUnit.hpp>
#include <amalthea/INamed.hpp>
#include <amalthea/Namespace.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(ProcessEventImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void ProcessEvent::_initialize()
{
    // Supertypes
    ::amalthea::EntityEvent::_initialize();

    // References

    /*PROTECTED REGION ID(ProcessEventImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject ProcessEvent::eGet(::ecore::EInt _featureID,
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
    case ::amalthea::AmaltheaPackage::PROCESSEVENT__EVENTTYPE:
    {
        ::ecorecpp::mapping::any_traits < ::amalthea::ProcessEventType
                > ::toAny(_any, m_eventType);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::PROCESSEVENT__ENTITY:
    {
        if (m_entity)
            _any = ::ecore::as < ::ecore::EObject > (m_entity);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::PROCESSEVENT__PROCESSINGUNIT:
    {
        if (m_processingUnit)
            _any = ::ecore::as < ::ecore::EObject > (m_processingUnit);
        return _any;
    }
    }
    throw std::runtime_error(
            "ProcessEvent::eGet Error. FeatureID:" + _featureID);
}

void ProcessEvent::eSet(::ecore::EInt _featureID,
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
    case ::amalthea::AmaltheaPackage::PROCESSEVENT__EVENTTYPE:
    {
        ::amalthea::ProcessEventType _t0;
        ::ecorecpp::mapping::any_traits < ::amalthea::ProcessEventType
                > ::fromAny(_newValue, _t0);
        ::amalthea::ProcessEvent::setEventType(_t0);
        return;
    }
    case ::amalthea::AmaltheaPackage::PROCESSEVENT__ENTITY:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::Process_ptr _t1 =
                dynamic_cast< ::amalthea::Process* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::Process >(_t0);*/
        ::amalthea::ProcessEvent::setEntity(_t1);
        return;
    }
    case ::amalthea::AmaltheaPackage::PROCESSEVENT__PROCESSINGUNIT:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::ProcessingUnit_ptr _t1 =
                dynamic_cast< ::amalthea::ProcessingUnit* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::ProcessingUnit >(_t0);*/
        ::amalthea::ProcessEvent::setProcessingUnit(_t1);
        return;
    }
    }
    throw std::runtime_error(
            "ProcessEvent::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean ProcessEvent::eIsSet(::ecore::EInt _featureID)
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
    case ::amalthea::AmaltheaPackage::PROCESSEVENT__EVENTTYPE:
    {
        return ::ecorecpp::mapping::set_traits < ::amalthea::ProcessEventType
                > ::is_set(m_eventType);
    }
    case ::amalthea::AmaltheaPackage::PROCESSEVENT__ENTITY:
    {
        return (bool) m_entity;
    }
    case ::amalthea::AmaltheaPackage::PROCESSEVENT__PROCESSINGUNIT:
    {
        return (bool) m_processingUnit;
    }
    }
    throw std::runtime_error(
            "ProcessEvent::eIsSet Error. FeatureID:" + _featureID);
}

void ProcessEvent::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "ProcessEvent::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr ProcessEvent::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getProcessEvent();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void ProcessEvent::_inverseAdd(::ecore::EInt _featureID,
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
    case ::amalthea::AmaltheaPackage::PROCESSEVENT__ENTITY:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::PROCESSEVENT__PROCESSINGUNIT:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void ProcessEvent::_inverseRemove(::ecore::EInt _featureID,
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
    case ::amalthea::AmaltheaPackage::PROCESSEVENT__ENTITY:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::PROCESSEVENT__PROCESSINGUNIT:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

