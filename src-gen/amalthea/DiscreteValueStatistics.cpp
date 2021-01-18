// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/DiscreteValueStatistics.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "DiscreteValueStatistics.hpp"
#include <amalthea/BoundedDiscreteValueDistribution.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(DiscreteValueStatistics.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
DiscreteValueStatistics::DiscreteValueStatistics() : m_average(0.0)
{

    /*PROTECTED REGION ID(DiscreteValueStatisticsImpl__DiscreteValueStatisticsImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

DiscreteValueStatistics::~DiscreteValueStatistics()
{
}

// Attributes

::ecore::EDoubleObject DiscreteValueStatistics::getAverage() const
{
    return m_average;
}

void DiscreteValueStatistics::setAverage(::ecore::EDoubleObject _average)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EDoubleObject _old_average = m_average;
#endif
    m_average = _average;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getDiscreteValueStatistics__average(), _old_average, m_average);
        eNotify(&notification);
    }
#endif
}

// References

