// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/OperatingSystemImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "OperatingSystem.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/BaseObject.hpp>
#include <amalthea/INamed.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/OsOverhead.hpp>
#include <amalthea/TaskScheduler.hpp>
#include <amalthea/InterruptController.hpp>
#include <amalthea/OsDataConsistency.hpp>
#include <amalthea/Namespace.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(OperatingSystemImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void OperatingSystem::_initialize()
{
    // Supertypes
    ::amalthea::BaseObject::_initialize();
    ::amalthea::INamed::_initialize();

    // References
    for (size_t i = 0; i < m_taskSchedulers->size(); i++)
    {
        (*m_taskSchedulers)[i]->_initialize();
    }
    for (size_t i = 0; i < m_interruptControllers->size(); i++)
    {
        (*m_interruptControllers)[i]->_initialize();
    }
    if (m_osDataConsistency)
    {
        m_osDataConsistency->_initialize();
    }

    /*PROTECTED REGION ID(OperatingSystemImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject OperatingSystem::eGet(::ecore::EInt _featureID,
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
    {
        if (m_overhead)
            _any = ::ecore::as < ::ecore::EObject > (m_overhead);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::OPERATINGSYSTEM__TASKSCHEDULERS:
    {
        _any = m_taskSchedulers->asEListOf< ::ecore::EObject_ptr >();
        return _any;
    }
    case ::amalthea::AmaltheaPackage::OPERATINGSYSTEM__INTERRUPTCONTROLLERS:
    {
        _any = m_interruptControllers->asEListOf< ::ecore::EObject_ptr >();
        return _any;
    }
    case ::amalthea::AmaltheaPackage::OPERATINGSYSTEM__OSDATACONSISTENCY:
    {
        if (m_osDataConsistency)
            _any = ::ecore::as < ::ecore::EObject > (m_osDataConsistency);
        return _any;
    }
    }
    throw std::runtime_error(
            "OperatingSystem::eGet Error. FeatureID:" + _featureID);
}

void OperatingSystem::eSet(::ecore::EInt _featureID,
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
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::OsOverhead_ptr _t1 =
                dynamic_cast< ::amalthea::OsOverhead* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::OsOverhead >(_t0);*/
        ::amalthea::OperatingSystem::setOverhead(_t1);
        return;
    }
    case ::amalthea::AmaltheaPackage::OPERATINGSYSTEM__TASKSCHEDULERS:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::amalthea::OperatingSystem::getTaskSchedulers().clear();
        ::amalthea::OperatingSystem::getTaskSchedulers().insert_all(*_t0);
        return;
    }
    case ::amalthea::AmaltheaPackage::OPERATINGSYSTEM__INTERRUPTCONTROLLERS:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::amalthea::OperatingSystem::getInterruptControllers().clear();
        ::amalthea::OperatingSystem::getInterruptControllers().insert_all(*_t0);
        return;
    }
    case ::amalthea::AmaltheaPackage::OPERATINGSYSTEM__OSDATACONSISTENCY:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::OsDataConsistency_ptr _t1 =
                dynamic_cast< ::amalthea::OsDataConsistency* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::OsDataConsistency >(_t0);*/
        ::amalthea::OperatingSystem::setOsDataConsistency(_t1);
        return;
    }
    }
    throw std::runtime_error(
            "OperatingSystem::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean OperatingSystem::eIsSet(::ecore::EInt _featureID)
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
    {
        return (bool) m_overhead;
    }
    case ::amalthea::AmaltheaPackage::OPERATINGSYSTEM__TASKSCHEDULERS:
    {
        return m_taskSchedulers && m_taskSchedulers->size();
    }
    case ::amalthea::AmaltheaPackage::OPERATINGSYSTEM__INTERRUPTCONTROLLERS:
    {
        return m_interruptControllers && m_interruptControllers->size();
    }
    case ::amalthea::AmaltheaPackage::OPERATINGSYSTEM__OSDATACONSISTENCY:
    {
        return (bool) m_osDataConsistency;
    }
    }
    throw std::runtime_error(
            "OperatingSystem::eIsSet Error. FeatureID:" + _featureID);
}

void OperatingSystem::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "OperatingSystem::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr OperatingSystem::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getOperatingSystem();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void OperatingSystem::_inverseAdd(::ecore::EInt _featureID,
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
void OperatingSystem::_inverseRemove(::ecore::EInt _featureID,
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

