// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/SchedulerAssociation.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "SchedulerAssociation.hpp"
#include <amalthea/TaskScheduler.hpp>
#include <amalthea/SchedulingParameters.hpp>
#include <amalthea/ParameterExtension.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(SchedulerAssociation.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
SchedulerAssociation::SchedulerAssociation() : m_child(0), m_parent(0), m_schedulingParameters(
        0)
{

    m_parameterExtensions.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::amalthea::ParameterExtension_ptr, -1, true, false >(this,
                    ::amalthea::AmaltheaPackage::_instance()->getSchedulerAssociation__parameterExtensions()));

    /*PROTECTED REGION ID(SchedulerAssociationImpl__SchedulerAssociationImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

SchedulerAssociation::~SchedulerAssociation()
{
    if (m_schedulingParameters)
    {
        m_schedulingParameters.reset();
    }
}

// Attributes

// References

::amalthea::TaskScheduler_ptr SchedulerAssociation::getChild() const
{
    return m_child;
}

::amalthea::TaskScheduler_ptr SchedulerAssociation::basicgetChild()
{
    return m_child;
}

void SchedulerAssociation::basicsetChild(::amalthea::TaskScheduler_ptr _child)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::TaskScheduler_ptr _old_child = m_child;
#endif
    m_child = _child;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getSchedulerAssociation__child(), _old_child, m_child);
        eNotify(&notification);
    }
#endif
}

void SchedulerAssociation::setChild(::amalthea::TaskScheduler_ptr _child)
{
    if (_child != m_child)
    {
        ::ecore::EJavaObject _this = ::ecore::EObject::_this();
        if (m_child != nullptr)
        {
            m_child->_inverseRemove(
                    ::amalthea::AmaltheaPackage::TASKSCHEDULER__PARENTASSOCIATION,
                    _this);
        }
        if (_child != nullptr)
        {
            _child->_inverseAdd(
                    ::amalthea::AmaltheaPackage::TASKSCHEDULER__PARENTASSOCIATION,
                    _this);
        }
        basicsetChild(_child);
    }
}

::amalthea::TaskScheduler_ptr SchedulerAssociation::getParent() const
{
    return m_parent;
}

void SchedulerAssociation::setParent(::amalthea::TaskScheduler_ptr _parent)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::TaskScheduler_ptr _old_parent = m_parent;
#endif
    m_parent = _parent;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getSchedulerAssociation__parent(), _old_parent, m_parent);
        eNotify(&notification);
    }
#endif
}

::amalthea::SchedulingParameters_ptr SchedulerAssociation::getSchedulingParameters() const
{
    return m_schedulingParameters;
}

void SchedulerAssociation::setSchedulingParameters(
        ::amalthea::SchedulingParameters_ptr _schedulingParameters)
{
    if (m_schedulingParameters)
        m_schedulingParameters->_setEContainer(SchedulerAssociation_ptr(),
                ::amalthea::AmaltheaPackage::_instance()->getSchedulerAssociation__schedulingParameters());
    if (_schedulingParameters)
        _schedulingParameters->_setEContainer(_this(),
                ::amalthea::AmaltheaPackage::_instance()->getSchedulerAssociation__schedulingParameters());

#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::SchedulingParameters_ptr _old_schedulingParameters = m_schedulingParameters;
#endif
    m_schedulingParameters = _schedulingParameters;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getSchedulerAssociation__schedulingParameters(), _old_schedulingParameters, m_schedulingParameters);
        eNotify(&notification);
    }
#endif
}

const ::ecorecpp::mapping::EList< ::amalthea::ParameterExtension_ptr >& SchedulerAssociation::getParameterExtensions() const
{
    return *m_parameterExtensions;
}

::ecorecpp::mapping::EList< ::amalthea::ParameterExtension_ptr >& SchedulerAssociation::getParameterExtensions()
{
    return *m_parameterExtensions;
}

