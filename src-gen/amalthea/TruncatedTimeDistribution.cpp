// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/TruncatedTimeDistribution.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "TruncatedTimeDistribution.hpp"
#include <amalthea/ITimeDeviation.hpp>
#include <amalthea/Time.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(TruncatedTimeDistribution.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
TruncatedTimeDistribution::TruncatedTimeDistribution() : m_lowerBound(0), m_upperBound(
        0)
{

    /*PROTECTED REGION ID(TruncatedTimeDistributionImpl__TruncatedTimeDistributionImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

TruncatedTimeDistribution::~TruncatedTimeDistribution()
{
    if (m_lowerBound)
    {
        m_lowerBound.reset();
    }
    if (m_upperBound)
    {
        m_upperBound.reset();
    }
}

// Attributes

// References

::amalthea::Time_ptr TruncatedTimeDistribution::getLowerBound() const
{
    return m_lowerBound;
}

void TruncatedTimeDistribution::setLowerBound(::amalthea::Time_ptr _lowerBound)
{
    if (m_lowerBound)
        m_lowerBound->_setEContainer(TruncatedTimeDistribution_ptr(),
                ::amalthea::AmaltheaPackage::_instance()->getTruncatedTimeDistribution__lowerBound());
    if (_lowerBound)
        _lowerBound->_setEContainer(_this(),
                ::amalthea::AmaltheaPackage::_instance()->getTruncatedTimeDistribution__lowerBound());

#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::Time_ptr _old_lowerBound = m_lowerBound;
#endif
    m_lowerBound = _lowerBound;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getTruncatedTimeDistribution__lowerBound(), _old_lowerBound, m_lowerBound);
        eNotify(&notification);
    }
#endif
}

::amalthea::Time_ptr TruncatedTimeDistribution::getUpperBound() const
{
    return m_upperBound;
}

void TruncatedTimeDistribution::setUpperBound(::amalthea::Time_ptr _upperBound)
{
    if (m_upperBound)
        m_upperBound->_setEContainer(TruncatedTimeDistribution_ptr(),
                ::amalthea::AmaltheaPackage::_instance()->getTruncatedTimeDistribution__upperBound());
    if (_upperBound)
        _upperBound->_setEContainer(_this(),
                ::amalthea::AmaltheaPackage::_instance()->getTruncatedTimeDistribution__upperBound());

#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::Time_ptr _old_upperBound = m_upperBound;
#endif
    m_upperBound = _upperBound;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getTruncatedTimeDistribution__upperBound(), _old_upperBound, m_upperBound);
        eNotify(&notification);
    }
#endif
}

