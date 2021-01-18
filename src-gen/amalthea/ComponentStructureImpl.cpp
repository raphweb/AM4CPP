// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/ComponentStructureImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "ComponentStructure.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/ReferableObject.hpp>
#include <amalthea/ComponentStructure.hpp>
#include <amalthea/IComponentStructureMember.hpp>
#include <amalthea/INamed.hpp>
#include <amalthea/Namespace.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(ComponentStructureImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void ComponentStructure::_initialize()
{
    // Supertypes
    ::amalthea::ReferableObject::_initialize();

    // References
    for (size_t i = 0; i < m_subStructures->size(); i++)
    {
        (*m_subStructures)[i]->_initialize();
    }

    /*PROTECTED REGION ID(ComponentStructureImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

::amalthea::ComponentStructure_ptr ComponentStructure::getContainingStructure()
{
    /*PROTECTED REGION ID(ComponentStructureImpl_getContainingStructure) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    throw "UnsupportedOperationException: amalthea::ComponentStructure::getContainingStructure";
    /*PROTECTED REGION END*/
}

::ecore::EString ComponentStructure::getDefaultNameSeparator()
{
    /*PROTECTED REGION ID(ComponentStructureImpl_getDefaultNameSeparator) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    throw "UnsupportedOperationException: amalthea::ComponentStructure::getDefaultNameSeparator";
    /*PROTECTED REGION END*/
}

std::vector< ::ecore::EString > ComponentStructure::getNamePrefixSegments()
{
    /*PROTECTED REGION ID(ComponentStructureImpl_getNamePrefixSegments) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    throw "UnsupportedOperationException: amalthea::ComponentStructure::getNamePrefixSegments";
    /*PROTECTED REGION END*/
}

// EObject
::ecore::EJavaObject ComponentStructure::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::INAMED__NAME:
    {
        return amalthea::INamed::eGet(_featureID, _resolve);
    }
    case ::amalthea::AmaltheaPackage::COMPONENTSTRUCTURE__STRUCTURETYPE:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::toAny(_any, m_structureType);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::COMPONENTSTRUCTURE__SUBSTRUCTURES:
    {
        _any = m_subStructures->asEListOf< ::ecore::EObject_ptr >();
        return _any;
    }
    }
    throw std::runtime_error(
            "ComponentStructure::eGet Error. FeatureID:" + _featureID);
}

void ComponentStructure::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::INAMED__NAME:
    {
        amalthea::INamed::eSet(_featureID, _newValue);
        return;
    }
    case ::amalthea::AmaltheaPackage::COMPONENTSTRUCTURE__STRUCTURETYPE:
    {
        ::ecore::EString _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::fromAny(_newValue, _t0);
        ::amalthea::ComponentStructure::setStructureType(_t0);
        return;
    }
    case ::amalthea::AmaltheaPackage::COMPONENTSTRUCTURE__SUBSTRUCTURES:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::amalthea::ComponentStructure::getSubStructures().clear();
        ::amalthea::ComponentStructure::getSubStructures().insert_all(*_t0);
        return;
    }
    }
    throw std::runtime_error(
            "ComponentStructure::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean ComponentStructure::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::INAMED__NAME:
    case ::amalthea::AmaltheaPackage::INAMED__QUALIFIEDNAME:
    {
        return amalthea::INamed::eIsSet(_featureID);
    }
    case ::amalthea::AmaltheaPackage::IREFERABLE__UNIQUENAME:
    {
        return amalthea::IReferable::eIsSet(_featureID);
    }
    case ::amalthea::AmaltheaPackage::COMPONENTSTRUCTURE__STRUCTURETYPE:
    {
        return ::ecorecpp::mapping::set_traits < ::ecore::EString
                > ::is_set(m_structureType);
    }
    case ::amalthea::AmaltheaPackage::COMPONENTSTRUCTURE__SUBSTRUCTURES:
    {
        return m_subStructures && m_subStructures->size();
    }
    case ::amalthea::AmaltheaPackage::COMPONENTSTRUCTURE__MEMBEROBJECTS:
    {
        return m_memberObjects && m_memberObjects->size();
    }
    }
    throw std::runtime_error(
            "ComponentStructure::eIsSet Error. FeatureID:" + _featureID);
}

void ComponentStructure::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "ComponentStructure::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr ComponentStructure::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getComponentStructure();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void ComponentStructure::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::COMPONENTSTRUCTURE__SUBSTRUCTURES:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void ComponentStructure::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::COMPONENTSTRUCTURE__SUBSTRUCTURES:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

