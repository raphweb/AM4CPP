// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/PeriodicActivationImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "PeriodicActivation.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/Activation.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Tag.hpp>
#include <amalthea/Time.hpp>
#include <amalthea/INamed.hpp>
#include <amalthea/Namespace.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(PeriodicActivationImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void PeriodicActivation::_initialize()
{
    // Supertypes
    ::amalthea::Activation::_initialize();

    // References
    if (m_min)
    {
        m_min->_initialize();
    }
    if (m_max)
    {
        m_max->_initialize();
    }
    if (m_recurrence)
    {
        m_recurrence->_initialize();
    }
    if (m_offset)
    {
        m_offset->_initialize();
    }

    /*PROTECTED REGION ID(PeriodicActivationImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject PeriodicActivation::eGet(::ecore::EInt _featureID,
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
    case ::amalthea::AmaltheaPackage::ITAGGABLE__TAGS:
    {
        return amalthea::ITaggable::eGet(_featureID, _resolve);
    }
    case ::amalthea::AmaltheaPackage::PERIODICACTIVATION__MIN:
    {
        if (m_min)
            _any = ::ecore::as < ::ecore::EObject > (m_min);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::PERIODICACTIVATION__MAX:
    {
        if (m_max)
            _any = ::ecore::as < ::ecore::EObject > (m_max);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::PERIODICACTIVATION__RECURRENCE:
    {
        if (m_recurrence)
            _any = ::ecore::as < ::ecore::EObject > (m_recurrence);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::PERIODICACTIVATION__OFFSET:
    {
        if (m_offset)
            _any = ::ecore::as < ::ecore::EObject > (m_offset);
        return _any;
    }
    }
    throw std::runtime_error(
            "PeriodicActivation::eGet Error. FeatureID:" + _featureID);
}

void PeriodicActivation::eSet(::ecore::EInt _featureID,
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
    case ::amalthea::AmaltheaPackage::ITAGGABLE__TAGS:
    {
        amalthea::ITaggable::eSet(_featureID, _newValue);
        return;
    }
    case ::amalthea::AmaltheaPackage::PERIODICACTIVATION__MIN:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::Time_ptr _t1 = dynamic_cast< ::amalthea::Time* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::Time >(_t0);*/
        ::amalthea::PeriodicActivation::setMin(_t1);
        return;
    }
    case ::amalthea::AmaltheaPackage::PERIODICACTIVATION__MAX:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::Time_ptr _t1 = dynamic_cast< ::amalthea::Time* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::Time >(_t0);*/
        ::amalthea::PeriodicActivation::setMax(_t1);
        return;
    }
    case ::amalthea::AmaltheaPackage::PERIODICACTIVATION__RECURRENCE:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::Time_ptr _t1 = dynamic_cast< ::amalthea::Time* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::Time >(_t0);*/
        ::amalthea::PeriodicActivation::setRecurrence(_t1);
        return;
    }
    case ::amalthea::AmaltheaPackage::PERIODICACTIVATION__OFFSET:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::Time_ptr _t1 = dynamic_cast< ::amalthea::Time* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::Time >(_t0);*/
        ::amalthea::PeriodicActivation::setOffset(_t1);
        return;
    }
    }
    throw std::runtime_error(
            "PeriodicActivation::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean PeriodicActivation::eIsSet(::ecore::EInt _featureID)
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
    case ::amalthea::AmaltheaPackage::ITAGGABLE__TAGS:
    {
        return amalthea::ITaggable::eIsSet(_featureID);
    }
    case ::amalthea::AmaltheaPackage::PERIODICACTIVATION__MIN:
    {
        return (bool) m_min;
    }
    case ::amalthea::AmaltheaPackage::PERIODICACTIVATION__MAX:
    {
        return (bool) m_max;
    }
    case ::amalthea::AmaltheaPackage::PERIODICACTIVATION__RECURRENCE:
    {
        return (bool) m_recurrence;
    }
    case ::amalthea::AmaltheaPackage::PERIODICACTIVATION__OFFSET:
    {
        return (bool) m_offset;
    }
    }
    throw std::runtime_error(
            "PeriodicActivation::eIsSet Error. FeatureID:" + _featureID);
}

void PeriodicActivation::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "PeriodicActivation::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr PeriodicActivation::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getPeriodicActivation();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void PeriodicActivation::_inverseAdd(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::ITAGGABLE__TAGS:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::PERIODICACTIVATION__MIN:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::PERIODICACTIVATION__MAX:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::PERIODICACTIVATION__RECURRENCE:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::PERIODICACTIVATION__OFFSET:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void PeriodicActivation::_inverseRemove(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::ITAGGABLE__TAGS:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::PERIODICACTIVATION__MIN:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::PERIODICACTIVATION__MAX:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::PERIODICACTIVATION__RECURRENCE:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::PERIODICACTIVATION__OFFSET:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

