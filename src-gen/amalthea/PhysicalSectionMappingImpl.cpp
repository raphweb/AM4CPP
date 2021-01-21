// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/PhysicalSectionMappingImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "PhysicalSectionMapping.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/ReferableBaseObject.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Section.hpp>
#include <amalthea/Memory.hpp>
#include <amalthea/Label.hpp>
#include <amalthea/Runnable.hpp>
#include <amalthea/INamed.hpp>
#include <amalthea/Namespace.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(PhysicalSectionMappingImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void PhysicalSectionMapping::_initialize()
{
    // Supertypes
    ::amalthea::ReferableBaseObject::_initialize();

    // References

    /*PROTECTED REGION ID(PhysicalSectionMappingImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject PhysicalSectionMapping::eGet(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EBoolean _resolve)
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
    case ::amalthea::AmaltheaPackage::PHYSICALSECTIONMAPPING__ORIGIN:
    {
        _any = m_origin->asEListOf< ::ecore::EObject_ptr >();
        return _any;
    }
    case ::amalthea::AmaltheaPackage::PHYSICALSECTIONMAPPING__MEMORY:
    {
        if (m_memory)
            _any = ::ecore::as < ::ecore::EObject > (m_memory);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::PHYSICALSECTIONMAPPING__STARTADDRESS:
    {
        ::ecorecpp::mapping::any_traits < ::amalthea::Address
                > ::toAny(_any, m_startAddress);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::PHYSICALSECTIONMAPPING__ENDADDRESS:
    {
        ::ecorecpp::mapping::any_traits < ::amalthea::Address
                > ::toAny(_any, m_endAddress);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::PHYSICALSECTIONMAPPING__LABELS:
    {
        _any = m_labels->asEListOf< ::ecore::EObject_ptr >();
        return _any;
    }
    case ::amalthea::AmaltheaPackage::PHYSICALSECTIONMAPPING__RUNENTITIES:
    {
        _any = m_runEntities->asEListOf< ::ecore::EObject_ptr >();
        return _any;
    }
    }
    throw std::runtime_error(
            "PhysicalSectionMapping::eGet Error. FeatureID:" + _featureID);
}

void PhysicalSectionMapping::eSet(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
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
    case ::amalthea::AmaltheaPackage::PHYSICALSECTIONMAPPING__ORIGIN:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::amalthea::PhysicalSectionMapping::getOrigin().clear();
        ::amalthea::PhysicalSectionMapping::getOrigin().insert_all(*_t0);
        return;
    }
    case ::amalthea::AmaltheaPackage::PHYSICALSECTIONMAPPING__MEMORY:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::Memory_ptr _t1 =
                dynamic_cast< ::amalthea::Memory* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::Memory >(_t0);*/
        ::amalthea::PhysicalSectionMapping::setMemory(_t1);
        return;
    }
    case ::amalthea::AmaltheaPackage::PHYSICALSECTIONMAPPING__STARTADDRESS:
    {
        ::amalthea::Address _t0;
        ::ecorecpp::mapping::any_traits < ::amalthea::Address
                > ::fromAny(_newValue, _t0);
        ::amalthea::PhysicalSectionMapping::setStartAddress(_t0);
        return;
    }
    case ::amalthea::AmaltheaPackage::PHYSICALSECTIONMAPPING__ENDADDRESS:
    {
        ::amalthea::Address _t0;
        ::ecorecpp::mapping::any_traits < ::amalthea::Address
                > ::fromAny(_newValue, _t0);
        ::amalthea::PhysicalSectionMapping::setEndAddress(_t0);
        return;
    }
    case ::amalthea::AmaltheaPackage::PHYSICALSECTIONMAPPING__LABELS:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::amalthea::PhysicalSectionMapping::getLabels().clear();
        ::amalthea::PhysicalSectionMapping::getLabels().insert_all(*_t0);
        return;
    }
    case ::amalthea::AmaltheaPackage::PHYSICALSECTIONMAPPING__RUNENTITIES:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::amalthea::PhysicalSectionMapping::getRunEntities().clear();
        ::amalthea::PhysicalSectionMapping::getRunEntities().insert_all(*_t0);
        return;
    }
    }
    throw std::runtime_error(
            "PhysicalSectionMapping::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean PhysicalSectionMapping::eIsSet(::ecore::EInt _featureID)
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
    case ::amalthea::AmaltheaPackage::PHYSICALSECTIONMAPPING__ORIGIN:
    {
        return m_origin && m_origin->size();
    }
    case ::amalthea::AmaltheaPackage::PHYSICALSECTIONMAPPING__MEMORY:
    {
        return (bool) m_memory;
    }
    case ::amalthea::AmaltheaPackage::PHYSICALSECTIONMAPPING__STARTADDRESS:
    {
        return m_startAddress != 0;
    }
    case ::amalthea::AmaltheaPackage::PHYSICALSECTIONMAPPING__ENDADDRESS:
    {
        return m_endAddress != 0;
    }
    case ::amalthea::AmaltheaPackage::PHYSICALSECTIONMAPPING__LABELS:
    {
        return m_labels && m_labels->size();
    }
    case ::amalthea::AmaltheaPackage::PHYSICALSECTIONMAPPING__RUNENTITIES:
    {
        return m_runEntities && m_runEntities->size();
    }
    }
    throw std::runtime_error(
            "PhysicalSectionMapping::eIsSet Error. FeatureID:" + _featureID);
}

void PhysicalSectionMapping::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "PhysicalSectionMapping::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr PhysicalSectionMapping::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getPhysicalSectionMapping();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void PhysicalSectionMapping::_inverseAdd(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::PHYSICALSECTIONMAPPING__ORIGIN:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::PHYSICALSECTIONMAPPING__MEMORY:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::PHYSICALSECTIONMAPPING__LABELS:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::PHYSICALSECTIONMAPPING__RUNENTITIES:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void PhysicalSectionMapping::_inverseRemove(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::PHYSICALSECTIONMAPPING__ORIGIN:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::PHYSICALSECTIONMAPPING__MEMORY:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::PHYSICALSECTIONMAPPING__LABELS:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::PHYSICALSECTIONMAPPING__RUNENTITIES:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

