// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/RunEntityCallStatistic.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "RunEntityCallStatistic.hpp"
#include <amalthea/BaseObject.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/NumericStatistic.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(RunEntityCallStatistic.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
RunEntityCallStatistic::RunEntityCallStatistic() : m_statistic(0)
{

    /*PROTECTED REGION ID(RunEntityCallStatisticImpl__RunEntityCallStatisticImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

RunEntityCallStatistic::~RunEntityCallStatistic()
{
    if (m_statistic)
    {
        m_statistic.reset();
    }
}

// Attributes

// References

::amalthea::NumericStatistic_ptr RunEntityCallStatistic::getStatistic() const
{
    return m_statistic;
}

void RunEntityCallStatistic::setStatistic(
        ::amalthea::NumericStatistic_ptr _statistic)
{
    if (m_statistic)
        m_statistic->_setEContainer(RunEntityCallStatistic_ptr(),
                ::amalthea::AmaltheaPackage::_instance()->getRunEntityCallStatistic__statistic());
    if (_statistic)
        _statistic->_setEContainer(_this(),
                ::amalthea::AmaltheaPackage::_instance()->getRunEntityCallStatistic__statistic());

#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::NumericStatistic_ptr _old_statistic = m_statistic;
#endif
    m_statistic = _statistic;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getRunEntityCallStatistic__statistic(), _old_statistic, m_statistic);
        eNotify(&notification);
    }
#endif
}

