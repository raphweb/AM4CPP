// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/TimeBetaDistribution.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "TimeBetaDistribution.hpp"
#include <amalthea/BoundedTimeDistribution.hpp>
#include <amalthea/Time.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(TimeBetaDistribution.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
TimeBetaDistribution::TimeBetaDistribution() : m_alpha(1.0), m_beta(1.0)
{

    /*PROTECTED REGION ID(TimeBetaDistributionImpl__TimeBetaDistributionImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

TimeBetaDistribution::~TimeBetaDistribution()
{
}

// Attributes

::amalthea::PositiveDouble TimeBetaDistribution::getAlpha() const
{
    return m_alpha;
}

void TimeBetaDistribution::setAlpha(::amalthea::PositiveDouble _alpha)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::PositiveDouble _old_alpha = m_alpha;
#endif
    m_alpha = _alpha;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getTimeBetaDistribution__alpha(), _old_alpha, m_alpha);
        eNotify(&notification);
    }
#endif
}

::amalthea::PositiveDouble TimeBetaDistribution::getBeta() const
{
    return m_beta;
}

void TimeBetaDistribution::setBeta(::amalthea::PositiveDouble _beta)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::PositiveDouble _old_beta = m_beta;
#endif
    m_beta = _beta;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getTimeBetaDistribution__beta(), _old_beta, m_beta);
        eNotify(&notification);
    }
#endif
}

// References

