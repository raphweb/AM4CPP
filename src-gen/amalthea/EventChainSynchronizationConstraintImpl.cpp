// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/EventChainSynchronizationConstraintImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "EventChainSynchronizationConstraint.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/SynchronizationConstraint.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Time.hpp>
#include <amalthea/EventChain.hpp>
#include <amalthea/INamed.hpp>
#include <amalthea/Namespace.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(EventChainSynchronizationConstraintImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void EventChainSynchronizationConstraint::_initialize()
{
    // Supertypes
    ::amalthea::SynchronizationConstraint::_initialize();

    // References

    /*PROTECTED REGION ID(EventChainSynchronizationConstraintImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject EventChainSynchronizationConstraint::eGet(
        ::ecore::EInt _featureID, ::ecore::EBoolean _resolve)
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
    case ::amalthea::AmaltheaPackage::SYNCHRONIZATIONCONSTRAINT__MULTIPLEOCCURRENCESALLOWED:
    case ::amalthea::AmaltheaPackage::SYNCHRONIZATIONCONSTRAINT__TOLERANCE:
    {
        return amalthea::SynchronizationConstraint::eGet(_featureID, _resolve);
    }
    case ::amalthea::AmaltheaPackage::EVENTCHAINSYNCHRONIZATIONCONSTRAINT__SCOPE:
    {
        _any = m_scope->asEListOf< ::ecore::EObject_ptr >();
        return _any;
    }
    case ::amalthea::AmaltheaPackage::EVENTCHAINSYNCHRONIZATIONCONSTRAINT__TYPE:
    {
        ::ecorecpp::mapping::any_traits < ::amalthea::SynchronizationType
                > ::toAny(_any, m_type);
        return _any;
    }
    }
    throw std::runtime_error(
            "EventChainSynchronizationConstraint::eGet Error. FeatureID:"
                    + _featureID);
}

void EventChainSynchronizationConstraint::eSet(::ecore::EInt _featureID,
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
    case ::amalthea::AmaltheaPackage::SYNCHRONIZATIONCONSTRAINT__MULTIPLEOCCURRENCESALLOWED:
    case ::amalthea::AmaltheaPackage::SYNCHRONIZATIONCONSTRAINT__TOLERANCE:
    {
        amalthea::SynchronizationConstraint::eSet(_featureID, _newValue);
        return;
    }
    case ::amalthea::AmaltheaPackage::EVENTCHAINSYNCHRONIZATIONCONSTRAINT__SCOPE:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::amalthea::EventChainSynchronizationConstraint::getScope().clear();
        ::amalthea::EventChainSynchronizationConstraint::getScope().insert_all(
                *_t0);
        return;
    }
    case ::amalthea::AmaltheaPackage::EVENTCHAINSYNCHRONIZATIONCONSTRAINT__TYPE:
    {
        ::amalthea::SynchronizationType _t0;
        ::ecorecpp::mapping::any_traits < ::amalthea::SynchronizationType
                > ::fromAny(_newValue, _t0);
        ::amalthea::EventChainSynchronizationConstraint::setType(_t0);
        return;
    }
    }
    throw std::runtime_error(
            "EventChainSynchronizationConstraint::eSet Error. FeatureID:"
                    + _featureID);
}

::ecore::EBoolean EventChainSynchronizationConstraint::eIsSet(
        ::ecore::EInt _featureID)
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
    case ::amalthea::AmaltheaPackage::SYNCHRONIZATIONCONSTRAINT__MULTIPLEOCCURRENCESALLOWED:
    case ::amalthea::AmaltheaPackage::SYNCHRONIZATIONCONSTRAINT__TOLERANCE:
    {
        return amalthea::SynchronizationConstraint::eIsSet(_featureID);
    }
    case ::amalthea::AmaltheaPackage::EVENTCHAINSYNCHRONIZATIONCONSTRAINT__SCOPE:
    {
        return m_scope && m_scope->size();
    }
    case ::amalthea::AmaltheaPackage::EVENTCHAINSYNCHRONIZATIONCONSTRAINT__TYPE:
    {
        return ::ecorecpp::mapping::set_traits < ::amalthea::SynchronizationType
                > ::is_set(m_type);
    }
    }
    throw std::runtime_error(
            "EventChainSynchronizationConstraint::eIsSet Error. FeatureID:"
                    + _featureID);
}

void EventChainSynchronizationConstraint::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "EventChainSynchronizationConstraint::eUnset Error. FeatureID:"
                    + _featureID);
}

::ecore::EClass_ptr EventChainSynchronizationConstraint::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getEventChainSynchronizationConstraint();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void EventChainSynchronizationConstraint::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::SYNCHRONIZATIONCONSTRAINT__TOLERANCE:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::EVENTCHAINSYNCHRONIZATIONCONSTRAINT__SCOPE:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void EventChainSynchronizationConstraint::_inverseRemove(
        ::ecore::EInt _featureID, ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::SYNCHRONIZATIONCONSTRAINT__TOLERANCE:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::EVENTCHAINSYNCHRONIZATIONCONSTRAINT__SCOPE:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

