// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/RunnableRequirementImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "RunnableRequirement.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/Requirement.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/RequirementLimit.hpp>
#include <amalthea/Runnable.hpp>
#include <amalthea/INamed.hpp>
#include <amalthea/Namespace.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(RunnableRequirementImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void RunnableRequirement::_initialize()
{
    // Supertypes
    ::amalthea::Requirement::_initialize();

    // References

    /*PROTECTED REGION ID(RunnableRequirementImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject RunnableRequirement::eGet(::ecore::EInt _featureID,
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
    case ::amalthea::AmaltheaPackage::RUNNABLEREQUIREMENT__RUNNABLE:
    {
        if (m_runnable)
            _any = ::ecore::as < ::ecore::EObject > (m_runnable);
        return _any;
    }
    }
    throw std::runtime_error(
            "RunnableRequirement::eGet Error. FeatureID:" + _featureID);
}

void RunnableRequirement::eSet(::ecore::EInt _featureID,
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
    case ::amalthea::AmaltheaPackage::RUNNABLEREQUIREMENT__RUNNABLE:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::Runnable_ptr _t1 =
                dynamic_cast< ::amalthea::Runnable* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::Runnable >(_t0);*/
        ::amalthea::RunnableRequirement::setRunnable(_t1);
        return;
    }
    }
    throw std::runtime_error(
            "RunnableRequirement::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean RunnableRequirement::eIsSet(::ecore::EInt _featureID)
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
    case ::amalthea::AmaltheaPackage::RUNNABLEREQUIREMENT__RUNNABLE:
    {
        return (bool) m_runnable;
    }
    }
    throw std::runtime_error(
            "RunnableRequirement::eIsSet Error. FeatureID:" + _featureID);
}

void RunnableRequirement::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "RunnableRequirement::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr RunnableRequirement::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getRunnableRequirement();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void RunnableRequirement::_inverseAdd(::ecore::EInt _featureID,
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
    case ::amalthea::AmaltheaPackage::RUNNABLEREQUIREMENT__RUNNABLE:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void RunnableRequirement::_inverseRemove(::ecore::EInt _featureID,
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
    case ::amalthea::AmaltheaPackage::RUNNABLEREQUIREMENT__RUNNABLE:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

