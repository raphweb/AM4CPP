// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/ModeSwitchImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "ModeSwitch.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/ActivityGraphItem.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Process.hpp>
#include <amalthea/Runnable.hpp>
#include <amalthea/ActivityGraph.hpp>
#include <amalthea/ModeSwitchEntry.hpp>
#include <amalthea/ModeSwitchDefault.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(ModeSwitchImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void ModeSwitch::_initialize()
{
    // Supertypes
    ::amalthea::ActivityGraphItem::_initialize();

    // References
    for (size_t i = 0; i < m_entries->size(); i++)
    {
        (*m_entries)[i]->_initialize();
    }
    if (m_defaultEntry)
    {
        m_defaultEntry->_initialize();
    }

    /*PROTECTED REGION ID(ModeSwitchImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject ModeSwitch::eGet(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        return amalthea::IAnnotatable::eGet(_featureID, _resolve);
    }
    case ::amalthea::AmaltheaPackage::MODESWITCH__ENTRIES:
    {
        _any = m_entries->asEListOf< ::ecore::EObject_ptr >();
        return _any;
    }
    case ::amalthea::AmaltheaPackage::MODESWITCH__DEFAULTENTRY:
    {
        if (m_defaultEntry)
            _any = ::ecore::as < ::ecore::EObject > (m_defaultEntry);
        return _any;
    }
    }
    throw std::runtime_error("ModeSwitch::eGet Error. FeatureID:" + _featureID);
}

void ModeSwitch::eSet(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        amalthea::IAnnotatable::eSet(_featureID, _newValue);
        return;
    }
    case ::amalthea::AmaltheaPackage::MODESWITCH__ENTRIES:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::amalthea::ModeSwitch::getEntries().clear();
        ::amalthea::ModeSwitch::getEntries().insert_all(*_t0);
        return;
    }
    case ::amalthea::AmaltheaPackage::MODESWITCH__DEFAULTENTRY:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::ModeSwitchDefault_ptr _t1 =
                dynamic_cast< ::amalthea::ModeSwitchDefault* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::ModeSwitchDefault >(_t0);*/
        ::amalthea::ModeSwitch::setDefaultEntry(_t1);
        return;
    }
    }
    throw std::runtime_error("ModeSwitch::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean ModeSwitch::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        return amalthea::IAnnotatable::eIsSet(_featureID);
    }
    case ::amalthea::AmaltheaPackage::ACTIVITYGRAPHITEM__CONTAININGPROCESS:
    case ::amalthea::AmaltheaPackage::ACTIVITYGRAPHITEM__CONTAININGRUNNABLE:
    case ::amalthea::AmaltheaPackage::ACTIVITYGRAPHITEM__CONTAININGACTIVITYGRAPH:
    {
        return amalthea::ActivityGraphItem::eIsSet(_featureID);
    }
    case ::amalthea::AmaltheaPackage::MODESWITCH__ENTRIES:
    {
        return m_entries && m_entries->size();
    }
    case ::amalthea::AmaltheaPackage::MODESWITCH__DEFAULTENTRY:
    {
        return (bool) m_defaultEntry;
    }
    }
    throw std::runtime_error(
            "ModeSwitch::eIsSet Error. FeatureID:" + _featureID);
}

void ModeSwitch::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "ModeSwitch::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr ModeSwitch::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getModeSwitch();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void ModeSwitch::_inverseAdd(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::MODESWITCH__ENTRIES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::MODESWITCH__DEFAULTENTRY:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void ModeSwitch::_inverseRemove(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::MODESWITCH__ENTRIES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::MODESWITCH__DEFAULTENTRY:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

