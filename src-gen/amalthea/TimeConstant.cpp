// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/TimeConstant.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "TimeConstant.hpp"
#include <amalthea/ITimeDeviation.hpp>
#include <amalthea/Time.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(TimeConstant.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
TimeConstant::TimeConstant() : m_value(0)
{

    /*PROTECTED REGION ID(TimeConstantImpl__TimeConstantImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

TimeConstant::~TimeConstant()
{
    if (m_value)
    {
        m_value.reset();
    }
}

// Attributes

// References

::amalthea::Time_ptr TimeConstant::getValue() const
{
    return m_value;
}

void TimeConstant::setValue(::amalthea::Time_ptr _value)
{
    if (m_value)
        m_value->_setEContainer(TimeConstant_ptr(),
                ::amalthea::AmaltheaPackage::_instance()->getTimeConstant__value());
    if (_value)
        _value->_setEContainer(_this(),
                ::amalthea::AmaltheaPackage::_instance()->getTimeConstant__value());

#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::Time_ptr _old_value = m_value;
#endif
    m_value = _value;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getTimeConstant__value(), _old_value, m_value);
        eNotify(&notification);
    }
#endif
}

