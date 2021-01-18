// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/PercentageRequirementLimit.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "PercentageRequirementLimit.hpp"
#include <amalthea/RequirementLimit.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(PercentageRequirementLimit.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
PercentageRequirementLimit::PercentageRequirementLimit() : m_limitValue(0.0)
{

    /*PROTECTED REGION ID(PercentageRequirementLimitImpl__PercentageRequirementLimitImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

PercentageRequirementLimit::~PercentageRequirementLimit()
{
}

// Attributes

::amalthea::PercentageMetric PercentageRequirementLimit::getMetric() const
{
    return m_metric;
}

void PercentageRequirementLimit::setMetric(::amalthea::PercentageMetric _metric)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::PercentageMetric _old_metric = m_metric;
#endif
    m_metric = _metric;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getPercentageRequirementLimit__metric(), _old_metric, m_metric);
        eNotify(&notification);
    }
#endif
}

::ecore::EDouble PercentageRequirementLimit::getLimitValue() const
{
    return m_limitValue;
}

void PercentageRequirementLimit::setLimitValue(::ecore::EDouble _limitValue)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EDouble _old_limitValue = m_limitValue;
#endif
    m_limitValue = _limitValue;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getPercentageRequirementLimit__limitValue(), _old_limitValue, m_limitValue);
        eNotify(&notification);
    }
#endif
}

// References

