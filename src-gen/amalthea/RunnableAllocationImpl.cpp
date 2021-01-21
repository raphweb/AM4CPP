// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/RunnableAllocationImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "RunnableAllocation.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/BaseObject.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Scheduler.hpp>
#include <amalthea/Runnable.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(RunnableAllocationImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void RunnableAllocation::_initialize()
{
    // Supertypes
    ::amalthea::BaseObject::_initialize();

    // References

    /*PROTECTED REGION ID(RunnableAllocationImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject RunnableAllocation::eGet(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        return amalthea::IAnnotatable::eGet(_featureID, _resolve);
    }
    case ::amalthea::AmaltheaPackage::RUNNABLEALLOCATION__SCHEDULER:
    {
        if (m_scheduler)
            _any = ::ecore::as < ::ecore::EObject > (m_scheduler);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::RUNNABLEALLOCATION__ENTITY:
    {
        if (m_entity)
            _any = ::ecore::as < ::ecore::EObject > (m_entity);
        return _any;
    }
    }
    throw std::runtime_error(
            "RunnableAllocation::eGet Error. FeatureID:" + _featureID);
}

void RunnableAllocation::eSet(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        amalthea::IAnnotatable::eSet(_featureID, _newValue);
        return;
    }
    case ::amalthea::AmaltheaPackage::RUNNABLEALLOCATION__SCHEDULER:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::Scheduler_ptr _t1 =
                dynamic_cast< ::amalthea::Scheduler* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::Scheduler >(_t0);*/
        ::amalthea::RunnableAllocation::setScheduler(_t1);
        return;
    }
    case ::amalthea::AmaltheaPackage::RUNNABLEALLOCATION__ENTITY:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::Runnable_ptr _t1 =
                dynamic_cast< ::amalthea::Runnable* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::Runnable >(_t0);*/
        ::amalthea::RunnableAllocation::setEntity(_t1);
        return;
    }
    }
    throw std::runtime_error(
            "RunnableAllocation::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean RunnableAllocation::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        return amalthea::IAnnotatable::eIsSet(_featureID);
    }
    case ::amalthea::AmaltheaPackage::RUNNABLEALLOCATION__SCHEDULER:
    {
        return (bool) m_scheduler;
    }
    case ::amalthea::AmaltheaPackage::RUNNABLEALLOCATION__ENTITY:
    {
        return (bool) m_entity;
    }
    }
    throw std::runtime_error(
            "RunnableAllocation::eIsSet Error. FeatureID:" + _featureID);
}

void RunnableAllocation::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "RunnableAllocation::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr RunnableAllocation::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getRunnableAllocation();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void RunnableAllocation::_inverseAdd(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::RUNNABLEALLOCATION__SCHEDULER:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::RUNNABLEALLOCATION__ENTITY:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void RunnableAllocation::_inverseRemove(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::RUNNABLEALLOCATION__SCHEDULER:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::RUNNABLEALLOCATION__ENTITY:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

