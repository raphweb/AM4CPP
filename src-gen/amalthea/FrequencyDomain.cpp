// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/FrequencyDomain.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "FrequencyDomain.hpp"
#include <amalthea/HwDomain.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Tag.hpp>
#include <amalthea/Frequency.hpp>
#include <amalthea/INamed.hpp>
#include <amalthea/Namespace.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(FrequencyDomain.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
FrequencyDomain::FrequencyDomain() : m_clockGating(false), m_defaultValue(0)
{

    /*PROTECTED REGION ID(FrequencyDomainImpl__FrequencyDomainImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

FrequencyDomain::~FrequencyDomain()
{
    if (m_defaultValue)
    {
        m_defaultValue.reset();
    }
}

// Attributes

::ecore::EBoolean FrequencyDomain::isClockGating() const
{
    return m_clockGating;
}

void FrequencyDomain::setClockGating(::ecore::EBoolean _clockGating)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EBoolean _old_clockGating = m_clockGating;
#endif
    m_clockGating = _clockGating;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getFrequencyDomain__clockGating(), _old_clockGating, m_clockGating);
        eNotify(&notification);
    }
#endif
}

// References

::amalthea::Frequency_ptr FrequencyDomain::getDefaultValue() const
{
    return m_defaultValue;
}

void FrequencyDomain::setDefaultValue(::amalthea::Frequency_ptr _defaultValue)
{
    if (m_defaultValue)
        m_defaultValue->_setEContainer(FrequencyDomain_ptr(),
                ::amalthea::AmaltheaPackage::_instance()->getFrequencyDomain__defaultValue());
    if (_defaultValue)
        _defaultValue->_setEContainer(_this(),
                ::amalthea::AmaltheaPackage::_instance()->getFrequencyDomain__defaultValue());

#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::Frequency_ptr _old_defaultValue = m_defaultValue;
#endif
    m_defaultValue = _defaultValue;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getFrequencyDomain__defaultValue(), _old_defaultValue, m_defaultValue);
        eNotify(&notification);
    }
#endif
}

