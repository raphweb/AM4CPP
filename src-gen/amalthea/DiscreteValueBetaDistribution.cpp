// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/DiscreteValueBetaDistribution.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "DiscreteValueBetaDistribution.hpp"
#include <amalthea/BoundedDiscreteValueDistribution.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(DiscreteValueBetaDistribution.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
DiscreteValueBetaDistribution::DiscreteValueBetaDistribution() : m_alpha(1.0), m_beta(
        1.0)
{

    /*PROTECTED REGION ID(DiscreteValueBetaDistributionImpl__DiscreteValueBetaDistributionImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

DiscreteValueBetaDistribution::~DiscreteValueBetaDistribution()
{
}

// Attributes

::amalthea::PositiveDouble DiscreteValueBetaDistribution::getAlpha() const
{
    return m_alpha;
}

void DiscreteValueBetaDistribution::setAlpha(::amalthea::PositiveDouble _alpha)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::PositiveDouble _old_alpha = m_alpha;
#endif
    m_alpha = _alpha;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getDiscreteValueBetaDistribution__alpha(), _old_alpha, m_alpha);
        eNotify(&notification);
    }
#endif
}

::amalthea::PositiveDouble DiscreteValueBetaDistribution::getBeta() const
{
    return m_beta;
}

void DiscreteValueBetaDistribution::setBeta(::amalthea::PositiveDouble _beta)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::PositiveDouble _old_beta = m_beta;
#endif
    m_beta = _beta;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getDiscreteValueBetaDistribution__beta(), _old_beta, m_beta);
        eNotify(&notification);
    }
#endif
}

// References

