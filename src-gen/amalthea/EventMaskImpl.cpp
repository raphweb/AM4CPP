// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/EventMaskImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "EventMask.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/BaseObject.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/OsEvent.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(EventMaskImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void EventMask::_initialize()
{
    // Supertypes
    ::amalthea::BaseObject::_initialize();

    // References

    /*PROTECTED REGION ID(EventMaskImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject EventMask::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        return amalthea::IAnnotatable::eGet(_featureID, _resolve);
    }
    case ::amalthea::AmaltheaPackage::EVENTMASK__EVENTS:
    {
        _any = m_events->asEListOf< ::ecore::EObject_ptr >();
        return _any;
    }
    }
    throw std::runtime_error("EventMask::eGet Error. FeatureID:" + _featureID);
}

void EventMask::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        amalthea::IAnnotatable::eSet(_featureID, _newValue);
        return;
    }
    case ::amalthea::AmaltheaPackage::EVENTMASK__EVENTS:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::amalthea::EventMask::getEvents().clear();
        ::amalthea::EventMask::getEvents().insert_all(*_t0);
        return;
    }
    }
    throw std::runtime_error("EventMask::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean EventMask::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        return amalthea::IAnnotatable::eIsSet(_featureID);
    }
    case ::amalthea::AmaltheaPackage::EVENTMASK__EVENTS:
    {
        return m_events && m_events->size();
    }
    }
    throw std::runtime_error(
            "EventMask::eIsSet Error. FeatureID:" + _featureID);
}

void EventMask::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "EventMask::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr EventMask::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getEventMask();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void EventMask::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::EVENTMASK__EVENTS:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void EventMask::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::EVENTMASK__EVENTS:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}
