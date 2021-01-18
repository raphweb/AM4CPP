// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/TaskAllocationImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "TaskAllocation.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/BaseObject.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Task.hpp>
#include <amalthea/TaskScheduler.hpp>
#include <amalthea/ProcessingUnit.hpp>
#include <amalthea/SchedulingParameters.hpp>
#include <amalthea/ParameterExtension.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(TaskAllocationImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void TaskAllocation::_initialize()
{
    // Supertypes
    ::amalthea::BaseObject::_initialize();

    // References
    if (m_schedulingParameters)
    {
        m_schedulingParameters->_initialize();
    }
    for (size_t i = 0; i < m_parameterExtensions->size(); i++)
    {
        (*m_parameterExtensions)[i]->_initialize();
    }

    /*PROTECTED REGION ID(TaskAllocationImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject TaskAllocation::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        return amalthea::IAnnotatable::eGet(_featureID, _resolve);
    }
    case ::amalthea::AmaltheaPackage::TASKALLOCATION__TASK:
    {
        if (m_task)
            _any = ::ecore::as < ::ecore::EObject > (m_task);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::TASKALLOCATION__SCHEDULER:
    {
        if (m_scheduler)
            _any = ::ecore::as < ::ecore::EObject > (m_scheduler);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::TASKALLOCATION__AFFINITY:
    {
        _any = m_affinity->asEListOf< ::ecore::EObject_ptr >();
        return _any;
    }
    case ::amalthea::AmaltheaPackage::TASKALLOCATION__SCHEDULINGPARAMETERS:
    {
        if (m_schedulingParameters)
            _any = ::ecore::as < ::ecore::EObject > (m_schedulingParameters);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::TASKALLOCATION__PARAMETEREXTENSIONS:
    {
        _any = m_parameterExtensions->asEListOf< ::ecore::EObject_ptr >();
        return _any;
    }
    }
    throw std::runtime_error(
            "TaskAllocation::eGet Error. FeatureID:" + _featureID);
}

void TaskAllocation::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        amalthea::IAnnotatable::eSet(_featureID, _newValue);
        return;
    }
    case ::amalthea::AmaltheaPackage::TASKALLOCATION__TASK:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::Task_ptr _t1 = dynamic_cast< ::amalthea::Task* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::Task >(_t0);*/
        ::amalthea::TaskAllocation::setTask(_t1);
        return;
    }
    case ::amalthea::AmaltheaPackage::TASKALLOCATION__SCHEDULER:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::TaskScheduler_ptr _t1 =
                dynamic_cast< ::amalthea::TaskScheduler* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::TaskScheduler >(_t0);*/
        ::amalthea::TaskAllocation::setScheduler(_t1);
        return;
    }
    case ::amalthea::AmaltheaPackage::TASKALLOCATION__AFFINITY:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::amalthea::TaskAllocation::getAffinity().clear();
        ::amalthea::TaskAllocation::getAffinity().insert_all(*_t0);
        return;
    }
    case ::amalthea::AmaltheaPackage::TASKALLOCATION__SCHEDULINGPARAMETERS:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::SchedulingParameters_ptr _t1 =
                dynamic_cast< ::amalthea::SchedulingParameters* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::SchedulingParameters >(_t0);*/
        ::amalthea::TaskAllocation::setSchedulingParameters(_t1);
        return;
    }
    case ::amalthea::AmaltheaPackage::TASKALLOCATION__PARAMETEREXTENSIONS:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::amalthea::TaskAllocation::getParameterExtensions().clear();
        ::amalthea::TaskAllocation::getParameterExtensions().insert_all(*_t0);
        return;
    }
    }
    throw std::runtime_error(
            "TaskAllocation::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean TaskAllocation::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        return amalthea::IAnnotatable::eIsSet(_featureID);
    }
    case ::amalthea::AmaltheaPackage::TASKALLOCATION__TASK:
    {
        return (bool) m_task;
    }
    case ::amalthea::AmaltheaPackage::TASKALLOCATION__SCHEDULER:
    {
        return (bool) m_scheduler;
    }
    case ::amalthea::AmaltheaPackage::TASKALLOCATION__AFFINITY:
    {
        return m_affinity && m_affinity->size();
    }
    case ::amalthea::AmaltheaPackage::TASKALLOCATION__SCHEDULINGPARAMETERS:
    {
        return (bool) m_schedulingParameters;
    }
    case ::amalthea::AmaltheaPackage::TASKALLOCATION__PARAMETEREXTENSIONS:
    {
        return m_parameterExtensions && m_parameterExtensions->size();
    }
    }
    throw std::runtime_error(
            "TaskAllocation::eIsSet Error. FeatureID:" + _featureID);
}

void TaskAllocation::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "TaskAllocation::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr TaskAllocation::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getTaskAllocation();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void TaskAllocation::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::TASKALLOCATION__TASK:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::TASKALLOCATION__SCHEDULER:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::TASKALLOCATION__AFFINITY:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::TASKALLOCATION__SCHEDULINGPARAMETERS:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::TASKALLOCATION__PARAMETEREXTENSIONS:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void TaskAllocation::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::TASKALLOCATION__TASK:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::TASKALLOCATION__SCHEDULER:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::TASKALLOCATION__AFFINITY:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::TASKALLOCATION__SCHEDULINGPARAMETERS:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::TASKALLOCATION__PARAMETEREXTENSIONS:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

