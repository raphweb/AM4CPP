// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/MinAvgMaxStatistic.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "MinAvgMaxStatistic.hpp"
#include <amalthea/NumericStatistic.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(MinAvgMaxStatistic.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
MinAvgMaxStatistic::MinAvgMaxStatistic() : m_min(0), m_avg(), m_max(0)
{

    /*PROTECTED REGION ID(MinAvgMaxStatisticImpl__MinAvgMaxStatisticImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

MinAvgMaxStatistic::~MinAvgMaxStatistic()
{
}

// Attributes

::ecore::EInt MinAvgMaxStatistic::getMin() const
{
    return m_min;
}

void MinAvgMaxStatistic::setMin(::ecore::EInt _min)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EInt _old_min = m_min;
#endif
    m_min = _min;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getMinAvgMaxStatistic__min(), _old_min, m_min);
        eNotify(&notification);
    }
#endif
}

::ecore::EFloat MinAvgMaxStatistic::getAvg() const
{
    return m_avg;
}

void MinAvgMaxStatistic::setAvg(::ecore::EFloat _avg)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EFloat _old_avg = m_avg;
#endif
    m_avg = _avg;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getMinAvgMaxStatistic__avg(), _old_avg, m_avg);
        eNotify(&notification);
    }
#endif
}

::ecore::EInt MinAvgMaxStatistic::getMax() const
{
    return m_max;
}

void MinAvgMaxStatistic::setMax(::ecore::EInt _max)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EInt _old_max = m_max;
#endif
    m_max = _max;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getMinAvgMaxStatistic__max(), _old_max, m_max);
        eNotify(&notification);
    }
#endif
}

// References

