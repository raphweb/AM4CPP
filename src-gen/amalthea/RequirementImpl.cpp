// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/RequirementImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "Requirement.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/BaseObject.hpp>
#include <amalthea/INamed.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/RequirementLimit.hpp>
#include <amalthea/Namespace.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(RequirementImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void Requirement::_initialize()
{
    // Supertypes
    ::amalthea::BaseObject::_initialize();
    ::amalthea::INamed::_initialize();

    // References
    if (m_limit)
    {
        m_limit->_initialize();
    }

    /*PROTECTED REGION ID(RequirementImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject Requirement::eGet(::ecore::EInt _featureID,
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
    case ::amalthea::AmaltheaPackage::REQUIREMENT__SEVERITY:
    {
        ::ecorecpp::mapping::any_traits < ::amalthea::Severity
                > ::toAny(_any, m_severity);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::REQUIREMENT__LIMIT:
    {
        if (m_limit)
            _any = ::ecore::as < ::ecore::EObject > (m_limit);
        return _any;
    }
    }
    throw std::runtime_error(
            "Requirement::eGet Error. FeatureID:" + _featureID);
}

void Requirement::eSet(::ecore::EInt _featureID,
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
    case ::amalthea::AmaltheaPackage::REQUIREMENT__SEVERITY:
    {
        ::amalthea::Severity _t0;
        ::ecorecpp::mapping::any_traits < ::amalthea::Severity
                > ::fromAny(_newValue, _t0);
        ::amalthea::Requirement::setSeverity(_t0);
        return;
    }
    case ::amalthea::AmaltheaPackage::REQUIREMENT__LIMIT:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::RequirementLimit_ptr _t1 =
                dynamic_cast< ::amalthea::RequirementLimit* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::RequirementLimit >(_t0);*/
        ::amalthea::Requirement::setLimit(_t1);
        return;
    }
    }
    throw std::runtime_error(
            "Requirement::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean Requirement::eIsSet(::ecore::EInt _featureID)
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
    {
        return ::ecorecpp::mapping::set_traits < ::amalthea::Severity
                > ::is_set(m_severity);
    }
    case ::amalthea::AmaltheaPackage::REQUIREMENT__LIMIT:
    {
        return (bool) m_limit;
    }
    }
    throw std::runtime_error(
            "Requirement::eIsSet Error. FeatureID:" + _featureID);
}

void Requirement::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "Requirement::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr Requirement::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getRequirement();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void Requirement::_inverseAdd(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
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

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void Requirement::_inverseRemove(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_oldValue)
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

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

