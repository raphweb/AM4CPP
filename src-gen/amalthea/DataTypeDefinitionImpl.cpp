// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/DataTypeDefinitionImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "DataTypeDefinition.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/TypeDefinition.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Namespace.hpp>
#include <amalthea/DataSize.hpp>
#include <amalthea/DataType.hpp>
#include <amalthea/INamed.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(DataTypeDefinitionImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void DataTypeDefinition::_initialize()
{
    // Supertypes
    ::amalthea::TypeDefinition::_initialize();

    // References
    if (m_dataType)
    {
        m_dataType->_initialize();
    }

    /*PROTECTED REGION ID(DataTypeDefinitionImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject DataTypeDefinition::eGet(::ecore::EInt _featureID,
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
    case ::amalthea::AmaltheaPackage::INAMESPACEMEMBER__NAMESPACE:
    {
        return amalthea::INamespaceMember::eGet(_featureID, _resolve);
    }
    case ::amalthea::AmaltheaPackage::TYPEDEFINITION__SIZE:
    {
        return amalthea::TypeDefinition::eGet(_featureID, _resolve);
    }
    case ::amalthea::AmaltheaPackage::DATATYPEDEFINITION__DATATYPE:
    {
        if (m_dataType)
            _any = ::ecore::as < ::ecore::EObject > (m_dataType);
        return _any;
    }
    }
    throw std::runtime_error(
            "DataTypeDefinition::eGet Error. FeatureID:" + _featureID);
}

void DataTypeDefinition::eSet(::ecore::EInt _featureID,
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
    case ::amalthea::AmaltheaPackage::INAMESPACEMEMBER__NAMESPACE:
    {
        amalthea::INamespaceMember::eSet(_featureID, _newValue);
        return;
    }
    case ::amalthea::AmaltheaPackage::TYPEDEFINITION__SIZE:
    {
        amalthea::TypeDefinition::eSet(_featureID, _newValue);
        return;
    }
    case ::amalthea::AmaltheaPackage::DATATYPEDEFINITION__DATATYPE:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::DataType_ptr _t1 =
                dynamic_cast< ::amalthea::DataType* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::DataType >(_t0);*/
        ::amalthea::DataTypeDefinition::setDataType(_t1);
        return;
    }
    }
    throw std::runtime_error(
            "DataTypeDefinition::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean DataTypeDefinition::eIsSet(::ecore::EInt _featureID)
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
    case ::amalthea::AmaltheaPackage::INAMESPACEMEMBER__NAMESPACE:
    {
        return amalthea::INamespaceMember::eIsSet(_featureID);
    }
    case ::amalthea::AmaltheaPackage::TYPEDEFINITION__SIZE:
    {
        return amalthea::TypeDefinition::eIsSet(_featureID);
    }
    case ::amalthea::AmaltheaPackage::DATATYPEDEFINITION__DATATYPE:
    {
        return (bool) m_dataType;
    }
    }
    throw std::runtime_error(
            "DataTypeDefinition::eIsSet Error. FeatureID:" + _featureID);
}

void DataTypeDefinition::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "DataTypeDefinition::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr DataTypeDefinition::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getDataTypeDefinition();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void DataTypeDefinition::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::INAMESPACEMEMBER__NAMESPACE:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::TYPEDEFINITION__SIZE:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::DATATYPEDEFINITION__DATATYPE:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void DataTypeDefinition::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::INAMESPACEMEMBER__NAMESPACE:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::TYPEDEFINITION__SIZE:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::DATATYPEDEFINITION__DATATYPE:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

