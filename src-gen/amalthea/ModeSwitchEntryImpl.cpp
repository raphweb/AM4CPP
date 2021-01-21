// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/ModeSwitchEntryImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "ModeSwitchEntry.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/BaseObject.hpp>
#include <amalthea/INamed.hpp>
#include <amalthea/IActivityGraphItemContainer.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/ActivityGraphItem.hpp>
#include <amalthea/ModeConditionDisjunction.hpp>
#include <amalthea/Namespace.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(ModeSwitchEntryImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void ModeSwitchEntry::_initialize()
{
    // Supertypes
    ::amalthea::BaseObject::_initialize();
    ::amalthea::INamed::_initialize();
    ::amalthea::IActivityGraphItemContainer::_initialize();

    // References
    if (m_condition)
    {
        m_condition->_initialize();
    }

    /*PROTECTED REGION ID(ModeSwitchEntryImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject ModeSwitchEntry::eGet(::ecore::EInt _featureID,
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
    case ::amalthea::AmaltheaPackage::IACTIVITYGRAPHITEMCONTAINER__ITEMS:
    {
        return amalthea::IActivityGraphItemContainer::eGet(_featureID, _resolve);
    }
    case ::amalthea::AmaltheaPackage::MODESWITCHENTRY__CONDITION:
    {
        if (m_condition)
            _any = ::ecore::as < ::ecore::EObject > (m_condition);
        return _any;
    }
    }
    throw std::runtime_error(
            "ModeSwitchEntry::eGet Error. FeatureID:" + _featureID);
}

void ModeSwitchEntry::eSet(::ecore::EInt _featureID,
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
    case ::amalthea::AmaltheaPackage::IACTIVITYGRAPHITEMCONTAINER__ITEMS:
    {
        amalthea::IActivityGraphItemContainer::eSet(_featureID, _newValue);
        return;
    }
    case ::amalthea::AmaltheaPackage::MODESWITCHENTRY__CONDITION:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::ModeConditionDisjunction_ptr _t1 =
                dynamic_cast< ::amalthea::ModeConditionDisjunction* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::ModeConditionDisjunction >(_t0);*/
        ::amalthea::ModeSwitchEntry::setCondition(_t1);
        return;
    }
    }
    throw std::runtime_error(
            "ModeSwitchEntry::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean ModeSwitchEntry::eIsSet(::ecore::EInt _featureID)
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
    case ::amalthea::AmaltheaPackage::IACTIVITYGRAPHITEMCONTAINER__ITEMS:
    {
        return amalthea::IActivityGraphItemContainer::eIsSet(_featureID);
    }
    case ::amalthea::AmaltheaPackage::MODESWITCHENTRY__CONDITION:
    {
        return (bool) m_condition;
    }
    }
    throw std::runtime_error(
            "ModeSwitchEntry::eIsSet Error. FeatureID:" + _featureID);
}

void ModeSwitchEntry::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "ModeSwitchEntry::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr ModeSwitchEntry::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getModeSwitchEntry();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void ModeSwitchEntry::_inverseAdd(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::IACTIVITYGRAPHITEMCONTAINER__ITEMS:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::MODESWITCHENTRY__CONDITION:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void ModeSwitchEntry::_inverseRemove(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::IACTIVITYGRAPHITEMCONTAINER__ITEMS:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::MODESWITCHENTRY__CONDITION:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

