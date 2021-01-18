// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/FrequencyRequirementLimit.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "FrequencyRequirementLimit.hpp"
#include <amalthea/RequirementLimit.hpp>
#include <amalthea/Frequency.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(FrequencyRequirementLimit.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
FrequencyRequirementLimit::FrequencyRequirementLimit() : m_limitValue(0)
{

    /*PROTECTED REGION ID(FrequencyRequirementLimitImpl__FrequencyRequirementLimitImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

FrequencyRequirementLimit::~FrequencyRequirementLimit()
{
    if (m_limitValue)
    {
        m_limitValue.reset();
    }
}

// Attributes

::amalthea::FrequencyMetric FrequencyRequirementLimit::getMetric() const
{
    return m_metric;
}

void FrequencyRequirementLimit::setMetric(::amalthea::FrequencyMetric _metric)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::FrequencyMetric _old_metric = m_metric;
#endif
    m_metric = _metric;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getFrequencyRequirementLimit__metric(), _old_metric, m_metric);
        eNotify(&notification);
    }
#endif
}

// References

::amalthea::Frequency_ptr FrequencyRequirementLimit::getLimitValue() const
{
    return m_limitValue;
}

void FrequencyRequirementLimit::setLimitValue(
        ::amalthea::Frequency_ptr _limitValue)
{
    if (m_limitValue)
        m_limitValue->_setEContainer(FrequencyRequirementLimit_ptr(),
                ::amalthea::AmaltheaPackage::_instance()->getFrequencyRequirementLimit__limitValue());
    if (_limitValue)
        _limitValue->_setEContainer(_this(),
                ::amalthea::AmaltheaPackage::_instance()->getFrequencyRequirementLimit__limitValue());

#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::Frequency_ptr _old_limitValue = m_limitValue;
#endif
    m_limitValue = _limitValue;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getFrequencyRequirementLimit__limitValue(), _old_limitValue, m_limitValue);
        eNotify(&notification);
    }
#endif
}

