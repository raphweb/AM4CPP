// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/CPUPercentageRequirementLimit.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "CPUPercentageRequirementLimit.hpp"
#include <amalthea/RequirementLimit.hpp>
#include <amalthea/ProcessingUnit.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(CPUPercentageRequirementLimit.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
CPUPercentageRequirementLimit::CPUPercentageRequirementLimit() : m_limitValue(
        0.0), m_hardwareContext(0)
{

    /*PROTECTED REGION ID(CPUPercentageRequirementLimitImpl__CPUPercentageRequirementLimitImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

CPUPercentageRequirementLimit::~CPUPercentageRequirementLimit()
{
}

// Attributes

::amalthea::CPUPercentageMetric CPUPercentageRequirementLimit::getMetric() const
{
    return m_metric;
}

void CPUPercentageRequirementLimit::setMetric(
        ::amalthea::CPUPercentageMetric _metric)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::CPUPercentageMetric _old_metric = m_metric;
#endif
    m_metric = _metric;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getCPUPercentageRequirementLimit__metric(), _old_metric, m_metric);
        eNotify(&notification);
    }
#endif
}

::ecore::EDouble CPUPercentageRequirementLimit::getLimitValue() const
{
    return m_limitValue;
}

void CPUPercentageRequirementLimit::setLimitValue(::ecore::EDouble _limitValue)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EDouble _old_limitValue = m_limitValue;
#endif
    m_limitValue = _limitValue;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getCPUPercentageRequirementLimit__limitValue(), _old_limitValue, m_limitValue);
        eNotify(&notification);
    }
#endif
}

// References

::amalthea::ProcessingUnit_ptr CPUPercentageRequirementLimit::getHardwareContext() const
{
    return m_hardwareContext;
}

void CPUPercentageRequirementLimit::setHardwareContext(
        ::amalthea::ProcessingUnit_ptr _hardwareContext)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::ProcessingUnit_ptr _old_hardwareContext = m_hardwareContext;
#endif
    m_hardwareContext = _hardwareContext;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getCPUPercentageRequirementLimit__hardwareContext(), _old_hardwareContext, m_hardwareContext);
        eNotify(&notification);
    }
#endif
}

