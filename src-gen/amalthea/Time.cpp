// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/Time.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "Time.hpp"
#include <amalthea/Quantity.hpp>
#include <amalthea/Value.hpp>
#include <amalthea/TimeComparable.hpp>
#include <amalthea/Time.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(Time.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
Time::Time() : m_value(0)
{

    /*PROTECTED REGION ID(TimeImpl__TimeImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

Time::~Time()
{
}

// Attributes

::ecore::EBigInteger Time::getValue() const
{
    return m_value;
}

void Time::setValue(::ecore::EBigInteger _value)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EBigInteger _old_value = m_value;
#endif
    m_value = _value;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getTime__value(), _old_value, m_value);
        eNotify(&notification);
    }
#endif
}

::amalthea::TimeUnit Time::getUnit() const
{
    return m_unit;
}

void Time::setUnit(::amalthea::TimeUnit _unit)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::TimeUnit _old_unit = m_unit;
#endif
    m_unit = _unit;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getTime__unit(), _old_unit, m_unit);
        eNotify(&notification);
    }
#endif
}

// References

