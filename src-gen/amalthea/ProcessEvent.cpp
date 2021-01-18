// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/ProcessEvent.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "ProcessEvent.hpp"
#include <amalthea/EntityEvent.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Tag.hpp>
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

/*PROTECTED REGION ID(ProcessEvent.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
ProcessEvent::ProcessEvent() : m_entity(0), m_processingUnit(0)
{

    /*PROTECTED REGION ID(ProcessEventImpl__ProcessEventImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

ProcessEvent::~ProcessEvent()
{
}

// Attributes

::amalthea::ProcessEventType ProcessEvent::getEventType() const
{
    return m_eventType;
}

void ProcessEvent::setEventType(::amalthea::ProcessEventType _eventType)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::ProcessEventType _old_eventType = m_eventType;
#endif
    m_eventType = _eventType;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getProcessEvent__eventType(), _old_eventType, m_eventType);
        eNotify(&notification);
    }
#endif
}

// References

::amalthea::Process_ptr ProcessEvent::getEntity() const
{
    return m_entity;
}

void ProcessEvent::setEntity(::amalthea::Process_ptr _entity)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::Process_ptr _old_entity = m_entity;
#endif
    m_entity = _entity;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getProcessEvent__entity(), _old_entity, m_entity);
        eNotify(&notification);
    }
#endif
}

::amalthea::ProcessingUnit_ptr ProcessEvent::getProcessingUnit() const
{
    return m_processingUnit;
}

void ProcessEvent::setProcessingUnit(
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
                _this(), ::amalthea::AmaltheaPackage::_instance()->getProcessEvent__processingUnit(), _old_processingUnit, m_processingUnit);
        eNotify(&notification);
    }
#endif
}

