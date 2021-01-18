// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/RunnableEvent.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "RunnableEvent.hpp"
#include <amalthea/TriggerEvent.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Tag.hpp>
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

/*PROTECTED REGION ID(RunnableEvent.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
RunnableEvent::RunnableEvent() : m_entity(0), m_process(0), m_processingUnit(0)
{

    /*PROTECTED REGION ID(RunnableEventImpl__RunnableEventImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

RunnableEvent::~RunnableEvent()
{
}

// Attributes

::amalthea::RunnableEventType RunnableEvent::getEventType() const
{
    return m_eventType;
}

void RunnableEvent::setEventType(::amalthea::RunnableEventType _eventType)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::RunnableEventType _old_eventType = m_eventType;
#endif
    m_eventType = _eventType;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getRunnableEvent__eventType(), _old_eventType, m_eventType);
        eNotify(&notification);
    }
#endif
}

// References

::amalthea::Runnable_ptr RunnableEvent::getEntity() const
{
    return m_entity;
}

void RunnableEvent::setEntity(::amalthea::Runnable_ptr _entity)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::Runnable_ptr _old_entity = m_entity;
#endif
    m_entity = _entity;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getRunnableEvent__entity(), _old_entity, m_entity);
        eNotify(&notification);
    }
#endif
}

::amalthea::Process_ptr RunnableEvent::getProcess() const
{
    return m_process;
}

void RunnableEvent::setProcess(::amalthea::Process_ptr _process)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::Process_ptr _old_process = m_process;
#endif
    m_process = _process;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getRunnableEvent__process(), _old_process, m_process);
        eNotify(&notification);
    }
#endif
}

::amalthea::ProcessingUnit_ptr RunnableEvent::getProcessingUnit() const
{
    return m_processingUnit;
}

void RunnableEvent::setProcessingUnit(
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
                _this(), ::amalthea::AmaltheaPackage::_instance()->getRunnableEvent__processingUnit(), _old_processingUnit, m_processingUnit);
        eNotify(&notification);
    }
#endif
}

