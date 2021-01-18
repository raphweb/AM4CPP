// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/CountRequirementLimit.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "CountRequirementLimit.hpp"
#include <amalthea/RequirementLimit.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(CountRequirementLimit.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
CountRequirementLimit::CountRequirementLimit() : m_limitValue(0)
{

    /*PROTECTED REGION ID(CountRequirementLimitImpl__CountRequirementLimitImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

CountRequirementLimit::~CountRequirementLimit()
{
}

// Attributes

::amalthea::CountMetric CountRequirementLimit::getMetric() const
{
    return m_metric;
}

void CountRequirementLimit::setMetric(::amalthea::CountMetric _metric)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::CountMetric _old_metric = m_metric;
#endif
    m_metric = _metric;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getCountRequirementLimit__metric(), _old_metric, m_metric);
        eNotify(&notification);
    }
#endif
}

::ecore::EInt CountRequirementLimit::getLimitValue() const
{
    return m_limitValue;
}

void CountRequirementLimit::setLimitValue(::ecore::EInt _limitValue)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EInt _old_limitValue = m_limitValue;
#endif
    m_limitValue = _limitValue;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getCountRequirementLimit__limitValue(), _old_limitValue, m_limitValue);
        eNotify(&notification);
    }
#endif
}

// References

