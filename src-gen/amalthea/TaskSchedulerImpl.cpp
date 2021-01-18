// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/TaskSchedulerImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "TaskScheduler.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/Scheduler.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/ComputationItem.hpp>
#include <amalthea/SchedulerAllocation.hpp>
#include <amalthea/RunnableAllocation.hpp>
#include <amalthea/TaskSchedulingAlgorithm.hpp>
#include <amalthea/SchedulerAssociation.hpp>
#include <amalthea/TaskAllocation.hpp>
#include <amalthea/TaskScheduler.hpp>
#include <amalthea/INamed.hpp>
#include <amalthea/Namespace.hpp>
#include <amalthea/Algorithm.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(TaskSchedulerImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void TaskScheduler::_initialize()
{
    // Supertypes
    ::amalthea::Scheduler::_initialize();

    // References
    if (m_schedulingAlgorithm)
    {
        m_schedulingAlgorithm->_initialize();
    }
    if (m_parentAssociation)
    {
        m_parentAssociation->_initialize();
    }

    /*PROTECTED REGION ID(TaskSchedulerImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject TaskScheduler::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
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
    case ::amalthea::AmaltheaPackage::SCHEDULER__COMPUTATIONITEMS:
    {
        return amalthea::Scheduler::eGet(_featureID, _resolve);
    }
    case ::amalthea::AmaltheaPackage::TASKSCHEDULER__SCHEDULINGALGORITHM:
    {
        if (m_schedulingAlgorithm)
            _any = ::ecore::as < ::ecore::EObject > (m_schedulingAlgorithm);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::TASKSCHEDULER__PARENTASSOCIATION:
    {
        if (m_parentAssociation)
            _any = ::ecore::as < ::ecore::EObject > (m_parentAssociation);
        return _any;
    }
    }
    throw std::runtime_error(
            "TaskScheduler::eGet Error. FeatureID:" + _featureID);
}

void TaskScheduler::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
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
    case ::amalthea::AmaltheaPackage::SCHEDULER__COMPUTATIONITEMS:
    {
        amalthea::Scheduler::eSet(_featureID, _newValue);
        return;
    }
    case ::amalthea::AmaltheaPackage::TASKSCHEDULER__SCHEDULINGALGORITHM:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::TaskSchedulingAlgorithm_ptr _t1 =
                dynamic_cast< ::amalthea::TaskSchedulingAlgorithm* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::TaskSchedulingAlgorithm >(_t0);*/
        ::amalthea::TaskScheduler::setSchedulingAlgorithm(_t1);
        return;
    }
    case ::amalthea::AmaltheaPackage::TASKSCHEDULER__PARENTASSOCIATION:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::SchedulerAssociation_ptr _t1 =
                dynamic_cast< ::amalthea::SchedulerAssociation* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::SchedulerAssociation >(_t0);*/
        ::amalthea::TaskScheduler::setParentAssociation(_t1);
        return;
    }
    }
    throw std::runtime_error(
            "TaskScheduler::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean TaskScheduler::eIsSet(::ecore::EInt _featureID)
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
    case ::amalthea::AmaltheaPackage::SCHEDULER__COMPUTATIONITEMS:
    case ::amalthea::AmaltheaPackage::SCHEDULER__SCHEDULERALLOCATIONS:
    case ::amalthea::AmaltheaPackage::SCHEDULER__RUNNABLEALLOCATIONS:
    {
        return amalthea::Scheduler::eIsSet(_featureID);
    }
    case ::amalthea::AmaltheaPackage::TASKSCHEDULER__SCHEDULINGALGORITHM:
    {
        return (bool) m_schedulingAlgorithm;
    }
    case ::amalthea::AmaltheaPackage::TASKSCHEDULER__PARENTASSOCIATION:
    {
        return (bool) m_parentAssociation;
    }
    case ::amalthea::AmaltheaPackage::TASKSCHEDULER__CHILDASSOCIATIONS:
    {
        return m_childAssociations && m_childAssociations->size();
    }
    case ::amalthea::AmaltheaPackage::TASKSCHEDULER__TASKALLOCATIONS:
    {
        return m_taskAllocations && m_taskAllocations->size();
    }
    case ::amalthea::AmaltheaPackage::TASKSCHEDULER__PARENTSCHEDULER:
    {
        return (bool) m_parentScheduler;
    }
    case ::amalthea::AmaltheaPackage::TASKSCHEDULER__CHILDSCHEDULERS:
    {
        return m_childSchedulers && m_childSchedulers->size();
    }
    }
    throw std::runtime_error(
            "TaskScheduler::eIsSet Error. FeatureID:" + _featureID);
}

void TaskScheduler::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "TaskScheduler::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr TaskScheduler::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getTaskScheduler();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void TaskScheduler::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::SCHEDULER__COMPUTATIONITEMS:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::TASKSCHEDULER__SCHEDULINGALGORITHM:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::TASKSCHEDULER__PARENTASSOCIATION:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::SchedulerAssociation_ptr _t1 =
                dynamic_cast< ::amalthea::SchedulerAssociation* >(_t0.get());

        // set reference
        basicsetParentAssociation(_t1);
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void TaskScheduler::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::SCHEDULER__COMPUTATIONITEMS:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::TASKSCHEDULER__SCHEDULINGALGORITHM:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::TASKSCHEDULER__PARENTASSOCIATION:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_oldValue);
        ::amalthea::SchedulerAssociation_ptr _t1 =
                dynamic_cast< ::amalthea::SchedulerAssociation* >(_t0.get());

        // set reference
        if (basicgetParentAssociation() == _t1)
            basicsetParentAssociation(nullptr);
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

