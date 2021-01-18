// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/SetEvent.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "SetEvent.hpp"
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

/*PROTECTED REGION ID(SetEvent.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
SetEvent::SetEvent() : m_eventMask(0), m_process(0), m_counter(0)
{

    /*PROTECTED REGION ID(SetEventImpl__SetEventImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

SetEvent::~SetEvent()
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

// References

::amalthea::EventMask_ptr SetEvent::getEventMask() const
{
    return m_eventMask;
}

void SetEvent::setEventMask(::amalthea::EventMask_ptr _eventMask)
{
    if (m_eventMask)
        m_eventMask->_setEContainer(SetEvent_ptr(),
                ::amalthea::AmaltheaPackage::_instance()->getSetEvent__eventMask());
    if (_eventMask)
        _eventMask->_setEContainer(_this(),
                ::amalthea::AmaltheaPackage::_instance()->getSetEvent__eventMask());

#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::EventMask_ptr _old_eventMask = m_eventMask;
#endif
    m_eventMask = _eventMask;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getSetEvent__eventMask(), _old_eventMask, m_eventMask);
        eNotify(&notification);
    }
#endif
}

::amalthea::Process_ptr SetEvent::getProcess() const
{
    return m_process;
}

void SetEvent::setProcess(::amalthea::Process_ptr _process)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::Process_ptr _old_process = m_process;
#endif
    m_process = _process;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getSetEvent__process(), _old_process, m_process);
        eNotify(&notification);
    }
#endif
}

::amalthea::Counter_ptr SetEvent::getCounter() const
{
    return m_counter;
}

void SetEvent::setCounter(::amalthea::Counter_ptr _counter)
{
    if (m_counter)
        m_counter->_setEContainer(SetEvent_ptr(),
                ::amalthea::AmaltheaPackage::_instance()->getSetEvent__counter());
    if (_counter)
        _counter->_setEContainer(_this(),
                ::amalthea::AmaltheaPackage::_instance()->getSetEvent__counter());

#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::Counter_ptr _old_counter = m_counter;
#endif
    m_counter = _counter;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getSetEvent__counter(), _old_counter, m_counter);
        eNotify(&notification);
    }
#endif
}

