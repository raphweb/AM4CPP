// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/Runnable.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "Runnable.hpp"
#include <amalthea/AbstractMemoryElement.hpp>
#include <amalthea/INamespaceMember.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Tag.hpp>
#include <amalthea/DataSize.hpp>
#include <amalthea/MemoryMapping.hpp>
#include <amalthea/Namespace.hpp>
#include <amalthea/ModeConditionDisjunction.hpp>
#include <amalthea/RunnableParameter.hpp>
#include <amalthea/ActivityGraph.hpp>
#include <amalthea/Activation.hpp>
#include <amalthea/Section.hpp>
#include <amalthea/RunnableCall.hpp>
#include <amalthea/Component.hpp>
#include <amalthea/INamed.hpp>
#include <amalthea/ActivityGraphItem.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(Runnable.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
Runnable::Runnable() : m_callback(false), m_service(false), m_executionCondition(
        0), m_activityGraph(0), m_section(0)
{

    m_parameters.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::amalthea::RunnableParameter_ptr, -1, true, true >(this,
                    ::amalthea::AmaltheaPackage::_instance()->getRunnable__parameters(),
                    ::amalthea::AmaltheaPackage::RUNNABLEPARAMETER__CONTAININGRUNNABLE));
    m_activations.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::amalthea::Activation_ptr, -1, false, false >(this,
                    ::amalthea::AmaltheaPackage::_instance()->getRunnable__activations()));
    m_runnableCalls.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::amalthea::RunnableCall_ptr, -1, false, false >(this,
                    ::amalthea::AmaltheaPackage::_instance()->getRunnable__runnableCalls()));
    m_referringComponents.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::amalthea::Component_ptr, -1, false, false >(this,
                    ::amalthea::AmaltheaPackage::_instance()->getRunnable__referringComponents()));

    /*PROTECTED REGION ID(RunnableImpl__RunnableImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

Runnable::~Runnable()
{
    if (m_executionCondition)
    {
        m_executionCondition.reset();
    }
    if (m_activityGraph)
    {
        m_activityGraph.reset();
    }
}

// Attributes

::ecore::EBoolean Runnable::isCallback() const
{
    return m_callback;
}

void Runnable::setCallback(::ecore::EBoolean _callback)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EBoolean _old_callback = m_callback;
#endif
    m_callback = _callback;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getRunnable__callback(), _old_callback, m_callback);
        eNotify(&notification);
    }
#endif
}

::ecore::EBoolean Runnable::isService() const
{
    return m_service;
}

void Runnable::setService(::ecore::EBoolean _service)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EBoolean _old_service = m_service;
#endif
    m_service = _service;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getRunnable__service(), _old_service, m_service);
        eNotify(&notification);
    }
#endif
}

::amalthea::ASILType Runnable::getAsilLevel() const
{
    return m_asilLevel;
}

void Runnable::setAsilLevel(::amalthea::ASILType _asilLevel)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::ASILType _old_asilLevel = m_asilLevel;
#endif
    m_asilLevel = _asilLevel;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getRunnable__asilLevel(), _old_asilLevel, m_asilLevel);
        eNotify(&notification);
    }
#endif
}

// References

::amalthea::ModeConditionDisjunction_ptr Runnable::getExecutionCondition() const
{
    return m_executionCondition;
}

void Runnable::setExecutionCondition(
        ::amalthea::ModeConditionDisjunction_ptr _executionCondition)
{
    if (m_executionCondition)
        m_executionCondition->_setEContainer(Runnable_ptr(),
                ::amalthea::AmaltheaPackage::_instance()->getRunnable__executionCondition());
    if (_executionCondition)
        _executionCondition->_setEContainer(_this(),
                ::amalthea::AmaltheaPackage::_instance()->getRunnable__executionCondition());

#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::ModeConditionDisjunction_ptr _old_executionCondition = m_executionCondition;
#endif
    m_executionCondition = _executionCondition;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getRunnable__executionCondition(), _old_executionCondition, m_executionCondition);
        eNotify(&notification);
    }
#endif
}

const ::ecorecpp::mapping::EList< ::amalthea::RunnableParameter_ptr >& Runnable::getParameters() const
{
    return *m_parameters;
}

::ecorecpp::mapping::EList< ::amalthea::RunnableParameter_ptr >& Runnable::getParameters()
{
    return *m_parameters;
}

::amalthea::ActivityGraph_ptr Runnable::getActivityGraph() const
{
    return m_activityGraph;
}

void Runnable::setActivityGraph(::amalthea::ActivityGraph_ptr _activityGraph)
{
    if (m_activityGraph)
        m_activityGraph->_setEContainer(Runnable_ptr(),
                ::amalthea::AmaltheaPackage::_instance()->getRunnable__activityGraph());
    if (_activityGraph)
        _activityGraph->_setEContainer(_this(),
                ::amalthea::AmaltheaPackage::_instance()->getRunnable__activityGraph());

#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::ActivityGraph_ptr _old_activityGraph = m_activityGraph;
#endif
    m_activityGraph = _activityGraph;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getRunnable__activityGraph(), _old_activityGraph, m_activityGraph);
        eNotify(&notification);
    }
#endif
}

const ::ecorecpp::mapping::EList< ::amalthea::Activation_ptr >& Runnable::getActivations() const
{
    return *m_activations;
}

::ecorecpp::mapping::EList< ::amalthea::Activation_ptr >& Runnable::getActivations()
{
    return *m_activations;
}

::amalthea::Section_ptr Runnable::getSection() const
{
    return m_section;
}

void Runnable::setSection(::amalthea::Section_ptr _section)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::Section_ptr _old_section = m_section;
#endif
    m_section = _section;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getRunnable__section(), _old_section, m_section);
        eNotify(&notification);
    }
#endif
}

const ::ecorecpp::mapping::EList< ::amalthea::RunnableCall_ptr >& Runnable::getRunnableCalls() const
{
    return *m_runnableCalls;
}

::ecorecpp::mapping::EList< ::amalthea::RunnableCall_ptr >& Runnable::getRunnableCalls()
{
    return *m_runnableCalls;
}

const ::ecorecpp::mapping::EList< ::amalthea::Component_ptr >& Runnable::getReferringComponents() const
{
    return *m_referringComponents;
}

::ecorecpp::mapping::EList< ::amalthea::Component_ptr >& Runnable::getReferringComponents()
{
    return *m_referringComponents;
}

