// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/ProcessChainRequirementImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "ProcessChainRequirement.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/Requirement.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/RequirementLimit.hpp>
#include <amalthea/ProcessChain.hpp>
#include <amalthea/INamed.hpp>
#include <amalthea/Namespace.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(ProcessChainRequirementImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void ProcessChainRequirement::_initialize()
{
    // Supertypes
    ::amalthea::Requirement::_initialize();

    // References

    /*PROTECTED REGION ID(ProcessChainRequirementImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject ProcessChainRequirement::eGet(::ecore::EInt _featureID,
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
    case ::amalthea::AmaltheaPackage::PROCESSCHAINREQUIREMENT__PROCESSCHAIN:
    {
        if (m_processChain)
            _any = ::ecore::as < ::ecore::EObject > (m_processChain);
        return _any;
    }
    }
    throw std::runtime_error(
            "ProcessChainRequirement::eGet Error. FeatureID:" + _featureID);
}

void ProcessChainRequirement::eSet(::ecore::EInt _featureID,
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
    case ::amalthea::AmaltheaPackage::PROCESSCHAINREQUIREMENT__PROCESSCHAIN:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::ProcessChain_ptr _t1 =
                dynamic_cast< ::amalthea::ProcessChain* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::ProcessChain >(_t0);*/
        ::amalthea::ProcessChainRequirement::setProcessChain(_t1);
        return;
    }
    }
    throw std::runtime_error(
            "ProcessChainRequirement::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean ProcessChainRequirement::eIsSet(::ecore::EInt _featureID)
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
    case ::amalthea::AmaltheaPackage::PROCESSCHAINREQUIREMENT__PROCESSCHAIN:
    {
        return (bool) m_processChain;
    }
    }
    throw std::runtime_error(
            "ProcessChainRequirement::eIsSet Error. FeatureID:" + _featureID);
}

void ProcessChainRequirement::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "ProcessChainRequirement::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr ProcessChainRequirement::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getProcessChainRequirement();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void ProcessChainRequirement::_inverseAdd(::ecore::EInt _featureID,
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
    case ::amalthea::AmaltheaPackage::PROCESSCHAINREQUIREMENT__PROCESSCHAIN:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void ProcessChainRequirement::_inverseRemove(::ecore::EInt _featureID,
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
    case ::amalthea::AmaltheaPackage::PROCESSCHAINREQUIREMENT__PROCESSCHAIN:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

