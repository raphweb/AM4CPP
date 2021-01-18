// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/TimeGaussDistribution.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "TimeGaussDistribution.hpp"
#include <amalthea/TruncatedTimeDistribution.hpp>
#include <amalthea/Time.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(TimeGaussDistribution.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
TimeGaussDistribution::TimeGaussDistribution() : m_mean(0), m_sd(0)
{

    /*PROTECTED REGION ID(TimeGaussDistributionImpl__TimeGaussDistributionImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

TimeGaussDistribution::~TimeGaussDistribution()
{
    if (m_mean)
    {
        m_mean.reset();
    }
    if (m_sd)
    {
        m_sd.reset();
    }
}

// Attributes

// References

::amalthea::Time_ptr TimeGaussDistribution::getMean() const
{
    return m_mean;
}

void TimeGaussDistribution::setMean(::amalthea::Time_ptr _mean)
{
    if (m_mean)
        m_mean->_setEContainer(TimeGaussDistribution_ptr(),
                ::amalthea::AmaltheaPackage::_instance()->getTimeGaussDistribution__mean());
    if (_mean)
        _mean->_setEContainer(_this(),
                ::amalthea::AmaltheaPackage::_instance()->getTimeGaussDistribution__mean());

#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::Time_ptr _old_mean = m_mean;
#endif
    m_mean = _mean;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getTimeGaussDistribution__mean(), _old_mean, m_mean);
        eNotify(&notification);
    }
#endif
}

::amalthea::Time_ptr TimeGaussDistribution::getSd() const
{
    return m_sd;
}

void TimeGaussDistribution::setSd(::amalthea::Time_ptr _sd)
{
    if (m_sd)
        m_sd->_setEContainer(TimeGaussDistribution_ptr(),
                ::amalthea::AmaltheaPackage::_instance()->getTimeGaussDistribution__sd());
    if (_sd)
        _sd->_setEContainer(_this(),
                ::amalthea::AmaltheaPackage::_instance()->getTimeGaussDistribution__sd());

#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::Time_ptr _old_sd = m_sd;
#endif
    m_sd = _sd;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getTimeGaussDistribution__sd(), _old_sd, m_sd);
        eNotify(&notification);
    }
#endif
}

