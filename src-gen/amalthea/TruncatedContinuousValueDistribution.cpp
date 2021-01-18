// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/TruncatedContinuousValueDistribution.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "TruncatedContinuousValueDistribution.hpp"
#include <amalthea/IContinuousValueDeviation.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(TruncatedContinuousValueDistribution.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
TruncatedContinuousValueDistribution::TruncatedContinuousValueDistribution()
{

    /*PROTECTED REGION ID(TruncatedContinuousValueDistributionImpl__TruncatedContinuousValueDistributionImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

TruncatedContinuousValueDistribution::~TruncatedContinuousValueDistribution()
{
}

// Attributes

::ecore::EDoubleObject TruncatedContinuousValueDistribution::getLowerBound() const
{
    return m_lowerBound;
}

void TruncatedContinuousValueDistribution::setLowerBound(
        ::ecore::EDoubleObject _lowerBound)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EDoubleObject _old_lowerBound = m_lowerBound;
#endif
    m_lowerBound = _lowerBound;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getTruncatedContinuousValueDistribution__lowerBound(), _old_lowerBound, m_lowerBound);
        eNotify(&notification);
    }
#endif
}

::ecore::EDoubleObject TruncatedContinuousValueDistribution::getUpperBound() const
{
    return m_upperBound;
}

void TruncatedContinuousValueDistribution::setUpperBound(
        ::ecore::EDoubleObject _upperBound)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EDoubleObject _old_upperBound = m_upperBound;
#endif
    m_upperBound = _upperBound;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getTruncatedContinuousValueDistribution__upperBound(), _old_upperBound, m_upperBound);
        eNotify(&notification);
    }
#endif
}

// References

