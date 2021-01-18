// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/ProcessPrototype.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "ProcessPrototype.hpp"
#include <amalthea/AbstractProcess.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Tag.hpp>
#include <amalthea/DataSize.hpp>
#include <amalthea/MemoryMapping.hpp>
#include <amalthea/Component.hpp>
#include <amalthea/Runnable.hpp>
#include <amalthea/AccessPrecedenceSpec.hpp>
#include <amalthea/OrderPrecedenceSpec.hpp>
#include <amalthea/ChainedProcessPrototype.hpp>
#include <amalthea/Activation.hpp>
#include <amalthea/RunnableCall.hpp>
#include <amalthea/INamed.hpp>
#include <amalthea/Namespace.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(ProcessPrototype.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
ProcessPrototype::ProcessPrototype() : m_firstRunnable(0), m_lastRunnable(0), m_activation(
        0)
{

    m_accessPrecedenceSpec.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::amalthea::AccessPrecedenceSpec_ptr, -1, true, false >(
                    this,
                    ::amalthea::AmaltheaPackage::_instance()->getProcessPrototype__accessPrecedenceSpec()));
    m_orderPrecedenceSpec.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::amalthea::OrderPrecedenceSpec_ptr, -1, true, false >(this,
                    ::amalthea::AmaltheaPackage::_instance()->getProcessPrototype__orderPrecedenceSpec()));
    m_chainedPrototypes.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::amalthea::ChainedProcessPrototype_ptr, -1, true, false >(
                    this,
                    ::amalthea::AmaltheaPackage::_instance()->getProcessPrototype__chainedPrototypes()));
    m_runnableCalls.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::amalthea::RunnableCall_ptr, -1, true, false >(this,
                    ::amalthea::AmaltheaPackage::_instance()->getProcessPrototype__runnableCalls()));

    /*PROTECTED REGION ID(ProcessPrototypeImpl__ProcessPrototypeImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

ProcessPrototype::~ProcessPrototype()
{
}

// Attributes

::amalthea::Preemption ProcessPrototype::getPreemption() const
{
    return m_preemption;
}

void ProcessPrototype::setPreemption(::amalthea::Preemption _preemption)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::Preemption _old_preemption = m_preemption;
#endif
    m_preemption = _preemption;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getProcessPrototype__preemption(), _old_preemption, m_preemption);
        eNotify(&notification);
    }
#endif
}

// References

::amalthea::Runnable_ptr ProcessPrototype::getFirstRunnable() const
{
    return m_firstRunnable;
}

void ProcessPrototype::setFirstRunnable(::amalthea::Runnable_ptr _firstRunnable)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::Runnable_ptr _old_firstRunnable = m_firstRunnable;
#endif
    m_firstRunnable = _firstRunnable;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getProcessPrototype__firstRunnable(), _old_firstRunnable, m_firstRunnable);
        eNotify(&notification);
    }
#endif
}

::amalthea::Runnable_ptr ProcessPrototype::getLastRunnable() const
{
    return m_lastRunnable;
}

void ProcessPrototype::setLastRunnable(::amalthea::Runnable_ptr _lastRunnable)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::Runnable_ptr _old_lastRunnable = m_lastRunnable;
#endif
    m_lastRunnable = _lastRunnable;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getProcessPrototype__lastRunnable(), _old_lastRunnable, m_lastRunnable);
        eNotify(&notification);
    }
#endif
}

const ::ecorecpp::mapping::EList< ::amalthea::AccessPrecedenceSpec_ptr >& ProcessPrototype::getAccessPrecedenceSpec() const
{
    return *m_accessPrecedenceSpec;
}

::ecorecpp::mapping::EList< ::amalthea::AccessPrecedenceSpec_ptr >& ProcessPrototype::getAccessPrecedenceSpec()
{
    return *m_accessPrecedenceSpec;
}

const ::ecorecpp::mapping::EList< ::amalthea::OrderPrecedenceSpec_ptr >& ProcessPrototype::getOrderPrecedenceSpec() const
{
    return *m_orderPrecedenceSpec;
}

::ecorecpp::mapping::EList< ::amalthea::OrderPrecedenceSpec_ptr >& ProcessPrototype::getOrderPrecedenceSpec()
{
    return *m_orderPrecedenceSpec;
}

const ::ecorecpp::mapping::EList< ::amalthea::ChainedProcessPrototype_ptr >& ProcessPrototype::getChainedPrototypes() const
{
    return *m_chainedPrototypes;
}

::ecorecpp::mapping::EList< ::amalthea::ChainedProcessPrototype_ptr >& ProcessPrototype::getChainedPrototypes()
{
    return *m_chainedPrototypes;
}

::amalthea::Activation_ptr ProcessPrototype::getActivation() const
{
    return m_activation;
}

void ProcessPrototype::setActivation(::amalthea::Activation_ptr _activation)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::Activation_ptr _old_activation = m_activation;
#endif
    m_activation = _activation;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getProcessPrototype__activation(), _old_activation, m_activation);
        eNotify(&notification);
    }
#endif
}

const ::ecorecpp::mapping::EList< ::amalthea::RunnableCall_ptr >& ProcessPrototype::getRunnableCalls() const
{
    return *m_runnableCalls;
}

::ecorecpp::mapping::EList< ::amalthea::RunnableCall_ptr >& ProcessPrototype::getRunnableCalls()
{
    return *m_runnableCalls;
}

