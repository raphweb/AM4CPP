// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/EventChainLatencyConstraint.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "EventChainLatencyConstraint.hpp"
#include <amalthea/TimingConstraint.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/EventChain.hpp>
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

/*PROTECTED REGION ID(EventChainLatencyConstraint.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
EventChainLatencyConstraint::EventChainLatencyConstraint() : m_scope(0), m_minimum(
        0), m_maximum(0)
{

    /*PROTECTED REGION ID(EventChainLatencyConstraintImpl__EventChainLatencyConstraintImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

EventChainLatencyConstraint::~EventChainLatencyConstraint()
{
    if (m_minimum)
    {
        m_minimum.reset();
    }
    if (m_maximum)
    {
        m_maximum.reset();
    }
}

// Attributes

::amalthea::LatencyType EventChainLatencyConstraint::getType() const
{
    return m_type;
}

void EventChainLatencyConstraint::setType(::amalthea::LatencyType _type)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::LatencyType _old_type = m_type;
#endif
    m_type = _type;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getEventChainLatencyConstraint__type(), _old_type, m_type);
        eNotify(&notification);
    }
#endif
}

// References

::amalthea::EventChain_ptr EventChainLatencyConstraint::getScope() const
{
    return m_scope;
}

void EventChainLatencyConstraint::setScope(::amalthea::EventChain_ptr _scope)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::EventChain_ptr _old_scope = m_scope;
#endif
    m_scope = _scope;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getEventChainLatencyConstraint__scope(), _old_scope, m_scope);
        eNotify(&notification);
    }
#endif
}

::amalthea::Time_ptr EventChainLatencyConstraint::getMinimum() const
{
    return m_minimum;
}

void EventChainLatencyConstraint::setMinimum(::amalthea::Time_ptr _minimum)
{
    if (m_minimum)
        m_minimum->_setEContainer(EventChainLatencyConstraint_ptr(),
                ::amalthea::AmaltheaPackage::_instance()->getEventChainLatencyConstraint__minimum());
    if (_minimum)
        _minimum->_setEContainer(_this(),
                ::amalthea::AmaltheaPackage::_instance()->getEventChainLatencyConstraint__minimum());

#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::Time_ptr _old_minimum = m_minimum;
#endif
    m_minimum = _minimum;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getEventChainLatencyConstraint__minimum(), _old_minimum, m_minimum);
        eNotify(&notification);
    }
#endif
}

::amalthea::Time_ptr EventChainLatencyConstraint::getMaximum() const
{
    return m_maximum;
}

void EventChainLatencyConstraint::setMaximum(::amalthea::Time_ptr _maximum)
{
    if (m_maximum)
        m_maximum->_setEContainer(EventChainLatencyConstraint_ptr(),
                ::amalthea::AmaltheaPackage::_instance()->getEventChainLatencyConstraint__maximum());
    if (_maximum)
        _maximum->_setEContainer(_this(),
                ::amalthea::AmaltheaPackage::_instance()->getEventChainLatencyConstraint__maximum());

#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::Time_ptr _old_maximum = m_maximum;
#endif
    m_maximum = _maximum;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getEventChainLatencyConstraint__maximum(), _old_maximum, m_maximum);
        eNotify(&notification);
    }
#endif
}

