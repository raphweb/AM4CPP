// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/SemaphoreAccess.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "SemaphoreAccess.hpp"
#include <amalthea/ActivityGraphItem.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Process.hpp>
#include <amalthea/Runnable.hpp>
#include <amalthea/ActivityGraph.hpp>
#include <amalthea/Semaphore.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(SemaphoreAccess.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
SemaphoreAccess::SemaphoreAccess() : m_semaphore(0)
{

    /*PROTECTED REGION ID(SemaphoreAccessImpl__SemaphoreAccessImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

SemaphoreAccess::~SemaphoreAccess()
{
}

// Attributes

::amalthea::SemaphoreAccessEnum SemaphoreAccess::getAccess() const
{
    return m_access;
}

void SemaphoreAccess::setAccess(::amalthea::SemaphoreAccessEnum _access)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::SemaphoreAccessEnum _old_access = m_access;
#endif
    m_access = _access;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getSemaphoreAccess__access(), _old_access, m_access);
        eNotify(&notification);
    }
#endif
}

::amalthea::WaitingBehaviour SemaphoreAccess::getWaitingBehaviour() const
{
    return m_waitingBehaviour;
}

void SemaphoreAccess::setWaitingBehaviour(
        ::amalthea::WaitingBehaviour _waitingBehaviour)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::WaitingBehaviour _old_waitingBehaviour = m_waitingBehaviour;
#endif
    m_waitingBehaviour = _waitingBehaviour;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getSemaphoreAccess__waitingBehaviour(), _old_waitingBehaviour, m_waitingBehaviour);
        eNotify(&notification);
    }
#endif
}

// References

::amalthea::Semaphore_ptr SemaphoreAccess::getSemaphore() const
{
    return m_semaphore;
}

void SemaphoreAccess::setSemaphore(::amalthea::Semaphore_ptr _semaphore)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::Semaphore_ptr _old_semaphore = m_semaphore;
#endif
    m_semaphore = _semaphore;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getSemaphoreAccess__semaphore(), _old_semaphore, m_semaphore);
        eNotify(&notification);
    }
#endif
}

