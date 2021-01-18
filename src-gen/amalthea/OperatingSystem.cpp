// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/OperatingSystem.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "OperatingSystem.hpp"
#include <amalthea/BaseObject.hpp>
#include <amalthea/INamed.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/OsOverhead.hpp>
#include <amalthea/TaskScheduler.hpp>
#include <amalthea/InterruptController.hpp>
#include <amalthea/OsDataConsistency.hpp>
#include <amalthea/Namespace.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(OperatingSystem.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
OperatingSystem::OperatingSystem() : m_overhead(0), m_osDataConsistency(0)
{

    m_taskSchedulers.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::amalthea::TaskScheduler_ptr, -1, true, false >(this,
                    ::amalthea::AmaltheaPackage::_instance()->getOperatingSystem__taskSchedulers()));
    m_interruptControllers.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::amalthea::InterruptController_ptr, -1, true, false >(this,
                    ::amalthea::AmaltheaPackage::_instance()->getOperatingSystem__interruptControllers()));

    /*PROTECTED REGION ID(OperatingSystemImpl__OperatingSystemImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

OperatingSystem::~OperatingSystem()
{
    if (m_osDataConsistency)
    {
        m_osDataConsistency.reset();
    }
}

// Attributes

// References

::amalthea::OsOverhead_ptr OperatingSystem::getOverhead() const
{
    return m_overhead;
}

void OperatingSystem::setOverhead(::amalthea::OsOverhead_ptr _overhead)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::OsOverhead_ptr _old_overhead = m_overhead;
#endif
    m_overhead = _overhead;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getOperatingSystem__overhead(), _old_overhead, m_overhead);
        eNotify(&notification);
    }
#endif
}

const ::ecorecpp::mapping::EList< ::amalthea::TaskScheduler_ptr >& OperatingSystem::getTaskSchedulers() const
{
    return *m_taskSchedulers;
}

::ecorecpp::mapping::EList< ::amalthea::TaskScheduler_ptr >& OperatingSystem::getTaskSchedulers()
{
    return *m_taskSchedulers;
}

const ::ecorecpp::mapping::EList< ::amalthea::InterruptController_ptr >& OperatingSystem::getInterruptControllers() const
{
    return *m_interruptControllers;
}

::ecorecpp::mapping::EList< ::amalthea::InterruptController_ptr >& OperatingSystem::getInterruptControllers()
{
    return *m_interruptControllers;
}

::amalthea::OsDataConsistency_ptr OperatingSystem::getOsDataConsistency() const
{
    return m_osDataConsistency;
}

void OperatingSystem::setOsDataConsistency(
        ::amalthea::OsDataConsistency_ptr _osDataConsistency)
{
    if (m_osDataConsistency)
        m_osDataConsistency->_setEContainer(OperatingSystem_ptr(),
                ::amalthea::AmaltheaPackage::_instance()->getOperatingSystem__osDataConsistency());
    if (_osDataConsistency)
        _osDataConsistency->_setEContainer(_this(),
                ::amalthea::AmaltheaPackage::_instance()->getOperatingSystem__osDataConsistency());

#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::OsDataConsistency_ptr _old_osDataConsistency = m_osDataConsistency;
#endif
    m_osDataConsistency = _osDataConsistency;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getOperatingSystem__osDataConsistency(), _old_osDataConsistency, m_osDataConsistency);
        eNotify(&notification);
    }
#endif
}

