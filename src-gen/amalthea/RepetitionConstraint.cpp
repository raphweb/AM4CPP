// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/RepetitionConstraint.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "RepetitionConstraint.hpp"
#include <amalthea/TimingConstraint.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/EntityEvent.hpp>
#include <amalthea/Time.hpp>
#include <amalthea/INamed.hpp>
#include <amalthea/Namespace.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(RepetitionConstraint.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
RepetitionConstraint::RepetitionConstraint() : m_span(0), m_event(0), m_lower(
        0), m_upper(0), m_jitter(0), m_period(0)
{

    /*PROTECTED REGION ID(RepetitionConstraintImpl__RepetitionConstraintImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

RepetitionConstraint::~RepetitionConstraint()
{
    if (m_lower)
    {
        m_lower.reset();
    }
    if (m_upper)
    {
        m_upper.reset();
    }
    if (m_jitter)
    {
        m_jitter.reset();
    }
    if (m_period)
    {
        m_period.reset();
    }
}

// Attributes

::ecore::EInt RepetitionConstraint::getSpan() const
{
    return m_span;
}

void RepetitionConstraint::setSpan(::ecore::EInt _span)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EInt _old_span = m_span;
#endif
    m_span = _span;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getRepetitionConstraint__span(), _old_span, m_span);
        eNotify(&notification);
    }
#endif
}

// References

::amalthea::EntityEvent_ptr RepetitionConstraint::getEvent() const
{
    return m_event;
}

void RepetitionConstraint::setEvent(::amalthea::EntityEvent_ptr _event)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::EntityEvent_ptr _old_event = m_event;
#endif
    m_event = _event;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getRepetitionConstraint__event(), _old_event, m_event);
        eNotify(&notification);
    }
#endif
}

::amalthea::Time_ptr RepetitionConstraint::getLower() const
{
    return m_lower;
}

void RepetitionConstraint::setLower(::amalthea::Time_ptr _lower)
{
    if (m_lower)
        m_lower->_setEContainer(RepetitionConstraint_ptr(),
                ::amalthea::AmaltheaPackage::_instance()->getRepetitionConstraint__lower());
    if (_lower)
        _lower->_setEContainer(_this(),
                ::amalthea::AmaltheaPackage::_instance()->getRepetitionConstraint__lower());

#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::Time_ptr _old_lower = m_lower;
#endif
    m_lower = _lower;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getRepetitionConstraint__lower(), _old_lower, m_lower);
        eNotify(&notification);
    }
#endif
}

::amalthea::Time_ptr RepetitionConstraint::getUpper() const
{
    return m_upper;
}

void RepetitionConstraint::setUpper(::amalthea::Time_ptr _upper)
{
    if (m_upper)
        m_upper->_setEContainer(RepetitionConstraint_ptr(),
                ::amalthea::AmaltheaPackage::_instance()->getRepetitionConstraint__upper());
    if (_upper)
        _upper->_setEContainer(_this(),
                ::amalthea::AmaltheaPackage::_instance()->getRepetitionConstraint__upper());

#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::Time_ptr _old_upper = m_upper;
#endif
    m_upper = _upper;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getRepetitionConstraint__upper(), _old_upper, m_upper);
        eNotify(&notification);
    }
#endif
}

::amalthea::Time_ptr RepetitionConstraint::getJitter() const
{
    return m_jitter;
}

void RepetitionConstraint::setJitter(::amalthea::Time_ptr _jitter)
{
    if (m_jitter)
        m_jitter->_setEContainer(RepetitionConstraint_ptr(),
                ::amalthea::AmaltheaPackage::_instance()->getRepetitionConstraint__jitter());
    if (_jitter)
        _jitter->_setEContainer(_this(),
                ::amalthea::AmaltheaPackage::_instance()->getRepetitionConstraint__jitter());

#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::Time_ptr _old_jitter = m_jitter;
#endif
    m_jitter = _jitter;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getRepetitionConstraint__jitter(), _old_jitter, m_jitter);
        eNotify(&notification);
    }
#endif
}

::amalthea::Time_ptr RepetitionConstraint::getPeriod() const
{
    return m_period;
}

void RepetitionConstraint::setPeriod(::amalthea::Time_ptr _period)
{
    if (m_period)
        m_period->_setEContainer(RepetitionConstraint_ptr(),
                ::amalthea::AmaltheaPackage::_instance()->getRepetitionConstraint__period());
    if (_period)
        _period->_setEContainer(_this(),
                ::amalthea::AmaltheaPackage::_instance()->getRepetitionConstraint__period());

#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::Time_ptr _old_period = m_period;
#endif
    m_period = _period;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getRepetitionConstraint__period(), _old_period, m_period);
        eNotify(&notification);
    }
#endif
}

