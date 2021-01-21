// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/SchedulerAllocationImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "SchedulerAllocation.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/BaseObject.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Scheduler.hpp>
#include <amalthea/ProcessingUnit.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(SchedulerAllocationImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void SchedulerAllocation::_initialize()
{
    // Supertypes
    ::amalthea::BaseObject::_initialize();

    // References

    /*PROTECTED REGION ID(SchedulerAllocationImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject SchedulerAllocation::eGet(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        return amalthea::IAnnotatable::eGet(_featureID, _resolve);
    }
    case ::amalthea::AmaltheaPackage::SCHEDULERALLOCATION__SCHEDULER:
    {
        if (m_scheduler)
            _any = ::ecore::as < ::ecore::EObject > (m_scheduler);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::SCHEDULERALLOCATION__RESPONSIBILITY:
    {
        _any = m_responsibility->asEListOf< ::ecore::EObject_ptr >();
        return _any;
    }
    case ::amalthea::AmaltheaPackage::SCHEDULERALLOCATION__EXECUTINGPU:
    {
        if (m_executingPU)
            _any = ::ecore::as < ::ecore::EObject > (m_executingPU);
        return _any;
    }
    }
    throw std::runtime_error(
            "SchedulerAllocation::eGet Error. FeatureID:" + _featureID);
}

void SchedulerAllocation::eSet(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        amalthea::IAnnotatable::eSet(_featureID, _newValue);
        return;
    }
    case ::amalthea::AmaltheaPackage::SCHEDULERALLOCATION__SCHEDULER:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::Scheduler_ptr _t1 =
                dynamic_cast< ::amalthea::Scheduler* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::Scheduler >(_t0);*/
        ::amalthea::SchedulerAllocation::setScheduler(_t1);
        return;
    }
    case ::amalthea::AmaltheaPackage::SCHEDULERALLOCATION__RESPONSIBILITY:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::amalthea::SchedulerAllocation::getResponsibility().clear();
        ::amalthea::SchedulerAllocation::getResponsibility().insert_all(*_t0);
        return;
    }
    case ::amalthea::AmaltheaPackage::SCHEDULERALLOCATION__EXECUTINGPU:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::ProcessingUnit_ptr _t1 =
                dynamic_cast< ::amalthea::ProcessingUnit* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::ProcessingUnit >(_t0);*/
        ::amalthea::SchedulerAllocation::setExecutingPU(_t1);
        return;
    }
    }
    throw std::runtime_error(
            "SchedulerAllocation::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean SchedulerAllocation::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        return amalthea::IAnnotatable::eIsSet(_featureID);
    }
    case ::amalthea::AmaltheaPackage::SCHEDULERALLOCATION__SCHEDULER:
    {
        return (bool) m_scheduler;
    }
    case ::amalthea::AmaltheaPackage::SCHEDULERALLOCATION__RESPONSIBILITY:
    {
        return m_responsibility && m_responsibility->size();
    }
    case ::amalthea::AmaltheaPackage::SCHEDULERALLOCATION__EXECUTINGPU:
    {
        return (bool) m_executingPU;
    }
    }
    throw std::runtime_error(
            "SchedulerAllocation::eIsSet Error. FeatureID:" + _featureID);
}

void SchedulerAllocation::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "SchedulerAllocation::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr SchedulerAllocation::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getSchedulerAllocation();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void SchedulerAllocation::_inverseAdd(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::SCHEDULERALLOCATION__SCHEDULER:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::SCHEDULERALLOCATION__RESPONSIBILITY:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::SCHEDULERALLOCATION__EXECUTINGPU:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void SchedulerAllocation::_inverseRemove(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::SCHEDULERALLOCATION__SCHEDULER:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::SCHEDULERALLOCATION__RESPONSIBILITY:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::SCHEDULERALLOCATION__EXECUTINGPU:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

