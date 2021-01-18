// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/RunnableAllocation.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "RunnableAllocation.hpp"
#include <amalthea/BaseObject.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Scheduler.hpp>
#include <amalthea/Runnable.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(RunnableAllocation.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
RunnableAllocation::RunnableAllocation() : m_scheduler(0), m_entity(0)
{

    /*PROTECTED REGION ID(RunnableAllocationImpl__RunnableAllocationImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

RunnableAllocation::~RunnableAllocation()
{
}

// Attributes

// References

::amalthea::Scheduler_ptr RunnableAllocation::getScheduler() const
{
    return m_scheduler;
}

void RunnableAllocation::setScheduler(::amalthea::Scheduler_ptr _scheduler)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::Scheduler_ptr _old_scheduler = m_scheduler;
#endif
    m_scheduler = _scheduler;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getRunnableAllocation__scheduler(), _old_scheduler, m_scheduler);
        eNotify(&notification);
    }
#endif
}

::amalthea::Runnable_ptr RunnableAllocation::getEntity() const
{
    return m_entity;
}

void RunnableAllocation::setEntity(::amalthea::Runnable_ptr _entity)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::Runnable_ptr _old_entity = m_entity;
#endif
    m_entity = _entity;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getRunnableAllocation__entity(), _old_entity, m_entity);
        eNotify(&notification);
    }
#endif
}

