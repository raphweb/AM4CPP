// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/OsAPIOverhead.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "OsAPIOverhead.hpp"
#include <amalthea/BaseObject.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Ticks.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(OsAPIOverhead.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
OsAPIOverhead::OsAPIOverhead() : m_apiSendMessage(0), m_apiTerminateTask(0), m_apiSchedule(
        0), m_apiRequestResource(0), m_apiReleaseResource(0), m_apiSetEvent(0), m_apiWaitEvent(
        0), m_apiClearEvent(0), m_apiActivateTask(0), m_apiEnforcedMigration(0), m_apiSuspendOsInterrupts(
        0), m_apiResumeOsInterrupts(0), m_apiRequestSpinlock(0), m_apiReleaseSpinlock(
        0), m_apiSenderReceiverRead(0), m_apiSenderReceiverWrite(0), m_apiSynchronousServerCallPoint(
        0), m_apiIocRead(0), m_apiIocWrite(0)
{

    /*PROTECTED REGION ID(OsAPIOverheadImpl__OsAPIOverheadImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

OsAPIOverhead::~OsAPIOverhead()
{
    if (m_apiSendMessage)
    {
        m_apiSendMessage.reset();
    }
    if (m_apiTerminateTask)
    {
        m_apiTerminateTask.reset();
    }
    if (m_apiSchedule)
    {
        m_apiSchedule.reset();
    }
    if (m_apiRequestResource)
    {
        m_apiRequestResource.reset();
    }
    if (m_apiReleaseResource)
    {
        m_apiReleaseResource.reset();
    }
    if (m_apiSetEvent)
    {
        m_apiSetEvent.reset();
    }
    if (m_apiWaitEvent)
    {
        m_apiWaitEvent.reset();
    }
    if (m_apiClearEvent)
    {
        m_apiClearEvent.reset();
    }
    if (m_apiActivateTask)
    {
        m_apiActivateTask.reset();
    }
    if (m_apiEnforcedMigration)
    {
        m_apiEnforcedMigration.reset();
    }
    if (m_apiSuspendOsInterrupts)
    {
        m_apiSuspendOsInterrupts.reset();
    }
    if (m_apiResumeOsInterrupts)
    {
        m_apiResumeOsInterrupts.reset();
    }
    if (m_apiRequestSpinlock)
    {
        m_apiRequestSpinlock.reset();
    }
    if (m_apiReleaseSpinlock)
    {
        m_apiReleaseSpinlock.reset();
    }
    if (m_apiSenderReceiverRead)
    {
        m_apiSenderReceiverRead.reset();
    }
    if (m_apiSenderReceiverWrite)
    {
        m_apiSenderReceiverWrite.reset();
    }
    if (m_apiSynchronousServerCallPoint)
    {
        m_apiSynchronousServerCallPoint.reset();
    }
    if (m_apiIocRead)
    {
        m_apiIocRead.reset();
    }
    if (m_apiIocWrite)
    {
        m_apiIocWrite.reset();
    }
}

// Attributes

// References

::amalthea::Ticks_ptr OsAPIOverhead::getApiSendMessage() const
{
    return m_apiSendMessage;
}

void OsAPIOverhead::setApiSendMessage(::amalthea::Ticks_ptr _apiSendMessage)
{
    if (m_apiSendMessage)
        m_apiSendMessage->_setEContainer(OsAPIOverhead_ptr(),
                ::amalthea::AmaltheaPackage::_instance()->getOsAPIOverhead__apiSendMessage());
    if (_apiSendMessage)
        _apiSendMessage->_setEContainer(_this(),
                ::amalthea::AmaltheaPackage::_instance()->getOsAPIOverhead__apiSendMessage());

#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::Ticks_ptr _old_apiSendMessage = m_apiSendMessage;
#endif
    m_apiSendMessage = _apiSendMessage;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getOsAPIOverhead__apiSendMessage(), _old_apiSendMessage, m_apiSendMessage);
        eNotify(&notification);
    }
#endif
}

::amalthea::Ticks_ptr OsAPIOverhead::getApiTerminateTask() const
{
    return m_apiTerminateTask;
}

void OsAPIOverhead::setApiTerminateTask(::amalthea::Ticks_ptr _apiTerminateTask)
{
    if (m_apiTerminateTask)
        m_apiTerminateTask->_setEContainer(OsAPIOverhead_ptr(),
                ::amalthea::AmaltheaPackage::_instance()->getOsAPIOverhead__apiTerminateTask());
    if (_apiTerminateTask)
        _apiTerminateTask->_setEContainer(_this(),
                ::amalthea::AmaltheaPackage::_instance()->getOsAPIOverhead__apiTerminateTask());

#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::Ticks_ptr _old_apiTerminateTask = m_apiTerminateTask;
#endif
    m_apiTerminateTask = _apiTerminateTask;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getOsAPIOverhead__apiTerminateTask(), _old_apiTerminateTask, m_apiTerminateTask);
        eNotify(&notification);
    }
#endif
}

::amalthea::Ticks_ptr OsAPIOverhead::getApiSchedule() const
{
    return m_apiSchedule;
}

void OsAPIOverhead::setApiSchedule(::amalthea::Ticks_ptr _apiSchedule)
{
    if (m_apiSchedule)
        m_apiSchedule->_setEContainer(OsAPIOverhead_ptr(),
                ::amalthea::AmaltheaPackage::_instance()->getOsAPIOverhead__apiSchedule());
    if (_apiSchedule)
        _apiSchedule->_setEContainer(_this(),
                ::amalthea::AmaltheaPackage::_instance()->getOsAPIOverhead__apiSchedule());

#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::Ticks_ptr _old_apiSchedule = m_apiSchedule;
#endif
    m_apiSchedule = _apiSchedule;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getOsAPIOverhead__apiSchedule(), _old_apiSchedule, m_apiSchedule);
        eNotify(&notification);
    }
#endif
}

::amalthea::Ticks_ptr OsAPIOverhead::getApiRequestResource() const
{
    return m_apiRequestResource;
}

void OsAPIOverhead::setApiRequestResource(
        ::amalthea::Ticks_ptr _apiRequestResource)
{
    if (m_apiRequestResource)
        m_apiRequestResource->_setEContainer(OsAPIOverhead_ptr(),
                ::amalthea::AmaltheaPackage::_instance()->getOsAPIOverhead__apiRequestResource());
    if (_apiRequestResource)
        _apiRequestResource->_setEContainer(_this(),
                ::amalthea::AmaltheaPackage::_instance()->getOsAPIOverhead__apiRequestResource());

#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::Ticks_ptr _old_apiRequestResource = m_apiRequestResource;
#endif
    m_apiRequestResource = _apiRequestResource;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getOsAPIOverhead__apiRequestResource(), _old_apiRequestResource, m_apiRequestResource);
        eNotify(&notification);
    }
#endif
}

::amalthea::Ticks_ptr OsAPIOverhead::getApiReleaseResource() const
{
    return m_apiReleaseResource;
}

void OsAPIOverhead::setApiReleaseResource(
        ::amalthea::Ticks_ptr _apiReleaseResource)
{
    if (m_apiReleaseResource)
        m_apiReleaseResource->_setEContainer(OsAPIOverhead_ptr(),
                ::amalthea::AmaltheaPackage::_instance()->getOsAPIOverhead__apiReleaseResource());
    if (_apiReleaseResource)
        _apiReleaseResource->_setEContainer(_this(),
                ::amalthea::AmaltheaPackage::_instance()->getOsAPIOverhead__apiReleaseResource());

#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::Ticks_ptr _old_apiReleaseResource = m_apiReleaseResource;
#endif
    m_apiReleaseResource = _apiReleaseResource;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getOsAPIOverhead__apiReleaseResource(), _old_apiReleaseResource, m_apiReleaseResource);
        eNotify(&notification);
    }
#endif
}

::amalthea::Ticks_ptr OsAPIOverhead::getApiSetEvent() const
{
    return m_apiSetEvent;
}

void OsAPIOverhead::setApiSetEvent(::amalthea::Ticks_ptr _apiSetEvent)
{
    if (m_apiSetEvent)
        m_apiSetEvent->_setEContainer(OsAPIOverhead_ptr(),
                ::amalthea::AmaltheaPackage::_instance()->getOsAPIOverhead__apiSetEvent());
    if (_apiSetEvent)
        _apiSetEvent->_setEContainer(_this(),
                ::amalthea::AmaltheaPackage::_instance()->getOsAPIOverhead__apiSetEvent());

#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::Ticks_ptr _old_apiSetEvent = m_apiSetEvent;
#endif
    m_apiSetEvent = _apiSetEvent;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getOsAPIOverhead__apiSetEvent(), _old_apiSetEvent, m_apiSetEvent);
        eNotify(&notification);
    }
#endif
}

::amalthea::Ticks_ptr OsAPIOverhead::getApiWaitEvent() const
{
    return m_apiWaitEvent;
}

void OsAPIOverhead::setApiWaitEvent(::amalthea::Ticks_ptr _apiWaitEvent)
{
    if (m_apiWaitEvent)
        m_apiWaitEvent->_setEContainer(OsAPIOverhead_ptr(),
                ::amalthea::AmaltheaPackage::_instance()->getOsAPIOverhead__apiWaitEvent());
    if (_apiWaitEvent)
        _apiWaitEvent->_setEContainer(_this(),
                ::amalthea::AmaltheaPackage::_instance()->getOsAPIOverhead__apiWaitEvent());

#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::Ticks_ptr _old_apiWaitEvent = m_apiWaitEvent;
#endif
    m_apiWaitEvent = _apiWaitEvent;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getOsAPIOverhead__apiWaitEvent(), _old_apiWaitEvent, m_apiWaitEvent);
        eNotify(&notification);
    }
#endif
}

::amalthea::Ticks_ptr OsAPIOverhead::getApiClearEvent() const
{
    return m_apiClearEvent;
}

void OsAPIOverhead::setApiClearEvent(::amalthea::Ticks_ptr _apiClearEvent)
{
    if (m_apiClearEvent)
        m_apiClearEvent->_setEContainer(OsAPIOverhead_ptr(),
                ::amalthea::AmaltheaPackage::_instance()->getOsAPIOverhead__apiClearEvent());
    if (_apiClearEvent)
        _apiClearEvent->_setEContainer(_this(),
                ::amalthea::AmaltheaPackage::_instance()->getOsAPIOverhead__apiClearEvent());

#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::Ticks_ptr _old_apiClearEvent = m_apiClearEvent;
#endif
    m_apiClearEvent = _apiClearEvent;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getOsAPIOverhead__apiClearEvent(), _old_apiClearEvent, m_apiClearEvent);
        eNotify(&notification);
    }
#endif
}

::amalthea::Ticks_ptr OsAPIOverhead::getApiActivateTask() const
{
    return m_apiActivateTask;
}

void OsAPIOverhead::setApiActivateTask(::amalthea::Ticks_ptr _apiActivateTask)
{
    if (m_apiActivateTask)
        m_apiActivateTask->_setEContainer(OsAPIOverhead_ptr(),
                ::amalthea::AmaltheaPackage::_instance()->getOsAPIOverhead__apiActivateTask());
    if (_apiActivateTask)
        _apiActivateTask->_setEContainer(_this(),
                ::amalthea::AmaltheaPackage::_instance()->getOsAPIOverhead__apiActivateTask());

#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::Ticks_ptr _old_apiActivateTask = m_apiActivateTask;
#endif
    m_apiActivateTask = _apiActivateTask;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getOsAPIOverhead__apiActivateTask(), _old_apiActivateTask, m_apiActivateTask);
        eNotify(&notification);
    }
#endif
}

::amalthea::Ticks_ptr OsAPIOverhead::getApiEnforcedMigration() const
{
    return m_apiEnforcedMigration;
}

void OsAPIOverhead::setApiEnforcedMigration(
        ::amalthea::Ticks_ptr _apiEnforcedMigration)
{
    if (m_apiEnforcedMigration)
        m_apiEnforcedMigration->_setEContainer(OsAPIOverhead_ptr(),
                ::amalthea::AmaltheaPackage::_instance()->getOsAPIOverhead__apiEnforcedMigration());
    if (_apiEnforcedMigration)
        _apiEnforcedMigration->_setEContainer(_this(),
                ::amalthea::AmaltheaPackage::_instance()->getOsAPIOverhead__apiEnforcedMigration());

#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::Ticks_ptr _old_apiEnforcedMigration = m_apiEnforcedMigration;
#endif
    m_apiEnforcedMigration = _apiEnforcedMigration;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getOsAPIOverhead__apiEnforcedMigration(), _old_apiEnforcedMigration, m_apiEnforcedMigration);
        eNotify(&notification);
    }
#endif
}

::amalthea::Ticks_ptr OsAPIOverhead::getApiSuspendOsInterrupts() const
{
    return m_apiSuspendOsInterrupts;
}

void OsAPIOverhead::setApiSuspendOsInterrupts(
        ::amalthea::Ticks_ptr _apiSuspendOsInterrupts)
{
    if (m_apiSuspendOsInterrupts)
        m_apiSuspendOsInterrupts->_setEContainer(OsAPIOverhead_ptr(),
                ::amalthea::AmaltheaPackage::_instance()->getOsAPIOverhead__apiSuspendOsInterrupts());
    if (_apiSuspendOsInterrupts)
        _apiSuspendOsInterrupts->_setEContainer(_this(),
                ::amalthea::AmaltheaPackage::_instance()->getOsAPIOverhead__apiSuspendOsInterrupts());

#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::Ticks_ptr _old_apiSuspendOsInterrupts = m_apiSuspendOsInterrupts;
#endif
    m_apiSuspendOsInterrupts = _apiSuspendOsInterrupts;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getOsAPIOverhead__apiSuspendOsInterrupts(), _old_apiSuspendOsInterrupts, m_apiSuspendOsInterrupts);
        eNotify(&notification);
    }
#endif
}

::amalthea::Ticks_ptr OsAPIOverhead::getApiResumeOsInterrupts() const
{
    return m_apiResumeOsInterrupts;
}

void OsAPIOverhead::setApiResumeOsInterrupts(
        ::amalthea::Ticks_ptr _apiResumeOsInterrupts)
{
    if (m_apiResumeOsInterrupts)
        m_apiResumeOsInterrupts->_setEContainer(OsAPIOverhead_ptr(),
                ::amalthea::AmaltheaPackage::_instance()->getOsAPIOverhead__apiResumeOsInterrupts());
    if (_apiResumeOsInterrupts)
        _apiResumeOsInterrupts->_setEContainer(_this(),
                ::amalthea::AmaltheaPackage::_instance()->getOsAPIOverhead__apiResumeOsInterrupts());

#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::Ticks_ptr _old_apiResumeOsInterrupts = m_apiResumeOsInterrupts;
#endif
    m_apiResumeOsInterrupts = _apiResumeOsInterrupts;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getOsAPIOverhead__apiResumeOsInterrupts(), _old_apiResumeOsInterrupts, m_apiResumeOsInterrupts);
        eNotify(&notification);
    }
#endif
}

::amalthea::Ticks_ptr OsAPIOverhead::getApiRequestSpinlock() const
{
    return m_apiRequestSpinlock;
}

void OsAPIOverhead::setApiRequestSpinlock(
        ::amalthea::Ticks_ptr _apiRequestSpinlock)
{
    if (m_apiRequestSpinlock)
        m_apiRequestSpinlock->_setEContainer(OsAPIOverhead_ptr(),
                ::amalthea::AmaltheaPackage::_instance()->getOsAPIOverhead__apiRequestSpinlock());
    if (_apiRequestSpinlock)
        _apiRequestSpinlock->_setEContainer(_this(),
                ::amalthea::AmaltheaPackage::_instance()->getOsAPIOverhead__apiRequestSpinlock());

#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::Ticks_ptr _old_apiRequestSpinlock = m_apiRequestSpinlock;
#endif
    m_apiRequestSpinlock = _apiRequestSpinlock;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getOsAPIOverhead__apiRequestSpinlock(), _old_apiRequestSpinlock, m_apiRequestSpinlock);
        eNotify(&notification);
    }
#endif
}

::amalthea::Ticks_ptr OsAPIOverhead::getApiReleaseSpinlock() const
{
    return m_apiReleaseSpinlock;
}

void OsAPIOverhead::setApiReleaseSpinlock(
        ::amalthea::Ticks_ptr _apiReleaseSpinlock)
{
    if (m_apiReleaseSpinlock)
        m_apiReleaseSpinlock->_setEContainer(OsAPIOverhead_ptr(),
                ::amalthea::AmaltheaPackage::_instance()->getOsAPIOverhead__apiReleaseSpinlock());
    if (_apiReleaseSpinlock)
        _apiReleaseSpinlock->_setEContainer(_this(),
                ::amalthea::AmaltheaPackage::_instance()->getOsAPIOverhead__apiReleaseSpinlock());

#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::Ticks_ptr _old_apiReleaseSpinlock = m_apiReleaseSpinlock;
#endif
    m_apiReleaseSpinlock = _apiReleaseSpinlock;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getOsAPIOverhead__apiReleaseSpinlock(), _old_apiReleaseSpinlock, m_apiReleaseSpinlock);
        eNotify(&notification);
    }
#endif
}

::amalthea::Ticks_ptr OsAPIOverhead::getApiSenderReceiverRead() const
{
    return m_apiSenderReceiverRead;
}

void OsAPIOverhead::setApiSenderReceiverRead(
        ::amalthea::Ticks_ptr _apiSenderReceiverRead)
{
    if (m_apiSenderReceiverRead)
        m_apiSenderReceiverRead->_setEContainer(OsAPIOverhead_ptr(),
                ::amalthea::AmaltheaPackage::_instance()->getOsAPIOverhead__apiSenderReceiverRead());
    if (_apiSenderReceiverRead)
        _apiSenderReceiverRead->_setEContainer(_this(),
                ::amalthea::AmaltheaPackage::_instance()->getOsAPIOverhead__apiSenderReceiverRead());

#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::Ticks_ptr _old_apiSenderReceiverRead = m_apiSenderReceiverRead;
#endif
    m_apiSenderReceiverRead = _apiSenderReceiverRead;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getOsAPIOverhead__apiSenderReceiverRead(), _old_apiSenderReceiverRead, m_apiSenderReceiverRead);
        eNotify(&notification);
    }
#endif
}

::amalthea::Ticks_ptr OsAPIOverhead::getApiSenderReceiverWrite() const
{
    return m_apiSenderReceiverWrite;
}

void OsAPIOverhead::setApiSenderReceiverWrite(
        ::amalthea::Ticks_ptr _apiSenderReceiverWrite)
{
    if (m_apiSenderReceiverWrite)
        m_apiSenderReceiverWrite->_setEContainer(OsAPIOverhead_ptr(),
                ::amalthea::AmaltheaPackage::_instance()->getOsAPIOverhead__apiSenderReceiverWrite());
    if (_apiSenderReceiverWrite)
        _apiSenderReceiverWrite->_setEContainer(_this(),
                ::amalthea::AmaltheaPackage::_instance()->getOsAPIOverhead__apiSenderReceiverWrite());

#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::Ticks_ptr _old_apiSenderReceiverWrite = m_apiSenderReceiverWrite;
#endif
    m_apiSenderReceiverWrite = _apiSenderReceiverWrite;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getOsAPIOverhead__apiSenderReceiverWrite(), _old_apiSenderReceiverWrite, m_apiSenderReceiverWrite);
        eNotify(&notification);
    }
#endif
}

::amalthea::Ticks_ptr OsAPIOverhead::getApiSynchronousServerCallPoint() const
{
    return m_apiSynchronousServerCallPoint;
}

void OsAPIOverhead::setApiSynchronousServerCallPoint(
        ::amalthea::Ticks_ptr _apiSynchronousServerCallPoint)
{
    if (m_apiSynchronousServerCallPoint)
        m_apiSynchronousServerCallPoint->_setEContainer(OsAPIOverhead_ptr(),
                ::amalthea::AmaltheaPackage::_instance()->getOsAPIOverhead__apiSynchronousServerCallPoint());
    if (_apiSynchronousServerCallPoint)
        _apiSynchronousServerCallPoint->_setEContainer(_this(),
                ::amalthea::AmaltheaPackage::_instance()->getOsAPIOverhead__apiSynchronousServerCallPoint());

#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::Ticks_ptr _old_apiSynchronousServerCallPoint = m_apiSynchronousServerCallPoint;
#endif
    m_apiSynchronousServerCallPoint = _apiSynchronousServerCallPoint;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getOsAPIOverhead__apiSynchronousServerCallPoint(), _old_apiSynchronousServerCallPoint, m_apiSynchronousServerCallPoint);
        eNotify(&notification);
    }
#endif
}

::amalthea::Ticks_ptr OsAPIOverhead::getApiIocRead() const
{
    return m_apiIocRead;
}

void OsAPIOverhead::setApiIocRead(::amalthea::Ticks_ptr _apiIocRead)
{
    if (m_apiIocRead)
        m_apiIocRead->_setEContainer(OsAPIOverhead_ptr(),
                ::amalthea::AmaltheaPackage::_instance()->getOsAPIOverhead__apiIocRead());
    if (_apiIocRead)
        _apiIocRead->_setEContainer(_this(),
                ::amalthea::AmaltheaPackage::_instance()->getOsAPIOverhead__apiIocRead());

#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::Ticks_ptr _old_apiIocRead = m_apiIocRead;
#endif
    m_apiIocRead = _apiIocRead;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getOsAPIOverhead__apiIocRead(), _old_apiIocRead, m_apiIocRead);
        eNotify(&notification);
    }
#endif
}

::amalthea::Ticks_ptr OsAPIOverhead::getApiIocWrite() const
{
    return m_apiIocWrite;
}

void OsAPIOverhead::setApiIocWrite(::amalthea::Ticks_ptr _apiIocWrite)
{
    if (m_apiIocWrite)
        m_apiIocWrite->_setEContainer(OsAPIOverhead_ptr(),
                ::amalthea::AmaltheaPackage::_instance()->getOsAPIOverhead__apiIocWrite());
    if (_apiIocWrite)
        _apiIocWrite->_setEContainer(_this(),
                ::amalthea::AmaltheaPackage::_instance()->getOsAPIOverhead__apiIocWrite());

#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::Ticks_ptr _old_apiIocWrite = m_apiIocWrite;
#endif
    m_apiIocWrite = _apiIocWrite;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getOsAPIOverhead__apiIocWrite(), _old_apiIocWrite, m_apiIocWrite);
        eNotify(&notification);
    }
#endif
}

