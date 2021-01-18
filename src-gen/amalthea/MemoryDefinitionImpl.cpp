// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/MemoryDefinitionImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "MemoryDefinition.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/HwDefinition.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Tag.hpp>
#include <amalthea/DataSize.hpp>
#include <amalthea/IDiscreteValueDeviation.hpp>
#include <amalthea/DataRate.hpp>
#include <amalthea/MemoryClassifier.hpp>
#include <amalthea/INamed.hpp>
#include <amalthea/Namespace.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(MemoryDefinitionImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void MemoryDefinition::_initialize()
{
    // Supertypes
    ::amalthea::HwDefinition::_initialize();

    // References
    if (m_size)
    {
        m_size->_initialize();
    }
    if (m_accessLatency)
    {
        m_accessLatency->_initialize();
    }
    if (m_dataRate)
    {
        m_dataRate->_initialize();
    }

    /*PROTECTED REGION ID(MemoryDefinitionImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject MemoryDefinition::eGet(::ecore::EInt _featureID,
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
    case ::amalthea::AmaltheaPackage::MEMORYDEFINITION__SIZE:
    {
        if (m_size)
            _any = ::ecore::as < ::ecore::EObject > (m_size);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::MEMORYDEFINITION__ACCESSLATENCY:
    {
        if (m_accessLatency)
            _any = ::ecore::as < ::ecore::EObject > (m_accessLatency);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::MEMORYDEFINITION__DATARATE:
    {
        if (m_dataRate)
            _any = ::ecore::as < ::ecore::EObject > (m_dataRate);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::MEMORYDEFINITION__MEMORYTYPE:
    {
        ::ecorecpp::mapping::any_traits < ::amalthea::MemoryType
                > ::toAny(_any, m_memoryType);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::MEMORYDEFINITION__CLASSIFIERS:
    {
        _any = m_classifiers->asEListOf< ::ecore::EObject_ptr >();
        return _any;
    }
    }
    throw std::runtime_error(
            "MemoryDefinition::eGet Error. FeatureID:" + _featureID);
}

void MemoryDefinition::eSet(::ecore::EInt _featureID,
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
    case ::amalthea::AmaltheaPackage::MEMORYDEFINITION__SIZE:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::DataSize_ptr _t1 =
                dynamic_cast< ::amalthea::DataSize* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::DataSize >(_t0);*/
        ::amalthea::MemoryDefinition::setSize(_t1);
        return;
    }
    case ::amalthea::AmaltheaPackage::MEMORYDEFINITION__ACCESSLATENCY:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::IDiscreteValueDeviation_ptr _t1 =
                dynamic_cast< ::amalthea::IDiscreteValueDeviation* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::IDiscreteValueDeviation >(_t0);*/
        ::amalthea::MemoryDefinition::setAccessLatency(_t1);
        return;
    }
    case ::amalthea::AmaltheaPackage::MEMORYDEFINITION__DATARATE:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::DataRate_ptr _t1 =
                dynamic_cast< ::amalthea::DataRate* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::DataRate >(_t0);*/
        ::amalthea::MemoryDefinition::setDataRate(_t1);
        return;
    }
    case ::amalthea::AmaltheaPackage::MEMORYDEFINITION__MEMORYTYPE:
    {
        ::amalthea::MemoryType _t0;
        ::ecorecpp::mapping::any_traits < ::amalthea::MemoryType
                > ::fromAny(_newValue, _t0);
        ::amalthea::MemoryDefinition::setMemoryType(_t0);
        return;
    }
    case ::amalthea::AmaltheaPackage::MEMORYDEFINITION__CLASSIFIERS:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::amalthea::MemoryDefinition::getClassifiers().clear();
        ::amalthea::MemoryDefinition::getClassifiers().insert_all(*_t0);
        return;
    }
    }
    throw std::runtime_error(
            "MemoryDefinition::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean MemoryDefinition::eIsSet(::ecore::EInt _featureID)
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
    case ::amalthea::AmaltheaPackage::MEMORYDEFINITION__SIZE:
    {
        return (bool) m_size;
    }
    case ::amalthea::AmaltheaPackage::MEMORYDEFINITION__ACCESSLATENCY:
    {
        return (bool) m_accessLatency;
    }
    case ::amalthea::AmaltheaPackage::MEMORYDEFINITION__DATARATE:
    {
        return (bool) m_dataRate;
    }
    case ::amalthea::AmaltheaPackage::MEMORYDEFINITION__MEMORYTYPE:
    {
        return ::ecorecpp::mapping::set_traits < ::amalthea::MemoryType
                > ::is_set(m_memoryType);
    }
    case ::amalthea::AmaltheaPackage::MEMORYDEFINITION__CLASSIFIERS:
    {
        return m_classifiers && m_classifiers->size();
    }
    }
    throw std::runtime_error(
            "MemoryDefinition::eIsSet Error. FeatureID:" + _featureID);
}

void MemoryDefinition::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "MemoryDefinition::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr MemoryDefinition::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getMemoryDefinition();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void MemoryDefinition::_inverseAdd(::ecore::EInt _featureID,
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
    case ::amalthea::AmaltheaPackage::MEMORYDEFINITION__SIZE:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::MEMORYDEFINITION__ACCESSLATENCY:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::MEMORYDEFINITION__DATARATE:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::MEMORYDEFINITION__CLASSIFIERS:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void MemoryDefinition::_inverseRemove(::ecore::EInt _featureID,
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
    case ::amalthea::AmaltheaPackage::MEMORYDEFINITION__SIZE:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::MEMORYDEFINITION__ACCESSLATENCY:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::MEMORYDEFINITION__DATARATE:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::MEMORYDEFINITION__CLASSIFIERS:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

