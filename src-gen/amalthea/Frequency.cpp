// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/Frequency.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "Frequency.hpp"
#include <amalthea/Quantity.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(Frequency.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
Frequency::Frequency() : m_value(0.0)
{

    /*PROTECTED REGION ID(FrequencyImpl__FrequencyImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

Frequency::~Frequency()
{
}

// Attributes

::amalthea::NonNegativeDouble Frequency::getValue() const
{
    return m_value;
}

void Frequency::setValue(::amalthea::NonNegativeDouble _value)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::NonNegativeDouble _old_value = m_value;
#endif
    m_value = _value;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getFrequency__value(), _old_value, m_value);
        eNotify(&notification);
    }
#endif
}

::amalthea::FrequencyUnit Frequency::getUnit() const
{
    return m_unit;
}

void Frequency::setUnit(::amalthea::FrequencyUnit _unit)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::FrequencyUnit _old_unit = m_unit;
#endif
    m_unit = _unit;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getFrequency__unit(), _old_unit, m_unit);
        eNotify(&notification);
    }
#endif
}

// References

