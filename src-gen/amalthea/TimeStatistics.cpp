// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/TimeStatistics.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "TimeStatistics.hpp"
#include <amalthea/BoundedTimeDistribution.hpp>
#include <amalthea/Time.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(TimeStatistics.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
TimeStatistics::TimeStatistics() : m_average(0)
{

    /*PROTECTED REGION ID(TimeStatisticsImpl__TimeStatisticsImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

TimeStatistics::~TimeStatistics()
{
    if (m_average)
    {
        m_average.reset();
    }
}

// Attributes

// References

::amalthea::Time_ptr TimeStatistics::getAverage() const
{
    return m_average;
}

void TimeStatistics::setAverage(::amalthea::Time_ptr _average)
{
    if (m_average)
        m_average->_setEContainer(TimeStatistics_ptr(),
                ::amalthea::AmaltheaPackage::_instance()->getTimeStatistics__average());
    if (_average)
        _average->_setEContainer(_this(),
                ::amalthea::AmaltheaPackage::_instance()->getTimeStatistics__average());

#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::Time_ptr _old_average = m_average;
#endif
    m_average = _average;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getTimeStatistics__average(), _old_average, m_average);
        eNotify(&notification);
    }
#endif
}

