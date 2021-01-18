// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/PeriodicActivation.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "PeriodicActivation.hpp"
#include <amalthea/Activation.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Tag.hpp>
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

/*PROTECTED REGION ID(PeriodicActivation.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
PeriodicActivation::PeriodicActivation() : m_min(0), m_max(0), m_recurrence(0), m_offset(
        0)
{

    /*PROTECTED REGION ID(PeriodicActivationImpl__PeriodicActivationImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

PeriodicActivation::~PeriodicActivation()
{
    if (m_min)
    {
        m_min.reset();
    }
    if (m_max)
    {
        m_max.reset();
    }
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

::amalthea::Time_ptr PeriodicActivation::getMin() const
{
    return m_min;
}

void PeriodicActivation::setMin(::amalthea::Time_ptr _min)
{
    if (m_min)
        m_min->_setEContainer(PeriodicActivation_ptr(),
                ::amalthea::AmaltheaPackage::_instance()->getPeriodicActivation__min());
    if (_min)
        _min->_setEContainer(_this(),
                ::amalthea::AmaltheaPackage::_instance()->getPeriodicActivation__min());

#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::Time_ptr _old_min = m_min;
#endif
    m_min = _min;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getPeriodicActivation__min(), _old_min, m_min);
        eNotify(&notification);
    }
#endif
}

::amalthea::Time_ptr PeriodicActivation::getMax() const
{
    return m_max;
}

void PeriodicActivation::setMax(::amalthea::Time_ptr _max)
{
    if (m_max)
        m_max->_setEContainer(PeriodicActivation_ptr(),
                ::amalthea::AmaltheaPackage::_instance()->getPeriodicActivation__max());
    if (_max)
        _max->_setEContainer(_this(),
                ::amalthea::AmaltheaPackage::_instance()->getPeriodicActivation__max());

#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::Time_ptr _old_max = m_max;
#endif
    m_max = _max;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getPeriodicActivation__max(), _old_max, m_max);
        eNotify(&notification);
    }
#endif
}

::amalthea::Time_ptr PeriodicActivation::getRecurrence() const
{
    return m_recurrence;
}

void PeriodicActivation::setRecurrence(::amalthea::Time_ptr _recurrence)
{
    if (m_recurrence)
        m_recurrence->_setEContainer(PeriodicActivation_ptr(),
                ::amalthea::AmaltheaPackage::_instance()->getPeriodicActivation__recurrence());
    if (_recurrence)
        _recurrence->_setEContainer(_this(),
                ::amalthea::AmaltheaPackage::_instance()->getPeriodicActivation__recurrence());

#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::Time_ptr _old_recurrence = m_recurrence;
#endif
    m_recurrence = _recurrence;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getPeriodicActivation__recurrence(), _old_recurrence, m_recurrence);
        eNotify(&notification);
    }
#endif
}

::amalthea::Time_ptr PeriodicActivation::getOffset() const
{
    return m_offset;
}

void PeriodicActivation::setOffset(::amalthea::Time_ptr _offset)
{
    if (m_offset)
        m_offset->_setEContainer(PeriodicActivation_ptr(),
                ::amalthea::AmaltheaPackage::_instance()->getPeriodicActivation__offset());
    if (_offset)
        _offset->_setEContainer(_this(),
                ::amalthea::AmaltheaPackage::_instance()->getPeriodicActivation__offset());

#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::Time_ptr _old_offset = m_offset;
#endif
    m_offset = _offset;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getPeriodicActivation__offset(), _old_offset, m_offset);
        eNotify(&notification);
    }
#endif
}

