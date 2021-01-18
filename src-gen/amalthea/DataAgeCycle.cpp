// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/DataAgeCycle.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "DataAgeCycle.hpp"
#include <amalthea/DataAge.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(DataAgeCycle.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
DataAgeCycle::DataAgeCycle() : m_minimumCycle(0), m_maximumCycle(0)
{

    /*PROTECTED REGION ID(DataAgeCycleImpl__DataAgeCycleImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

DataAgeCycle::~DataAgeCycle()
{
}

// Attributes

::ecore::EInt DataAgeCycle::getMinimumCycle() const
{
    return m_minimumCycle;
}

void DataAgeCycle::setMinimumCycle(::ecore::EInt _minimumCycle)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EInt _old_minimumCycle = m_minimumCycle;
#endif
    m_minimumCycle = _minimumCycle;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getDataAgeCycle__minimumCycle(), _old_minimumCycle, m_minimumCycle);
        eNotify(&notification);
    }
#endif
}

::ecore::EInt DataAgeCycle::getMaximumCycle() const
{
    return m_maximumCycle;
}

void DataAgeCycle::setMaximumCycle(::ecore::EInt _maximumCycle)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EInt _old_maximumCycle = m_maximumCycle;
#endif
    m_maximumCycle = _maximumCycle;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getDataAgeCycle__maximumCycle(), _old_maximumCycle, m_maximumCycle);
        eNotify(&notification);
    }
#endif
}

// References

