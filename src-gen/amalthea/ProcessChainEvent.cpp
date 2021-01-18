// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/ProcessChainEvent.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "ProcessChainEvent.hpp"
#include <amalthea/EntityEvent.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Tag.hpp>
#include <amalthea/ProcessChain.hpp>
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

/*PROTECTED REGION ID(ProcessChainEvent.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
ProcessChainEvent::ProcessChainEvent() : m_entity(0), m_processingUnit(0)
{

    /*PROTECTED REGION ID(ProcessChainEventImpl__ProcessChainEventImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

ProcessChainEvent::~ProcessChainEvent()
{
}

// Attributes

::amalthea::ProcessEventType ProcessChainEvent::getEventType() const
{
    return m_eventType;
}

void ProcessChainEvent::setEventType(::amalthea::ProcessEventType _eventType)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::ProcessEventType _old_eventType = m_eventType;
#endif
    m_eventType = _eventType;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getProcessChainEvent__eventType(), _old_eventType, m_eventType);
        eNotify(&notification);
    }
#endif
}

// References

::amalthea::ProcessChain_ptr ProcessChainEvent::getEntity() const
{
    return m_entity;
}

void ProcessChainEvent::setEntity(::amalthea::ProcessChain_ptr _entity)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::ProcessChain_ptr _old_entity = m_entity;
#endif
    m_entity = _entity;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getProcessChainEvent__entity(), _old_entity, m_entity);
        eNotify(&notification);
    }
#endif
}

::amalthea::ProcessingUnit_ptr ProcessChainEvent::getProcessingUnit() const
{
    return m_processingUnit;
}

void ProcessChainEvent::setProcessingUnit(
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
                _this(), ::amalthea::AmaltheaPackage::_instance()->getProcessChainEvent__processingUnit(), _old_processingUnit, m_processingUnit);
        eNotify(&notification);
    }
#endif
}

