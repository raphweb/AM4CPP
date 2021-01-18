// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/BaseTypeDefinitionImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "BaseTypeDefinition.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/TypeDefinition.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Namespace.hpp>
#include <amalthea/DataSize.hpp>
#include <amalthea/Alias.hpp>
#include <amalthea/INamed.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(BaseTypeDefinitionImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void BaseTypeDefinition::_initialize()
{
    // Supertypes
    ::amalthea::TypeDefinition::_initialize();

    // References
    for (size_t i = 0; i < m_aliases->size(); i++)
    {
        (*m_aliases)[i]->_initialize();
    }

    /*PROTECTED REGION ID(BaseTypeDefinitionImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject BaseTypeDefinition::eGet(::ecore::EInt _featureID,
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
    case ::amalthea::AmaltheaPackage::BASETYPEDEFINITION__ALIASES:
    {
        _any = m_aliases->asEListOf< ::ecore::EObject_ptr >();
        return _any;
    }
    }
    throw std::runtime_error(
            "BaseTypeDefinition::eGet Error. FeatureID:" + _featureID);
}

void BaseTypeDefinition::eSet(::ecore::EInt _featureID,
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
    case ::amalthea::AmaltheaPackage::BASETYPEDEFINITION__ALIASES:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::amalthea::BaseTypeDefinition::getAliases().clear();
        ::amalthea::BaseTypeDefinition::getAliases().insert_all(*_t0);
        return;
    }
    }
    throw std::runtime_error(
            "BaseTypeDefinition::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean BaseTypeDefinition::eIsSet(::ecore::EInt _featureID)
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
    case ::amalthea::AmaltheaPackage::BASETYPEDEFINITION__ALIASES:
    {
        return m_aliases && m_aliases->size();
    }
    }
    throw std::runtime_error(
            "BaseTypeDefinition::eIsSet Error. FeatureID:" + _featureID);
}

void BaseTypeDefinition::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "BaseTypeDefinition::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr BaseTypeDefinition::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getBaseTypeDefinition();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void BaseTypeDefinition::_inverseAdd(::ecore::EInt _featureID,
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
    case ::amalthea::AmaltheaPackage::BASETYPEDEFINITION__ALIASES:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void BaseTypeDefinition::_inverseRemove(::ecore::EInt _featureID,
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
    case ::amalthea::AmaltheaPackage::BASETYPEDEFINITION__ALIASES:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

