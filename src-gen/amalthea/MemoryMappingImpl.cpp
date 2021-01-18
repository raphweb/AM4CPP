// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/MemoryMappingImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "MemoryMapping.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/BaseObject.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/AbstractMemoryElement.hpp>
#include <amalthea/Memory.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(MemoryMappingImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void MemoryMapping::_initialize()
{
    // Supertypes
    ::amalthea::BaseObject::_initialize();

    // References

    /*PROTECTED REGION ID(MemoryMappingImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject MemoryMapping::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        return amalthea::IAnnotatable::eGet(_featureID, _resolve);
    }
    case ::amalthea::AmaltheaPackage::MEMORYMAPPING__ABSTRACTELEMENT:
    {
        if (m_abstractElement)
            _any = ::ecore::as < ::ecore::EObject > (m_abstractElement);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::MEMORYMAPPING__MEMORY:
    {
        if (m_memory)
            _any = ::ecore::as < ::ecore::EObject > (m_memory);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::MEMORYMAPPING__MEMORYPOSITIONADDRESS:
    {
        ::ecorecpp::mapping::any_traits < ::amalthea::Address
                > ::toAny(_any, m_memoryPositionAddress);
        return _any;
    }
    }
    throw std::runtime_error(
            "MemoryMapping::eGet Error. FeatureID:" + _featureID);
}

void MemoryMapping::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        amalthea::IAnnotatable::eSet(_featureID, _newValue);
        return;
    }
    case ::amalthea::AmaltheaPackage::MEMORYMAPPING__ABSTRACTELEMENT:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::AbstractMemoryElement_ptr _t1 =
                dynamic_cast< ::amalthea::AbstractMemoryElement* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::AbstractMemoryElement >(_t0);*/
        ::amalthea::MemoryMapping::setAbstractElement(_t1);
        return;
    }
    case ::amalthea::AmaltheaPackage::MEMORYMAPPING__MEMORY:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::Memory_ptr _t1 =
                dynamic_cast< ::amalthea::Memory* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::Memory >(_t0);*/
        ::amalthea::MemoryMapping::setMemory(_t1);
        return;
    }
    case ::amalthea::AmaltheaPackage::MEMORYMAPPING__MEMORYPOSITIONADDRESS:
    {
        ::amalthea::Address _t0;
        ::ecorecpp::mapping::any_traits < ::amalthea::Address
                > ::fromAny(_newValue, _t0);
        ::amalthea::MemoryMapping::setMemoryPositionAddress(_t0);
        return;
    }
    }
    throw std::runtime_error(
            "MemoryMapping::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean MemoryMapping::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        return amalthea::IAnnotatable::eIsSet(_featureID);
    }
    case ::amalthea::AmaltheaPackage::MEMORYMAPPING__ABSTRACTELEMENT:
    {
        return (bool) m_abstractElement;
    }
    case ::amalthea::AmaltheaPackage::MEMORYMAPPING__MEMORY:
    {
        return (bool) m_memory;
    }
    case ::amalthea::AmaltheaPackage::MEMORYMAPPING__MEMORYPOSITIONADDRESS:
    {
        return m_memoryPositionAddress != 0;
    }
    }
    throw std::runtime_error(
            "MemoryMapping::eIsSet Error. FeatureID:" + _featureID);
}

void MemoryMapping::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "MemoryMapping::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr MemoryMapping::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getMemoryMapping();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void MemoryMapping::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::MEMORYMAPPING__ABSTRACTELEMENT:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::MEMORYMAPPING__MEMORY:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void MemoryMapping::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::MEMORYMAPPING__ABSTRACTELEMENT:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::MEMORYMAPPING__MEMORY:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

