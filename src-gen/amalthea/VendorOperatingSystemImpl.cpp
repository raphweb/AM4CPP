// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/VendorOperatingSystemImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "VendorOperatingSystem.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/OperatingSystem.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/OsOverhead.hpp>
#include <amalthea/TaskScheduler.hpp>
#include <amalthea/InterruptController.hpp>
#include <amalthea/OsDataConsistency.hpp>
#include <amalthea/INamed.hpp>
#include <amalthea/Namespace.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(VendorOperatingSystemImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void VendorOperatingSystem::_initialize()
{
    // Supertypes
    ::amalthea::OperatingSystem::_initialize();

    // References

    /*PROTECTED REGION ID(VendorOperatingSystemImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject VendorOperatingSystem::eGet(::ecore::EInt _featureID,
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
    case ::amalthea::AmaltheaPackage::OPERATINGSYSTEM__OVERHEAD:
    case ::amalthea::AmaltheaPackage::OPERATINGSYSTEM__TASKSCHEDULERS:
    case ::amalthea::AmaltheaPackage::OPERATINGSYSTEM__INTERRUPTCONTROLLERS:
    case ::amalthea::AmaltheaPackage::OPERATINGSYSTEM__OSDATACONSISTENCY:
    {
        return amalthea::OperatingSystem::eGet(_featureID, _resolve);
    }
    case ::amalthea::AmaltheaPackage::VENDOROPERATINGSYSTEM__OSNAME:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::toAny(_any, m_osName);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::VENDOROPERATINGSYSTEM__VENDOR:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::toAny(_any, m_vendor);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::VENDOROPERATINGSYSTEM__VERSION:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::toAny(_any, m_version);
        return _any;
    }
    }
    throw std::runtime_error(
            "VendorOperatingSystem::eGet Error. FeatureID:" + _featureID);
}

void VendorOperatingSystem::eSet(::ecore::EInt _featureID,
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
    case ::amalthea::AmaltheaPackage::OPERATINGSYSTEM__OVERHEAD:
    case ::amalthea::AmaltheaPackage::OPERATINGSYSTEM__TASKSCHEDULERS:
    case ::amalthea::AmaltheaPackage::OPERATINGSYSTEM__INTERRUPTCONTROLLERS:
    case ::amalthea::AmaltheaPackage::OPERATINGSYSTEM__OSDATACONSISTENCY:
    {
        amalthea::OperatingSystem::eSet(_featureID, _newValue);
        return;
    }
    case ::amalthea::AmaltheaPackage::VENDOROPERATINGSYSTEM__OSNAME:
    {
        ::ecore::EString _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::fromAny(_newValue, _t0);
        ::amalthea::VendorOperatingSystem::setOsName(_t0);
        return;
    }
    case ::amalthea::AmaltheaPackage::VENDOROPERATINGSYSTEM__VENDOR:
    {
        ::ecore::EString _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::fromAny(_newValue, _t0);
        ::amalthea::VendorOperatingSystem::setVendor(_t0);
        return;
    }
    case ::amalthea::AmaltheaPackage::VENDOROPERATINGSYSTEM__VERSION:
    {
        ::ecore::EString _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::fromAny(_newValue, _t0);
        ::amalthea::VendorOperatingSystem::setVersion(_t0);
        return;
    }
    }
    throw std::runtime_error(
            "VendorOperatingSystem::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean VendorOperatingSystem::eIsSet(::ecore::EInt _featureID)
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
    case ::amalthea::AmaltheaPackage::OPERATINGSYSTEM__OVERHEAD:
    case ::amalthea::AmaltheaPackage::OPERATINGSYSTEM__TASKSCHEDULERS:
    case ::amalthea::AmaltheaPackage::OPERATINGSYSTEM__INTERRUPTCONTROLLERS:
    case ::amalthea::AmaltheaPackage::OPERATINGSYSTEM__OSDATACONSISTENCY:
    {
        return amalthea::OperatingSystem::eIsSet(_featureID);
    }
    case ::amalthea::AmaltheaPackage::VENDOROPERATINGSYSTEM__OSNAME:
    {
        return ::ecorecpp::mapping::set_traits < ::ecore::EString
                > ::is_set(m_osName);
    }
    case ::amalthea::AmaltheaPackage::VENDOROPERATINGSYSTEM__VENDOR:
    {
        return ::ecorecpp::mapping::set_traits < ::ecore::EString
                > ::is_set(m_vendor);
    }
    case ::amalthea::AmaltheaPackage::VENDOROPERATINGSYSTEM__VERSION:
    {
        return ::ecorecpp::mapping::set_traits < ::ecore::EString
                > ::is_set(m_version);
    }
    }
    throw std::runtime_error(
            "VendorOperatingSystem::eIsSet Error. FeatureID:" + _featureID);
}

void VendorOperatingSystem::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "VendorOperatingSystem::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr VendorOperatingSystem::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getVendorOperatingSystem();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void VendorOperatingSystem::_inverseAdd(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::OPERATINGSYSTEM__OVERHEAD:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::OPERATINGSYSTEM__TASKSCHEDULERS:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::OPERATINGSYSTEM__INTERRUPTCONTROLLERS:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::OPERATINGSYSTEM__OSDATACONSISTENCY:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void VendorOperatingSystem::_inverseRemove(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::OPERATINGSYSTEM__OVERHEAD:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::OPERATINGSYSTEM__TASKSCHEDULERS:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::OPERATINGSYSTEM__INTERRUPTCONTROLLERS:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::OPERATINGSYSTEM__OSDATACONSISTENCY:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

