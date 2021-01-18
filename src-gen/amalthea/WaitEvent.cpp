// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/WaitEvent.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "WaitEvent.hpp"
#include <amalthea/ActivityGraphItem.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Process.hpp>
#include <amalthea/Runnable.hpp>
#include <amalthea/ActivityGraph.hpp>
#include <amalthea/EventMask.hpp>
#include <amalthea/Counter.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(WaitEvent.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
WaitEvent::WaitEvent() : m_eventMask(0), m_counter(0)
{

    /*PROTECTED REGION ID(WaitEventImpl__WaitEventImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

WaitEvent::~WaitEvent()
{
    if (m_eventMask)
    {
        m_eventMask.reset();
    }
    if (m_counter)
    {
        m_counter.reset();
    }
}

// Attributes

::amalthea::WaitEventType WaitEvent::getMaskType() const
{
    return m_maskType;
}

void WaitEvent::setMaskType(::amalthea::WaitEventType _maskType)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::WaitEventType _old_maskType = m_maskType;
#endif
    m_maskType = _maskType;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getWaitEvent__maskType(), _old_maskType, m_maskType);
        eNotify(&notification);
    }
#endif
}

::amalthea::WaitingBehaviour WaitEvent::getWaitingBehaviour() const
{
    return m_waitingBehaviour;
}

void WaitEvent::setWaitingBehaviour(
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
                _this(), ::amalthea::AmaltheaPackage::_instance()->getWaitEvent__waitingBehaviour(), _old_waitingBehaviour, m_waitingBehaviour);
        eNotify(&notification);
    }
#endif
}

// References

::amalthea::EventMask_ptr WaitEvent::getEventMask() const
{
    return m_eventMask;
}

void WaitEvent::setEventMask(::amalthea::EventMask_ptr _eventMask)
{
    if (m_eventMask)
        m_eventMask->_setEContainer(WaitEvent_ptr(),
                ::amalthea::AmaltheaPackage::_instance()->getWaitEvent__eventMask());
    if (_eventMask)
        _eventMask->_setEContainer(_this(),
                ::amalthea::AmaltheaPackage::_instance()->getWaitEvent__eventMask());

#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::EventMask_ptr _old_eventMask = m_eventMask;
#endif
    m_eventMask = _eventMask;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getWaitEvent__eventMask(), _old_eventMask, m_eventMask);
        eNotify(&notification);
    }
#endif
}

::amalthea::Counter_ptr WaitEvent::getCounter() const
{
    return m_counter;
}

void WaitEvent::setCounter(::amalthea::Counter_ptr _counter)
{
    if (m_counter)
        m_counter->_setEContainer(WaitEvent_ptr(),
                ::amalthea::AmaltheaPackage::_instance()->getWaitEvent__counter());
    if (_counter)
        _counter->_setEContainer(_this(),
                ::amalthea::AmaltheaPackage::_instance()->getWaitEvent__counter());

#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::Counter_ptr _old_counter = m_counter;
#endif
    m_counter = _counter;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getWaitEvent__counter(), _old_counter, m_counter);
        eNotify(&notification);
    }
#endif
}

