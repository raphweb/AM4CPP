// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/EventSynchronizationConstraintImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "EventSynchronizationConstraint.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/SynchronizationConstraint.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Time.hpp>
#include <amalthea/EntityEvent.hpp>
#include <amalthea/INamed.hpp>
#include <amalthea/Namespace.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(EventSynchronizationConstraintImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void EventSynchronizationConstraint::_initialize()
{
    // Supertypes
    ::amalthea::SynchronizationConstraint::_initialize();

    // References

    /*PROTECTED REGION ID(EventSynchronizationConstraintImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject EventSynchronizationConstraint::eGet(
        ::ecore::EInt _featureID, [[maybe_unused]] ::ecore::EBoolean _resolve)
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
    case ::amalthea::AmaltheaPackage::EVENTSYNCHRONIZATIONCONSTRAINT__EVENTS:
    {
        _any = m_events->asEListOf< ::ecore::EObject_ptr >();
        return _any;
    }
    }
    throw std::runtime_error(
            "EventSynchronizationConstraint::eGet Error. FeatureID:"
                    + _featureID);
}

void EventSynchronizationConstraint::eSet(::ecore::EInt _featureID,
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
    case ::amalthea::AmaltheaPackage::SYNCHRONIZATIONCONSTRAINT__MULTIPLEOCCURRENCESALLOWED:
    case ::amalthea::AmaltheaPackage::SYNCHRONIZATIONCONSTRAINT__TOLERANCE:
    {
        amalthea::SynchronizationConstraint::eSet(_featureID, _newValue);
        return;
    }
    case ::amalthea::AmaltheaPackage::EVENTSYNCHRONIZATIONCONSTRAINT__EVENTS:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::amalthea::EventSynchronizationConstraint::getEvents().clear();
        ::amalthea::EventSynchronizationConstraint::getEvents().insert_all(
                *_t0);
        return;
    }
    }
    throw std::runtime_error(
            "EventSynchronizationConstraint::eSet Error. FeatureID:"
                    + _featureID);
}

::ecore::EBoolean EventSynchronizationConstraint::eIsSet(
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
    case ::amalthea::AmaltheaPackage::EVENTSYNCHRONIZATIONCONSTRAINT__EVENTS:
    {
        return m_events && m_events->size();
    }
    }
    throw std::runtime_error(
            "EventSynchronizationConstraint::eIsSet Error. FeatureID:"
                    + _featureID);
}

void EventSynchronizationConstraint::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "EventSynchronizationConstraint::eUnset Error. FeatureID:"
                    + _featureID);
}

::ecore::EClass_ptr EventSynchronizationConstraint::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getEventSynchronizationConstraint();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void EventSynchronizationConstraint::_inverseAdd(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
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
    case ::amalthea::AmaltheaPackage::EVENTSYNCHRONIZATIONCONSTRAINT__EVENTS:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void EventSynchronizationConstraint::_inverseRemove(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_oldValue)
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
    case ::amalthea::AmaltheaPackage::EVENTSYNCHRONIZATIONCONSTRAINT__EVENTS:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

