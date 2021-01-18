// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/ContinuousValueWeibullEstimatorsDistribution.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "ContinuousValueWeibullEstimatorsDistribution.hpp"
#include <amalthea/BoundedContinuousValueDistribution.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(ContinuousValueWeibullEstimatorsDistribution.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
ContinuousValueWeibullEstimatorsDistribution::ContinuousValueWeibullEstimatorsDistribution() : m_average(
        0.0), m_pRemainPromille(1.0)
{

    /*PROTECTED REGION ID(ContinuousValueWeibullEstimatorsDistributionImpl__ContinuousValueWeibullEstimatorsDistributionImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

ContinuousValueWeibullEstimatorsDistribution::~ContinuousValueWeibullEstimatorsDistribution()
{
}

// Attributes

::ecore::EDoubleObject ContinuousValueWeibullEstimatorsDistribution::getAverage() const
{
    return m_average;
}

void ContinuousValueWeibullEstimatorsDistribution::setAverage(
        ::ecore::EDoubleObject _average)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EDoubleObject _old_average = m_average;
#endif
    m_average = _average;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getContinuousValueWeibullEstimatorsDistribution__average(), _old_average, m_average);
        eNotify(&notification);
    }
#endif
}

::amalthea::PositiveDouble ContinuousValueWeibullEstimatorsDistribution::getPRemainPromille() const
{
    return m_pRemainPromille;
}

void ContinuousValueWeibullEstimatorsDistribution::setPRemainPromille(
        ::amalthea::PositiveDouble _pRemainPromille)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::PositiveDouble _old_pRemainPromille = m_pRemainPromille;
#endif
    m_pRemainPromille = _pRemainPromille;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getContinuousValueWeibullEstimatorsDistribution__pRemainPromille(), _old_pRemainPromille, m_pRemainPromille);
        eNotify(&notification);
    }
#endif
}

// References

