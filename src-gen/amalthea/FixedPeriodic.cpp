// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/FixedPeriodic.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "FixedPeriodic.hpp"
#include <amalthea/Time.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(FixedPeriodic.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
FixedPeriodic::FixedPeriodic() : m_recurrence(0), m_offset(0)
{

    /*PROTECTED REGION ID(FixedPeriodicImpl__FixedPeriodicImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

FixedPeriodic::~FixedPeriodic()
{
    if (m_recurrence)
    {
        m_recurrence.reset();
    }
    if (m_offset)
    {
        m_offset.reset();
    }
}

// Attributes

// References

::amalthea::Time_ptr FixedPeriodic::getRecurrence() const
{
    return m_recurrence;
}

void FixedPeriodic::setRecurrence(::amalthea::Time_ptr _recurrence)
{
    if (m_recurrence)
        m_recurrence->_setEContainer(FixedPeriodic_ptr(),
                ::amalthea::AmaltheaPackage::_instance()->getFixedPeriodic__recurrence());
    if (_recurrence)
        _recurrence->_setEContainer(_this(),
                ::amalthea::AmaltheaPackage::_instance()->getFixedPeriodic__recurrence());

#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::Time_ptr _old_recurrence = m_recurrence;
#endif
    m_recurrence = _recurrence;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getFixedPeriodic__recurrence(), _old_recurrence, m_recurrence);
        eNotify(&notification);
    }
#endif
}

::amalthea::Time_ptr FixedPeriodic::getOffset() const
{
    return m_offset;
}

void FixedPeriodic::setOffset(::amalthea::Time_ptr _offset)
{
    if (m_offset)
        m_offset->_setEContainer(FixedPeriodic_ptr(),
                ::amalthea::AmaltheaPackage::_instance()->getFixedPeriodic__offset());
    if (_offset)
        _offset->_setEContainer(_this(),
                ::amalthea::AmaltheaPackage::_instance()->getFixedPeriodic__offset());

#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::Time_ptr _old_offset = m_offset;
#endif
    m_offset = _offset;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getFixedPeriodic__offset(), _old_offset, m_offset);
        eNotify(&notification);
    }
#endif
}

