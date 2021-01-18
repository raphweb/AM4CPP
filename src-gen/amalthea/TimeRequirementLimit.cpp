// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/TimeRequirementLimit.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "TimeRequirementLimit.hpp"
#include <amalthea/RequirementLimit.hpp>
#include <amalthea/Time.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(TimeRequirementLimit.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
TimeRequirementLimit::TimeRequirementLimit() : m_limitValue(0)
{

    /*PROTECTED REGION ID(TimeRequirementLimitImpl__TimeRequirementLimitImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

TimeRequirementLimit::~TimeRequirementLimit()
{
    if (m_limitValue)
    {
        m_limitValue.reset();
    }
}

// Attributes

::amalthea::TimeMetric TimeRequirementLimit::getMetric() const
{
    return m_metric;
}

void TimeRequirementLimit::setMetric(::amalthea::TimeMetric _metric)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::TimeMetric _old_metric = m_metric;
#endif
    m_metric = _metric;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getTimeRequirementLimit__metric(), _old_metric, m_metric);
        eNotify(&notification);
    }
#endif
}

// References

::amalthea::Time_ptr TimeRequirementLimit::getLimitValue() const
{
    return m_limitValue;
}

void TimeRequirementLimit::setLimitValue(::amalthea::Time_ptr _limitValue)
{
    if (m_limitValue)
        m_limitValue->_setEContainer(TimeRequirementLimit_ptr(),
                ::amalthea::AmaltheaPackage::_instance()->getTimeRequirementLimit__limitValue());
    if (_limitValue)
        _limitValue->_setEContainer(_this(),
                ::amalthea::AmaltheaPackage::_instance()->getTimeRequirementLimit__limitValue());

#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::Time_ptr _old_limitValue = m_limitValue;
#endif
    m_limitValue = _limitValue;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getTimeRequirementLimit__limitValue(), _old_limitValue, m_limitValue);
        eNotify(&notification);
    }
#endif
}

