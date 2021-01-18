// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/SchedulingParameters.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "SchedulingParameters.hpp"
#include <amalthea/Time.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(SchedulingParameters.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
SchedulingParameters::SchedulingParameters() : m_minBudget(0), m_maxBudget(0), m_replenishment(
        0)
{

    /*PROTECTED REGION ID(SchedulingParametersImpl__SchedulingParametersImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

SchedulingParameters::~SchedulingParameters()
{
    if (m_minBudget)
    {
        m_minBudget.reset();
    }
    if (m_maxBudget)
    {
        m_maxBudget.reset();
    }
    if (m_replenishment)
    {
        m_replenishment.reset();
    }
}

// Attributes

::ecore::EIntegerObject SchedulingParameters::getPriority() const
{
    return m_priority;
}

void SchedulingParameters::setPriority(::ecore::EIntegerObject _priority)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EIntegerObject _old_priority = m_priority;
#endif
    m_priority = _priority;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getSchedulingParameters__priority(), _old_priority, m_priority);
        eNotify(&notification);
    }
#endif
}

// References

::amalthea::Time_ptr SchedulingParameters::getMinBudget() const
{
    return m_minBudget;
}

void SchedulingParameters::setMinBudget(::amalthea::Time_ptr _minBudget)
{
    if (m_minBudget)
        m_minBudget->_setEContainer(SchedulingParameters_ptr(),
                ::amalthea::AmaltheaPackage::_instance()->getSchedulingParameters__minBudget());
    if (_minBudget)
        _minBudget->_setEContainer(_this(),
                ::amalthea::AmaltheaPackage::_instance()->getSchedulingParameters__minBudget());

#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::Time_ptr _old_minBudget = m_minBudget;
#endif
    m_minBudget = _minBudget;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getSchedulingParameters__minBudget(), _old_minBudget, m_minBudget);
        eNotify(&notification);
    }
#endif
}

::amalthea::Time_ptr SchedulingParameters::getMaxBudget() const
{
    return m_maxBudget;
}

void SchedulingParameters::setMaxBudget(::amalthea::Time_ptr _maxBudget)
{
    if (m_maxBudget)
        m_maxBudget->_setEContainer(SchedulingParameters_ptr(),
                ::amalthea::AmaltheaPackage::_instance()->getSchedulingParameters__maxBudget());
    if (_maxBudget)
        _maxBudget->_setEContainer(_this(),
                ::amalthea::AmaltheaPackage::_instance()->getSchedulingParameters__maxBudget());

#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::Time_ptr _old_maxBudget = m_maxBudget;
#endif
    m_maxBudget = _maxBudget;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getSchedulingParameters__maxBudget(), _old_maxBudget, m_maxBudget);
        eNotify(&notification);
    }
#endif
}

::amalthea::Time_ptr SchedulingParameters::getReplenishment() const
{
    return m_replenishment;
}

void SchedulingParameters::setReplenishment(::amalthea::Time_ptr _replenishment)
{
    if (m_replenishment)
        m_replenishment->_setEContainer(SchedulingParameters_ptr(),
                ::amalthea::AmaltheaPackage::_instance()->getSchedulingParameters__replenishment());
    if (_replenishment)
        _replenishment->_setEContainer(_this(),
                ::amalthea::AmaltheaPackage::_instance()->getSchedulingParameters__replenishment());

#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::Time_ptr _old_replenishment = m_replenishment;
#endif
    m_replenishment = _replenishment;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getSchedulingParameters__replenishment(), _old_replenishment, m_replenishment);
        eNotify(&notification);
    }
#endif
}

