// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/SchedulerAllocation.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "SchedulerAllocation.hpp"
#include <amalthea/BaseObject.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Scheduler.hpp>
#include <amalthea/ProcessingUnit.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(SchedulerAllocation.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
SchedulerAllocation::SchedulerAllocation() : m_scheduler(0), m_executingPU(0)
{

    m_responsibility.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::amalthea::ProcessingUnit_ptr, -1, false, false >(this,
                    ::amalthea::AmaltheaPackage::_instance()->getSchedulerAllocation__responsibility()));

    /*PROTECTED REGION ID(SchedulerAllocationImpl__SchedulerAllocationImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

SchedulerAllocation::~SchedulerAllocation()
{
}

// Attributes

// References

::amalthea::Scheduler_ptr SchedulerAllocation::getScheduler() const
{
    return m_scheduler;
}

void SchedulerAllocation::setScheduler(::amalthea::Scheduler_ptr _scheduler)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::Scheduler_ptr _old_scheduler = m_scheduler;
#endif
    m_scheduler = _scheduler;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getSchedulerAllocation__scheduler(), _old_scheduler, m_scheduler);
        eNotify(&notification);
    }
#endif
}

const ::ecorecpp::mapping::EList< ::amalthea::ProcessingUnit_ptr >& SchedulerAllocation::getResponsibility() const
{
    return *m_responsibility;
}

::ecorecpp::mapping::EList< ::amalthea::ProcessingUnit_ptr >& SchedulerAllocation::getResponsibility()
{
    return *m_responsibility;
}

::amalthea::ProcessingUnit_ptr SchedulerAllocation::getExecutingPU() const
{
    return m_executingPU;
}

void SchedulerAllocation::setExecutingPU(
        ::amalthea::ProcessingUnit_ptr _executingPU)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::ProcessingUnit_ptr _old_executingPU = m_executingPU;
#endif
    m_executingPU = _executingPU;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getSchedulerAllocation__executingPU(), _old_executingPU, m_executingPU);
        eNotify(&notification);
    }
#endif
}

