// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/TaskAllocation.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "TaskAllocation.hpp"
#include <amalthea/BaseObject.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Task.hpp>
#include <amalthea/TaskScheduler.hpp>
#include <amalthea/ProcessingUnit.hpp>
#include <amalthea/SchedulingParameters.hpp>
#include <amalthea/ParameterExtension.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(TaskAllocation.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
TaskAllocation::TaskAllocation() : m_task(0), m_scheduler(0), m_schedulingParameters(
        0)
{

    m_affinity.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::amalthea::ProcessingUnit_ptr, -1, false, false >(this,
                    ::amalthea::AmaltheaPackage::_instance()->getTaskAllocation__affinity()));
    m_parameterExtensions.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::amalthea::ParameterExtension_ptr, -1, true, false >(this,
                    ::amalthea::AmaltheaPackage::_instance()->getTaskAllocation__parameterExtensions()));

    /*PROTECTED REGION ID(TaskAllocationImpl__TaskAllocationImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

TaskAllocation::~TaskAllocation()
{
    if (m_schedulingParameters)
    {
        m_schedulingParameters.reset();
    }
}

// Attributes

// References

::amalthea::Task_ptr TaskAllocation::getTask() const
{
    return m_task;
}

void TaskAllocation::setTask(::amalthea::Task_ptr _task)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::Task_ptr _old_task = m_task;
#endif
    m_task = _task;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getTaskAllocation__task(), _old_task, m_task);
        eNotify(&notification);
    }
#endif
}

::amalthea::TaskScheduler_ptr TaskAllocation::getScheduler() const
{
    return m_scheduler;
}

void TaskAllocation::setScheduler(::amalthea::TaskScheduler_ptr _scheduler)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::TaskScheduler_ptr _old_scheduler = m_scheduler;
#endif
    m_scheduler = _scheduler;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getTaskAllocation__scheduler(), _old_scheduler, m_scheduler);
        eNotify(&notification);
    }
#endif
}

const ::ecorecpp::mapping::EList< ::amalthea::ProcessingUnit_ptr >& TaskAllocation::getAffinity() const
{
    return *m_affinity;
}

::ecorecpp::mapping::EList< ::amalthea::ProcessingUnit_ptr >& TaskAllocation::getAffinity()
{
    return *m_affinity;
}

::amalthea::SchedulingParameters_ptr TaskAllocation::getSchedulingParameters() const
{
    return m_schedulingParameters;
}

void TaskAllocation::setSchedulingParameters(
        ::amalthea::SchedulingParameters_ptr _schedulingParameters)
{
    if (m_schedulingParameters)
        m_schedulingParameters->_setEContainer(TaskAllocation_ptr(),
                ::amalthea::AmaltheaPackage::_instance()->getTaskAllocation__schedulingParameters());
    if (_schedulingParameters)
        _schedulingParameters->_setEContainer(_this(),
                ::amalthea::AmaltheaPackage::_instance()->getTaskAllocation__schedulingParameters());

#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::SchedulingParameters_ptr _old_schedulingParameters = m_schedulingParameters;
#endif
    m_schedulingParameters = _schedulingParameters;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getTaskAllocation__schedulingParameters(), _old_schedulingParameters, m_schedulingParameters);
        eNotify(&notification);
    }
#endif
}

const ::ecorecpp::mapping::EList< ::amalthea::ParameterExtension_ptr >& TaskAllocation::getParameterExtensions() const
{
    return *m_parameterExtensions;
}

::ecorecpp::mapping::EList< ::amalthea::ParameterExtension_ptr >& TaskAllocation::getParameterExtensions()
{
    return *m_parameterExtensions;
}

