// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/ContinuousValueGaussDistribution.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "ContinuousValueGaussDistribution.hpp"
#include <amalthea/TruncatedContinuousValueDistribution.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(ContinuousValueGaussDistribution.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
ContinuousValueGaussDistribution::ContinuousValueGaussDistribution() : m_mean(
        0.0), m_sd(1.0)
{

    /*PROTECTED REGION ID(ContinuousValueGaussDistributionImpl__ContinuousValueGaussDistributionImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

ContinuousValueGaussDistribution::~ContinuousValueGaussDistribution()
{
}

// Attributes

::ecore::EDouble ContinuousValueGaussDistribution::getMean() const
{
    return m_mean;
}

void ContinuousValueGaussDistribution::setMean(::ecore::EDouble _mean)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EDouble _old_mean = m_mean;
#endif
    m_mean = _mean;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getContinuousValueGaussDistribution__mean(), _old_mean, m_mean);
        eNotify(&notification);
    }
#endif
}

::amalthea::PositiveDouble ContinuousValueGaussDistribution::getSd() const
{
    return m_sd;
}

void ContinuousValueGaussDistribution::setSd(::amalthea::PositiveDouble _sd)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::PositiveDouble _old_sd = m_sd;
#endif
    m_sd = _sd;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getContinuousValueGaussDistribution__sd(), _old_sd, m_sd);
        eNotify(&notification);
    }
#endif
}

// References

