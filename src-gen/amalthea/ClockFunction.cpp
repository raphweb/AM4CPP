// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/ClockFunction.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "ClockFunction.hpp"
#include <amalthea/Clock.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Time.hpp>
#include <amalthea/Frequency.hpp>
#include <amalthea/INamed.hpp>
#include <amalthea/Namespace.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(ClockFunction.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
ClockFunction::ClockFunction() : m_period(0), m_peakToPeak(0), m_xOffset(0), m_yOffset(
        0)
{

    /*PROTECTED REGION ID(ClockFunctionImpl__ClockFunctionImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

ClockFunction::~ClockFunction()
{
    if (m_period)
    {
        m_period.reset();
    }
    if (m_peakToPeak)
    {
        m_peakToPeak.reset();
    }
    if (m_xOffset)
    {
        m_xOffset.reset();
    }
    if (m_yOffset)
    {
        m_yOffset.reset();
    }
}

// Attributes

::amalthea::CurveType ClockFunction::getCurveType() const
{
    return m_curveType;
}

void ClockFunction::setCurveType(::amalthea::CurveType _curveType)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::CurveType _old_curveType = m_curveType;
#endif
    m_curveType = _curveType;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getClockFunction__curveType(), _old_curveType, m_curveType);
        eNotify(&notification);
    }
#endif
}

// References

::amalthea::Time_ptr ClockFunction::getPeriod() const
{
    return m_period;
}

void ClockFunction::setPeriod(::amalthea::Time_ptr _period)
{
    if (m_period)
        m_period->_setEContainer(ClockFunction_ptr(),
                ::amalthea::AmaltheaPackage::_instance()->getClockFunction__period());
    if (_period)
        _period->_setEContainer(_this(),
                ::amalthea::AmaltheaPackage::_instance()->getClockFunction__period());

#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::Time_ptr _old_period = m_period;
#endif
    m_period = _period;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getClockFunction__period(), _old_period, m_period);
        eNotify(&notification);
    }
#endif
}

::amalthea::Frequency_ptr ClockFunction::getPeakToPeak() const
{
    return m_peakToPeak;
}

void ClockFunction::setPeakToPeak(::amalthea::Frequency_ptr _peakToPeak)
{
    if (m_peakToPeak)
        m_peakToPeak->_setEContainer(ClockFunction_ptr(),
                ::amalthea::AmaltheaPackage::_instance()->getClockFunction__peakToPeak());
    if (_peakToPeak)
        _peakToPeak->_setEContainer(_this(),
                ::amalthea::AmaltheaPackage::_instance()->getClockFunction__peakToPeak());

#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::Frequency_ptr _old_peakToPeak = m_peakToPeak;
#endif
    m_peakToPeak = _peakToPeak;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getClockFunction__peakToPeak(), _old_peakToPeak, m_peakToPeak);
        eNotify(&notification);
    }
#endif
}

::amalthea::Time_ptr ClockFunction::getXOffset() const
{
    return m_xOffset;
}

void ClockFunction::setXOffset(::amalthea::Time_ptr _xOffset)
{
    if (m_xOffset)
        m_xOffset->_setEContainer(ClockFunction_ptr(),
                ::amalthea::AmaltheaPackage::_instance()->getClockFunction__xOffset());
    if (_xOffset)
        _xOffset->_setEContainer(_this(),
                ::amalthea::AmaltheaPackage::_instance()->getClockFunction__xOffset());

#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::Time_ptr _old_xOffset = m_xOffset;
#endif
    m_xOffset = _xOffset;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getClockFunction__xOffset(), _old_xOffset, m_xOffset);
        eNotify(&notification);
    }
#endif
}

::amalthea::Frequency_ptr ClockFunction::getYOffset() const
{
    return m_yOffset;
}

void ClockFunction::setYOffset(::amalthea::Frequency_ptr _yOffset)
{
    if (m_yOffset)
        m_yOffset->_setEContainer(ClockFunction_ptr(),
                ::amalthea::AmaltheaPackage::_instance()->getClockFunction__yOffset());
    if (_yOffset)
        _yOffset->_setEContainer(_this(),
                ::amalthea::AmaltheaPackage::_instance()->getClockFunction__yOffset());

#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::Frequency_ptr _old_yOffset = m_yOffset;
#endif
    m_yOffset = _yOffset;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getClockFunction__yOffset(), _old_yOffset, m_yOffset);
        eNotify(&notification);
    }
#endif
}

