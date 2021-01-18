// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/TaskScheduler.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "TaskScheduler.hpp"
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
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(TaskScheduler.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
TaskScheduler::TaskScheduler() : m_schedulingAlgorithm(0), m_parentAssociation(
        0), m_parentScheduler(0)
{

    m_childAssociations.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::amalthea::SchedulerAssociation_ptr, -1, false, false >(
                    this,
                    ::amalthea::AmaltheaPackage::_instance()->getTaskScheduler__childAssociations()));
    m_taskAllocations.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::amalthea::TaskAllocation_ptr, -1, false, false >(this,
                    ::amalthea::AmaltheaPackage::_instance()->getTaskScheduler__taskAllocations()));
    m_childSchedulers.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::amalthea::TaskScheduler_ptr, -1, false, false >(this,
                    ::amalthea::AmaltheaPackage::_instance()->getTaskScheduler__childSchedulers()));

    /*PROTECTED REGION ID(TaskSchedulerImpl__TaskSchedulerImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

TaskScheduler::~TaskScheduler()
{
    if (m_schedulingAlgorithm)
    {
        m_schedulingAlgorithm.reset();
    }
    if (m_parentAssociation)
    {
        m_parentAssociation.reset();
    }
}

// Attributes

// References

::amalthea::TaskSchedulingAlgorithm_ptr TaskScheduler::getSchedulingAlgorithm() const
{
    return m_schedulingAlgorithm;
}

void TaskScheduler::setSchedulingAlgorithm(
        ::amalthea::TaskSchedulingAlgorithm_ptr _schedulingAlgorithm)
{
    if (m_schedulingAlgorithm)
        m_schedulingAlgorithm->_setEContainer(TaskScheduler_ptr(),
                ::amalthea::AmaltheaPackage::_instance()->getTaskScheduler__schedulingAlgorithm());
    if (_schedulingAlgorithm)
        _schedulingAlgorithm->_setEContainer(_this(),
                ::amalthea::AmaltheaPackage::_instance()->getTaskScheduler__schedulingAlgorithm());

#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::TaskSchedulingAlgorithm_ptr _old_schedulingAlgorithm = m_schedulingAlgorithm;
#endif
    m_schedulingAlgorithm = _schedulingAlgorithm;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getTaskScheduler__schedulingAlgorithm(), _old_schedulingAlgorithm, m_schedulingAlgorithm);
        eNotify(&notification);
    }
#endif
}

::amalthea::SchedulerAssociation_ptr TaskScheduler::getParentAssociation() const
{
    return m_parentAssociation;
}

::amalthea::SchedulerAssociation_ptr TaskScheduler::basicgetParentAssociation()
{
    return m_parentAssociation;
}

void TaskScheduler::basicsetParentAssociation(
        ::amalthea::SchedulerAssociation_ptr _parentAssociation)
{
    if (m_parentAssociation)
        m_parentAssociation->_setEContainer(TaskScheduler_ptr(),
                ::amalthea::AmaltheaPackage::_instance()->getTaskScheduler__parentAssociation());
    if (_parentAssociation)
        _parentAssociation->_setEContainer(_this(),
                ::amalthea::AmaltheaPackage::_instance()->getTaskScheduler__parentAssociation());

#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::SchedulerAssociation_ptr _old_parentAssociation = m_parentAssociation;
#endif
    m_parentAssociation = _parentAssociation;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getTaskScheduler__parentAssociation(), _old_parentAssociation, m_parentAssociation);
        eNotify(&notification);
    }
#endif
}

void TaskScheduler::setParentAssociation(
        ::amalthea::SchedulerAssociation_ptr _parentAssociation)
{
    if (_parentAssociation != m_parentAssociation)
    {
        ::ecore::EJavaObject _this = ::ecore::EObject::_this();
        if (m_parentAssociation != nullptr)
        {
            m_parentAssociation->_inverseRemove(
                    ::amalthea::AmaltheaPackage::SCHEDULERASSOCIATION__CHILD,
                    _this);
        }
        if (_parentAssociation != nullptr)
        {
            _parentAssociation->_inverseAdd(
                    ::amalthea::AmaltheaPackage::SCHEDULERASSOCIATION__CHILD,
                    _this);
        }
        basicsetParentAssociation(_parentAssociation);
    }
}

const ::ecorecpp::mapping::EList< ::amalthea::SchedulerAssociation_ptr >& TaskScheduler::getChildAssociations() const
{
    return *m_childAssociations;
}

::ecorecpp::mapping::EList< ::amalthea::SchedulerAssociation_ptr >& TaskScheduler::getChildAssociations()
{
    return *m_childAssociations;
}

const ::ecorecpp::mapping::EList< ::amalthea::TaskAllocation_ptr >& TaskScheduler::getTaskAllocations() const
{
    return *m_taskAllocations;
}

::ecorecpp::mapping::EList< ::amalthea::TaskAllocation_ptr >& TaskScheduler::getTaskAllocations()
{
    return *m_taskAllocations;
}

::amalthea::TaskScheduler_ptr TaskScheduler::getParentScheduler() const
{
    return m_parentScheduler;
}

void TaskScheduler::setParentScheduler(
        ::amalthea::TaskScheduler_ptr _parentScheduler)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::TaskScheduler_ptr _old_parentScheduler = m_parentScheduler;
#endif
    m_parentScheduler = _parentScheduler;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getTaskScheduler__parentScheduler(), _old_parentScheduler, m_parentScheduler);
        eNotify(&notification);
    }
#endif
}

const ::ecorecpp::mapping::EList< ::amalthea::TaskScheduler_ptr >& TaskScheduler::getChildSchedulers() const
{
    return *m_childSchedulers;
}

::ecorecpp::mapping::EList< ::amalthea::TaskScheduler_ptr >& TaskScheduler::getChildSchedulers()
{
    return *m_childSchedulers;
}

