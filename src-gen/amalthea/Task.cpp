// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/Task.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "Task.hpp"
#include <amalthea/Process.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Tag.hpp>
#include <amalthea/DataSize.hpp>
#include <amalthea/MemoryMapping.hpp>
#include <amalthea/Component.hpp>
#include <amalthea/ActivityGraph.hpp>
#include <amalthea/Stimulus.hpp>
#include <amalthea/INamed.hpp>
#include <amalthea/Namespace.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(Task.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
Task::Task() : m_multipleTaskActivationLimit(0)
{

    /*PROTECTED REGION ID(TaskImpl__TaskImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

Task::~Task()
{
}

// Attributes

::amalthea::Preemption Task::getPreemption() const
{
    return m_preemption;
}

void Task::setPreemption(::amalthea::Preemption _preemption)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::Preemption _old_preemption = m_preemption;
#endif
    m_preemption = _preemption;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getTask__preemption(), _old_preemption, m_preemption);
        eNotify(&notification);
    }
#endif
}

::ecore::EInt Task::getMultipleTaskActivationLimit() const
{
    return m_multipleTaskActivationLimit;
}

void Task::setMultipleTaskActivationLimit(
        ::ecore::EInt _multipleTaskActivationLimit)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EInt _old_multipleTaskActivationLimit = m_multipleTaskActivationLimit;
#endif
    m_multipleTaskActivationLimit = _multipleTaskActivationLimit;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getTask__multipleTaskActivationLimit(), _old_multipleTaskActivationLimit, m_multipleTaskActivationLimit);
        eNotify(&notification);
    }
#endif
}

// References

