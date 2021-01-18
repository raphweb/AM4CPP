// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/ClockStepList.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "ClockStepList.hpp"
#include <amalthea/Clock.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/ClockStep.hpp>
#include <amalthea/Time.hpp>
#include <amalthea/INamed.hpp>
#include <amalthea/Namespace.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(ClockStepList.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
ClockStepList::ClockStepList() : m_period(0)
{

    m_entries.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::amalthea::ClockStep_ptr, -1, true, false >(this,
                    ::amalthea::AmaltheaPackage::_instance()->getClockStepList__entries()));

    /*PROTECTED REGION ID(ClockStepListImpl__ClockStepListImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

ClockStepList::~ClockStepList()
{
    if (m_period)
    {
        m_period.reset();
    }
}

// Attributes

// References

const ::ecorecpp::mapping::EList< ::amalthea::ClockStep_ptr >& ClockStepList::getEntries() const
{
    return *m_entries;
}

::ecorecpp::mapping::EList< ::amalthea::ClockStep_ptr >& ClockStepList::getEntries()
{
    return *m_entries;
}

::amalthea::Time_ptr ClockStepList::getPeriod() const
{
    return m_period;
}

void ClockStepList::setPeriod(::amalthea::Time_ptr _period)
{
    if (m_period)
        m_period->_setEContainer(ClockStepList_ptr(),
                ::amalthea::AmaltheaPackage::_instance()->getClockStepList__period());
    if (_period)
        _period->_setEContainer(_this(),
                ::amalthea::AmaltheaPackage::_instance()->getClockStepList__period());

#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::Time_ptr _old_period = m_period;
#endif
    m_period = _period;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getClockStepList__period(), _old_period, m_period);
        eNotify(&notification);
    }
#endif
}

