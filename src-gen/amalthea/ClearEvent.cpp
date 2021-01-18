// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/ClearEvent.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "ClearEvent.hpp"
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

/*PROTECTED REGION ID(ClearEvent.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
ClearEvent::ClearEvent() : m_eventMask(0), m_counter(0)
{

    /*PROTECTED REGION ID(ClearEventImpl__ClearEventImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

ClearEvent::~ClearEvent()
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

::amalthea::EventMask_ptr ClearEvent::getEventMask() const
{
    return m_eventMask;
}

void ClearEvent::setEventMask(::amalthea::EventMask_ptr _eventMask)
{
    if (m_eventMask)
        m_eventMask->_setEContainer(ClearEvent_ptr(),
                ::amalthea::AmaltheaPackage::_instance()->getClearEvent__eventMask());
    if (_eventMask)
        _eventMask->_setEContainer(_this(),
                ::amalthea::AmaltheaPackage::_instance()->getClearEvent__eventMask());

#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::EventMask_ptr _old_eventMask = m_eventMask;
#endif
    m_eventMask = _eventMask;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getClearEvent__eventMask(), _old_eventMask, m_eventMask);
        eNotify(&notification);
    }
#endif
}

::amalthea::Counter_ptr ClearEvent::getCounter() const
{
    return m_counter;
}

void ClearEvent::setCounter(::amalthea::Counter_ptr _counter)
{
    if (m_counter)
        m_counter->_setEContainer(ClearEvent_ptr(),
                ::amalthea::AmaltheaPackage::_instance()->getClearEvent__counter());
    if (_counter)
        _counter->_setEContainer(_this(),
                ::amalthea::AmaltheaPackage::_instance()->getClearEvent__counter());

#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::Counter_ptr _old_counter = m_counter;
#endif
    m_counter = _counter;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getClearEvent__counter(), _old_counter, m_counter);
        eNotify(&notification);
    }
#endif
}

