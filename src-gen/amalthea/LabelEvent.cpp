// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/LabelEvent.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "LabelEvent.hpp"
#include <amalthea/TriggerEvent.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Tag.hpp>
#include <amalthea/Label.hpp>
#include <amalthea/Runnable.hpp>
#include <amalthea/Process.hpp>
#include <amalthea/INamed.hpp>
#include <amalthea/Namespace.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(LabelEvent.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
LabelEvent::LabelEvent() : m_entity(0), m_runnable(0), m_process(0)
{

    /*PROTECTED REGION ID(LabelEventImpl__LabelEventImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

LabelEvent::~LabelEvent()
{
}

// Attributes

::amalthea::LabelEventType LabelEvent::getEventType() const
{
    return m_eventType;
}

void LabelEvent::setEventType(::amalthea::LabelEventType _eventType)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::LabelEventType _old_eventType = m_eventType;
#endif
    m_eventType = _eventType;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getLabelEvent__eventType(), _old_eventType, m_eventType);
        eNotify(&notification);
    }
#endif
}

// References

::amalthea::Label_ptr LabelEvent::getEntity() const
{
    return m_entity;
}

void LabelEvent::setEntity(::amalthea::Label_ptr _entity)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::Label_ptr _old_entity = m_entity;
#endif
    m_entity = _entity;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getLabelEvent__entity(), _old_entity, m_entity);
        eNotify(&notification);
    }
#endif
}

::amalthea::Runnable_ptr LabelEvent::getRunnable() const
{
    return m_runnable;
}

void LabelEvent::setRunnable(::amalthea::Runnable_ptr _runnable)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::Runnable_ptr _old_runnable = m_runnable;
#endif
    m_runnable = _runnable;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getLabelEvent__runnable(), _old_runnable, m_runnable);
        eNotify(&notification);
    }
#endif
}

::amalthea::Process_ptr LabelEvent::getProcess() const
{
    return m_process;
}

void LabelEvent::setProcess(::amalthea::Process_ptr _process)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::Process_ptr _old_process = m_process;
#endif
    m_process = _process;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getLabelEvent__process(), _old_process, m_process);
        eNotify(&notification);
    }
#endif
}

