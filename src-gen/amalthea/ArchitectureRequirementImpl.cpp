// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/ArchitectureRequirementImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "ArchitectureRequirement.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/Requirement.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/RequirementLimit.hpp>
#include <amalthea/Component.hpp>
#include <amalthea/INamed.hpp>
#include <amalthea/Namespace.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(ArchitectureRequirementImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void ArchitectureRequirement::_initialize()
{
    // Supertypes
    ::amalthea::Requirement::_initialize();

    // References

    /*PROTECTED REGION ID(ArchitectureRequirementImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject ArchitectureRequirement::eGet(::ecore::EInt _featureID,
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
    case ::amalthea::AmaltheaPackage::REQUIREMENT__SEVERITY:
    case ::amalthea::AmaltheaPackage::REQUIREMENT__LIMIT:
    {
        return amalthea::Requirement::eGet(_featureID, _resolve);
    }
    case ::amalthea::AmaltheaPackage::ARCHITECTUREREQUIREMENT__COMPONENT:
    {
        if (m_component)
            _any = ::ecore::as < ::ecore::EObject > (m_component);
        return _any;
    }
    }
    throw std::runtime_error(
            "ArchitectureRequirement::eGet Error. FeatureID:" + _featureID);
}

void ArchitectureRequirement::eSet(::ecore::EInt _featureID,
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
    case ::amalthea::AmaltheaPackage::REQUIREMENT__SEVERITY:
    case ::amalthea::AmaltheaPackage::REQUIREMENT__LIMIT:
    {
        amalthea::Requirement::eSet(_featureID, _newValue);
        return;
    }
    case ::amalthea::AmaltheaPackage::ARCHITECTUREREQUIREMENT__COMPONENT:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::Component_ptr _t1 =
                dynamic_cast< ::amalthea::Component* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::Component >(_t0);*/
        ::amalthea::ArchitectureRequirement::setComponent(_t1);
        return;
    }
    }
    throw std::runtime_error(
            "ArchitectureRequirement::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean ArchitectureRequirement::eIsSet(::ecore::EInt _featureID)
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
    case ::amalthea::AmaltheaPackage::REQUIREMENT__SEVERITY:
    case ::amalthea::AmaltheaPackage::REQUIREMENT__LIMIT:
    {
        return amalthea::Requirement::eIsSet(_featureID);
    }
    case ::amalthea::AmaltheaPackage::ARCHITECTUREREQUIREMENT__COMPONENT:
    {
        return (bool) m_component;
    }
    }
    throw std::runtime_error(
            "ArchitectureRequirement::eIsSet Error. FeatureID:" + _featureID);
}

void ArchitectureRequirement::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "ArchitectureRequirement::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr ArchitectureRequirement::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getArchitectureRequirement();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void ArchitectureRequirement::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::REQUIREMENT__LIMIT:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::ARCHITECTUREREQUIREMENT__COMPONENT:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void ArchitectureRequirement::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::REQUIREMENT__LIMIT:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::ARCHITECTUREREQUIREMENT__COMPONENT:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

