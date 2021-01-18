// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/TruncatedDiscreteValueDistribution.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "TruncatedDiscreteValueDistribution.hpp"
#include <amalthea/IDiscreteValueDeviation.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(TruncatedDiscreteValueDistribution.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
TruncatedDiscreteValueDistribution::TruncatedDiscreteValueDistribution()
{

    /*PROTECTED REGION ID(TruncatedDiscreteValueDistributionImpl__TruncatedDiscreteValueDistributionImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

TruncatedDiscreteValueDistribution::~TruncatedDiscreteValueDistribution()
{
}

// Attributes

::ecore::ELongObject TruncatedDiscreteValueDistribution::getLowerBound() const
{
    return m_lowerBound;
}

void TruncatedDiscreteValueDistribution::setLowerBound(
        ::ecore::ELongObject _lowerBound)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::ELongObject _old_lowerBound = m_lowerBound;
#endif
    m_lowerBound = _lowerBound;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getTruncatedDiscreteValueDistribution__lowerBound(), _old_lowerBound, m_lowerBound);
        eNotify(&notification);
    }
#endif
}

::ecore::ELongObject TruncatedDiscreteValueDistribution::getUpperBound() const
{
    return m_upperBound;
}

void TruncatedDiscreteValueDistribution::setUpperBound(
        ::ecore::ELongObject _upperBound)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::ELongObject _old_upperBound = m_upperBound;
#endif
    m_upperBound = _upperBound;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getTruncatedDiscreteValueDistribution__upperBound(), _old_upperBound, m_upperBound);
        eNotify(&notification);
    }
#endif
}

// References

