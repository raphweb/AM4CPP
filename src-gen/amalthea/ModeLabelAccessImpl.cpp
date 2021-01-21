// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/ModeLabelAccessImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "ModeLabelAccess.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/ActivityGraphItem.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Process.hpp>
#include <amalthea/Runnable.hpp>
#include <amalthea/ActivityGraph.hpp>
#include <amalthea/ModeLabel.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(ModeLabelAccessImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void ModeLabelAccess::_initialize()
{
    // Supertypes
    ::amalthea::ActivityGraphItem::_initialize();

    // References

    /*PROTECTED REGION ID(ModeLabelAccessImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

::ecore::EBoolean ModeLabelAccess::validateInvariants(
        ::ecore::EDiagnosticChain _diagnostics,
        std::map< ::ecore::EJavaObject, ::ecore::EJavaObject > const &_context)
{
    /*PROTECTED REGION ID(ModeLabelAccessImpl_validateInvariants) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    throw "UnsupportedOperationException: amalthea::ModeLabelAccess::validateInvariants";
    /*PROTECTED REGION END*/
}

// EObject
::ecore::EJavaObject ModeLabelAccess::eGet(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        return amalthea::IAnnotatable::eGet(_featureID, _resolve);
    }
    case ::amalthea::AmaltheaPackage::MODELABELACCESS__DATA:
    {
        if (m_data)
            _any = ::ecore::as < ::ecore::EObject > (m_data);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::MODELABELACCESS__ACCESS:
    {
        ::ecorecpp::mapping::any_traits < ::amalthea::ModeLabelAccessEnum
                > ::toAny(_any, m_access);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::MODELABELACCESS__VALUE:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::toAny(_any, m_value);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::MODELABELACCESS__STEP:
    {
        ::ecorecpp::mapping::any_traits < ::amalthea::PositiveInt
                > ::toAny(_any, m_step);
        return _any;
    }
    }
    throw std::runtime_error(
            "ModeLabelAccess::eGet Error. FeatureID:" + _featureID);
}

void ModeLabelAccess::eSet(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        amalthea::IAnnotatable::eSet(_featureID, _newValue);
        return;
    }
    case ::amalthea::AmaltheaPackage::MODELABELACCESS__DATA:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::ModeLabel_ptr _t1 =
                dynamic_cast< ::amalthea::ModeLabel* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::ModeLabel >(_t0);*/
        ::amalthea::ModeLabelAccess::setData(_t1);
        return;
    }
    case ::amalthea::AmaltheaPackage::MODELABELACCESS__ACCESS:
    {
        ::amalthea::ModeLabelAccessEnum _t0;
        ::ecorecpp::mapping::any_traits < ::amalthea::ModeLabelAccessEnum
                > ::fromAny(_newValue, _t0);
        ::amalthea::ModeLabelAccess::setAccess(_t0);
        return;
    }
    case ::amalthea::AmaltheaPackage::MODELABELACCESS__VALUE:
    {
        ::ecore::EString _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::fromAny(_newValue, _t0);
        ::amalthea::ModeLabelAccess::setValue(_t0);
        return;
    }
    case ::amalthea::AmaltheaPackage::MODELABELACCESS__STEP:
    {
        ::amalthea::PositiveInt _t0;
        ::ecorecpp::mapping::any_traits < ::amalthea::PositiveInt
                > ::fromAny(_newValue, _t0);
        ::amalthea::ModeLabelAccess::setStep(_t0);
        return;
    }
    }
    throw std::runtime_error(
            "ModeLabelAccess::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean ModeLabelAccess::eIsSet(::ecore::EInt _featureID)
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
    case ::amalthea::AmaltheaPackage::MODELABELACCESS__DATA:
    {
        return (bool) m_data;
    }
    case ::amalthea::AmaltheaPackage::MODELABELACCESS__ACCESS:
    {
        return ::ecorecpp::mapping::set_traits < ::amalthea::ModeLabelAccessEnum
                > ::is_set(m_access);
    }
    case ::amalthea::AmaltheaPackage::MODELABELACCESS__VALUE:
    {
        return ::ecorecpp::mapping::set_traits < ::ecore::EString
                > ::is_set(m_value);
    }
    case ::amalthea::AmaltheaPackage::MODELABELACCESS__STEP:
    {
        return m_step != 1;
    }
    }
    throw std::runtime_error(
            "ModeLabelAccess::eIsSet Error. FeatureID:" + _featureID);
}

void ModeLabelAccess::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "ModeLabelAccess::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr ModeLabelAccess::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getModeLabelAccess();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void ModeLabelAccess::_inverseAdd(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::MODELABELACCESS__DATA:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void ModeLabelAccess::_inverseRemove(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::MODELABELACCESS__DATA:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

