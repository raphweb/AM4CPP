// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/HwStructureImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "HwStructure.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/ReferableBaseObject.hpp>
#include <amalthea/ITaggable.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Tag.hpp>
#include <amalthea/HwPort.hpp>
#include <amalthea/HwStructure.hpp>
#include <amalthea/HwModule.hpp>
#include <amalthea/HwConnection.hpp>
#include <amalthea/INamed.hpp>
#include <amalthea/Namespace.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(HwStructureImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void HwStructure::_initialize()
{
    // Supertypes
    ::amalthea::ReferableBaseObject::_initialize();
    ::amalthea::ITaggable::_initialize();

    // References
    for (size_t i = 0; i < m_ports->size(); i++)
    {
        (*m_ports)[i]->_initialize();
    }
    for (size_t i = 0; i < m_structures->size(); i++)
    {
        (*m_structures)[i]->_initialize();
    }
    for (size_t i = 0; i < m_modules->size(); i++)
    {
        (*m_modules)[i]->_initialize();
    }
    for (size_t i = 0; i < m_connections->size(); i++)
    {
        (*m_connections)[i]->_initialize();
    }

    /*PROTECTED REGION ID(HwStructureImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject HwStructure::eGet(::ecore::EInt _featureID,
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
    case ::amalthea::AmaltheaPackage::HWSTRUCTURE__STRUCTURETYPE:
    {
        ::ecorecpp::mapping::any_traits < ::amalthea::StructureType
                > ::toAny(_any, m_structureType);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::HWSTRUCTURE__PORTS:
    {
        _any = m_ports->asEListOf< ::ecore::EObject_ptr >();
        return _any;
    }
    case ::amalthea::AmaltheaPackage::HWSTRUCTURE__STRUCTURES:
    {
        _any = m_structures->asEListOf< ::ecore::EObject_ptr >();
        return _any;
    }
    case ::amalthea::AmaltheaPackage::HWSTRUCTURE__MODULES:
    {
        _any = m_modules->asEListOf< ::ecore::EObject_ptr >();
        return _any;
    }
    case ::amalthea::AmaltheaPackage::HWSTRUCTURE__CONNECTIONS:
    {
        _any = m_connections->asEListOf< ::ecore::EObject_ptr >();
        return _any;
    }
    }
    throw std::runtime_error(
            "HwStructure::eGet Error. FeatureID:" + _featureID);
}

void HwStructure::eSet(::ecore::EInt _featureID,
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
    case ::amalthea::AmaltheaPackage::HWSTRUCTURE__STRUCTURETYPE:
    {
        ::amalthea::StructureType _t0;
        ::ecorecpp::mapping::any_traits < ::amalthea::StructureType
                > ::fromAny(_newValue, _t0);
        ::amalthea::HwStructure::setStructureType(_t0);
        return;
    }
    case ::amalthea::AmaltheaPackage::HWSTRUCTURE__PORTS:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::amalthea::HwStructure::getPorts().clear();
        ::amalthea::HwStructure::getPorts().insert_all(*_t0);
        return;
    }
    case ::amalthea::AmaltheaPackage::HWSTRUCTURE__STRUCTURES:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::amalthea::HwStructure::getStructures().clear();
        ::amalthea::HwStructure::getStructures().insert_all(*_t0);
        return;
    }
    case ::amalthea::AmaltheaPackage::HWSTRUCTURE__MODULES:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::amalthea::HwStructure::getModules().clear();
        ::amalthea::HwStructure::getModules().insert_all(*_t0);
        return;
    }
    case ::amalthea::AmaltheaPackage::HWSTRUCTURE__CONNECTIONS:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::amalthea::HwStructure::getConnections().clear();
        ::amalthea::HwStructure::getConnections().insert_all(*_t0);
        return;
    }
    }
    throw std::runtime_error(
            "HwStructure::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean HwStructure::eIsSet(::ecore::EInt _featureID)
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
    case ::amalthea::AmaltheaPackage::HWSTRUCTURE__STRUCTURETYPE:
    {
        return ::ecorecpp::mapping::set_traits < ::amalthea::StructureType
                > ::is_set(m_structureType);
    }
    case ::amalthea::AmaltheaPackage::HWSTRUCTURE__PORTS:
    {
        return m_ports && m_ports->size();
    }
    case ::amalthea::AmaltheaPackage::HWSTRUCTURE__STRUCTURES:
    {
        return m_structures && m_structures->size();
    }
    case ::amalthea::AmaltheaPackage::HWSTRUCTURE__MODULES:
    {
        return m_modules && m_modules->size();
    }
    case ::amalthea::AmaltheaPackage::HWSTRUCTURE__CONNECTIONS:
    {
        return m_connections && m_connections->size();
    }
    case ::amalthea::AmaltheaPackage::HWSTRUCTURE__INNERPORTS:
    {
        return m_innerPorts && m_innerPorts->size();
    }
    }
    throw std::runtime_error(
            "HwStructure::eIsSet Error. FeatureID:" + _featureID);
}

void HwStructure::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "HwStructure::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr HwStructure::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getHwStructure();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void HwStructure::_inverseAdd(::ecore::EInt _featureID,
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
    case ::amalthea::AmaltheaPackage::HWSTRUCTURE__PORTS:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::HWSTRUCTURE__STRUCTURES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::HWSTRUCTURE__MODULES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::HWSTRUCTURE__CONNECTIONS:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void HwStructure::_inverseRemove(::ecore::EInt _featureID,
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
    case ::amalthea::AmaltheaPackage::HWSTRUCTURE__PORTS:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::HWSTRUCTURE__STRUCTURES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::HWSTRUCTURE__MODULES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::HWSTRUCTURE__CONNECTIONS:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

