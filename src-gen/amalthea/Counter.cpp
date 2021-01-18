// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/Counter.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "Counter.hpp"
#include <amalthea/BaseObject.hpp>
#include <amalthea/CustomProperty.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(Counter.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
Counter::Counter() : m_prescaler(1), m_offset(0)
{

    /*PROTECTED REGION ID(CounterImpl__CounterImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

Counter::~Counter()
{
}

// Attributes

::amalthea::PositiveLong Counter::getPrescaler() const
{
    return m_prescaler;
}

void Counter::setPrescaler(::amalthea::PositiveLong _prescaler)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::PositiveLong _old_prescaler = m_prescaler;
#endif
    m_prescaler = _prescaler;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getCounter__prescaler(), _old_prescaler, m_prescaler);
        eNotify(&notification);
    }
#endif
}

::amalthea::NonNegativeLong Counter::getOffset() const
{
    return m_offset;
}

void Counter::setOffset(::amalthea::NonNegativeLong _offset)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::NonNegativeLong _old_offset = m_offset;
#endif
    m_offset = _offset;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getCounter__offset(), _old_offset, m_offset);
        eNotify(&notification);
    }
#endif
}

// References

