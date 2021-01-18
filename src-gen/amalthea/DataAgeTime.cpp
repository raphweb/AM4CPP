// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/DataAgeTime.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "DataAgeTime.hpp"
#include <amalthea/DataAge.hpp>
#include <amalthea/Time.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(DataAgeTime.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
DataAgeTime::DataAgeTime() : m_minimumTime(0), m_maximumTime(0)
{

    /*PROTECTED REGION ID(DataAgeTimeImpl__DataAgeTimeImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

DataAgeTime::~DataAgeTime()
{
    if (m_minimumTime)
    {
        m_minimumTime.reset();
    }
    if (m_maximumTime)
    {
        m_maximumTime.reset();
    }
}

// Attributes

// References

::amalthea::Time_ptr DataAgeTime::getMinimumTime() const
{
    return m_minimumTime;
}

void DataAgeTime::setMinimumTime(::amalthea::Time_ptr _minimumTime)
{
    if (m_minimumTime)
        m_minimumTime->_setEContainer(DataAgeTime_ptr(),
                ::amalthea::AmaltheaPackage::_instance()->getDataAgeTime__minimumTime());
    if (_minimumTime)
        _minimumTime->_setEContainer(_this(),
                ::amalthea::AmaltheaPackage::_instance()->getDataAgeTime__minimumTime());

#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::Time_ptr _old_minimumTime = m_minimumTime;
#endif
    m_minimumTime = _minimumTime;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getDataAgeTime__minimumTime(), _old_minimumTime, m_minimumTime);
        eNotify(&notification);
    }
#endif
}

::amalthea::Time_ptr DataAgeTime::getMaximumTime() const
{
    return m_maximumTime;
}

void DataAgeTime::setMaximumTime(::amalthea::Time_ptr _maximumTime)
{
    if (m_maximumTime)
        m_maximumTime->_setEContainer(DataAgeTime_ptr(),
                ::amalthea::AmaltheaPackage::_instance()->getDataAgeTime__maximumTime());
    if (_maximumTime)
        _maximumTime->_setEContainer(_this(),
                ::amalthea::AmaltheaPackage::_instance()->getDataAgeTime__maximumTime());

#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::Time_ptr _old_maximumTime = m_maximumTime;
#endif
    m_maximumTime = _maximumTime;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getDataAgeTime__maximumTime(), _old_maximumTime, m_maximumTime);
        eNotify(&notification);
    }
#endif
}

