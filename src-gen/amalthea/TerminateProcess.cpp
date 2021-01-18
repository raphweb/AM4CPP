// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/TerminateProcess.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "TerminateProcess.hpp"
#include <amalthea/ActivityGraphItem.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Process.hpp>
#include <amalthea/Runnable.hpp>
#include <amalthea/ActivityGraph.hpp>
#include <amalthea/Counter.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(TerminateProcess.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
TerminateProcess::TerminateProcess() : m_counter(0)
{

    /*PROTECTED REGION ID(TerminateProcessImpl__TerminateProcessImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

TerminateProcess::~TerminateProcess()
{
    if (m_counter)
    {
        m_counter.reset();
    }
}

// Attributes

// References

::amalthea::Counter_ptr TerminateProcess::getCounter() const
{
    return m_counter;
}

void TerminateProcess::setCounter(::amalthea::Counter_ptr _counter)
{
    if (m_counter)
        m_counter->_setEContainer(TerminateProcess_ptr(),
                ::amalthea::AmaltheaPackage::_instance()->getTerminateProcess__counter());
    if (_counter)
        _counter->_setEContainer(_this(),
                ::amalthea::AmaltheaPackage::_instance()->getTerminateProcess__counter());

#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::Counter_ptr _old_counter = m_counter;
#endif
    m_counter = _counter;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getTerminateProcess__counter(), _old_counter, m_counter);
        eNotify(&notification);
    }
#endif
}

