// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/SemaphoreEvent.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "SemaphoreEvent.hpp"
#include <amalthea/EntityEvent.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Tag.hpp>
#include <amalthea/Semaphore.hpp>
#include <amalthea/Runnable.hpp>
#include <amalthea/Process.hpp>
#include <amalthea/ProcessingUnit.hpp>
#include <amalthea/INamed.hpp>
#include <amalthea/Namespace.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(SemaphoreEvent.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
SemaphoreEvent::SemaphoreEvent() : m_entity(0), m_runnable(0), m_process(0), m_processingUnit(
        0)
{

    /*PROTECTED REGION ID(SemaphoreEventImpl__SemaphoreEventImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

SemaphoreEvent::~SemaphoreEvent()
{
}

// Attributes

::amalthea::SemaphoreEventType SemaphoreEvent::getEventType() const
{
    return m_eventType;
}

void SemaphoreEvent::setEventType(::amalthea::SemaphoreEventType _eventType)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::SemaphoreEventType _old_eventType = m_eventType;
#endif
    m_eventType = _eventType;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getSemaphoreEvent__eventType(), _old_eventType, m_eventType);
        eNotify(&notification);
    }
#endif
}

// References

::amalthea::Semaphore_ptr SemaphoreEvent::getEntity() const
{
    return m_entity;
}

void SemaphoreEvent::setEntity(::amalthea::Semaphore_ptr _entity)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::Semaphore_ptr _old_entity = m_entity;
#endif
    m_entity = _entity;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getSemaphoreEvent__entity(), _old_entity, m_entity);
        eNotify(&notification);
    }
#endif
}

::amalthea::Runnable_ptr SemaphoreEvent::getRunnable() const
{
    return m_runnable;
}

void SemaphoreEvent::setRunnable(::amalthea::Runnable_ptr _runnable)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::Runnable_ptr _old_runnable = m_runnable;
#endif
    m_runnable = _runnable;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getSemaphoreEvent__runnable(), _old_runnable, m_runnable);
        eNotify(&notification);
    }
#endif
}

::amalthea::Process_ptr SemaphoreEvent::getProcess() const
{
    return m_process;
}

void SemaphoreEvent::setProcess(::amalthea::Process_ptr _process)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::Process_ptr _old_process = m_process;
#endif
    m_process = _process;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getSemaphoreEvent__process(), _old_process, m_process);
        eNotify(&notification);
    }
#endif
}

::amalthea::ProcessingUnit_ptr SemaphoreEvent::getProcessingUnit() const
{
    return m_processingUnit;
}

void SemaphoreEvent::setProcessingUnit(
        ::amalthea::ProcessingUnit_ptr _processingUnit)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::ProcessingUnit_ptr _old_processingUnit = m_processingUnit;
#endif
    m_processingUnit = _processingUnit;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getSemaphoreEvent__processingUnit(), _old_processingUnit, m_processingUnit);
        eNotify(&notification);
    }
#endif
}

