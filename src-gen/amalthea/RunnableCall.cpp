// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/RunnableCall.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "RunnableCall.hpp"
#include <amalthea/ActivityGraphItem.hpp>
#include <amalthea/ITaggable.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Process.hpp>
#include <amalthea/Runnable.hpp>
#include <amalthea/ActivityGraph.hpp>
#include <amalthea/Tag.hpp>
#include <amalthea/CallArgument.hpp>
#include <amalthea/Counter.hpp>
#include <amalthea/RunEntityCallStatistic.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(RunnableCall.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
RunnableCall::RunnableCall() : m_runnable(0), m_counter(0), m_statistic(0)
{

    m_arguments.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::amalthea::CallArgument_ptr, -1, true, true >(this,
                    ::amalthea::AmaltheaPackage::_instance()->getRunnableCall__arguments(),
                    ::amalthea::AmaltheaPackage::CALLARGUMENT__CONTAININGCALL));

    /*PROTECTED REGION ID(RunnableCallImpl__RunnableCallImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

RunnableCall::~RunnableCall()
{
    if (m_counter)
    {
        m_counter.reset();
    }
    if (m_statistic)
    {
        m_statistic.reset();
    }
}

// Attributes

// References

::amalthea::Runnable_ptr RunnableCall::getRunnable() const
{
    return m_runnable;
}

void RunnableCall::setRunnable(::amalthea::Runnable_ptr _runnable)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::Runnable_ptr _old_runnable = m_runnable;
#endif
    m_runnable = _runnable;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getRunnableCall__runnable(), _old_runnable, m_runnable);
        eNotify(&notification);
    }
#endif
}

const ::ecorecpp::mapping::EList< ::amalthea::CallArgument_ptr >& RunnableCall::getArguments() const
{
    return *m_arguments;
}

::ecorecpp::mapping::EList< ::amalthea::CallArgument_ptr >& RunnableCall::getArguments()
{
    return *m_arguments;
}

::amalthea::Counter_ptr RunnableCall::getCounter() const
{
    return m_counter;
}

void RunnableCall::setCounter(::amalthea::Counter_ptr _counter)
{
    if (m_counter)
        m_counter->_setEContainer(RunnableCall_ptr(),
                ::amalthea::AmaltheaPackage::_instance()->getRunnableCall__counter());
    if (_counter)
        _counter->_setEContainer(_this(),
                ::amalthea::AmaltheaPackage::_instance()->getRunnableCall__counter());

#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::Counter_ptr _old_counter = m_counter;
#endif
    m_counter = _counter;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getRunnableCall__counter(), _old_counter, m_counter);
        eNotify(&notification);
    }
#endif
}

::amalthea::RunEntityCallStatistic_ptr RunnableCall::getStatistic() const
{
    return m_statistic;
}

void RunnableCall::setStatistic(
        ::amalthea::RunEntityCallStatistic_ptr _statistic)
{
    if (m_statistic)
        m_statistic->_setEContainer(RunnableCall_ptr(),
                ::amalthea::AmaltheaPackage::_instance()->getRunnableCall__statistic());
    if (_statistic)
        _statistic->_setEContainer(_this(),
                ::amalthea::AmaltheaPackage::_instance()->getRunnableCall__statistic());

#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::RunEntityCallStatistic_ptr _old_statistic = m_statistic;
#endif
    m_statistic = _statistic;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getRunnableCall__statistic(), _old_statistic, m_statistic);
        eNotify(&notification);
    }
#endif
}

