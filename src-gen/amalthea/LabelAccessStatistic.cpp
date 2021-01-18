// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/LabelAccessStatistic.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "LabelAccessStatistic.hpp"
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

/*PROTECTED REGION ID(LabelAccessStatistic.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
LabelAccessStatistic::LabelAccessStatistic() : m_value(0), m_cacheMisses(0)
{

    /*PROTECTED REGION ID(LabelAccessStatisticImpl__LabelAccessStatisticImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

LabelAccessStatistic::~LabelAccessStatistic()
{
    if (m_value)
    {
        m_value.reset();
    }
    if (m_cacheMisses)
    {
        m_cacheMisses.reset();
    }
}

// Attributes

// References

::amalthea::NumericStatistic_ptr LabelAccessStatistic::getValue() const
{
    return m_value;
}

void LabelAccessStatistic::setValue(::amalthea::NumericStatistic_ptr _value)
{
    if (m_value)
        m_value->_setEContainer(LabelAccessStatistic_ptr(),
                ::amalthea::AmaltheaPackage::_instance()->getLabelAccessStatistic__value());
    if (_value)
        _value->_setEContainer(_this(),
                ::amalthea::AmaltheaPackage::_instance()->getLabelAccessStatistic__value());

#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::NumericStatistic_ptr _old_value = m_value;
#endif
    m_value = _value;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getLabelAccessStatistic__value(), _old_value, m_value);
        eNotify(&notification);
    }
#endif
}

::amalthea::NumericStatistic_ptr LabelAccessStatistic::getCacheMisses() const
{
    return m_cacheMisses;
}

void LabelAccessStatistic::setCacheMisses(
        ::amalthea::NumericStatistic_ptr _cacheMisses)
{
    if (m_cacheMisses)
        m_cacheMisses->_setEContainer(LabelAccessStatistic_ptr(),
                ::amalthea::AmaltheaPackage::_instance()->getLabelAccessStatistic__cacheMisses());
    if (_cacheMisses)
        _cacheMisses->_setEContainer(_this(),
                ::amalthea::AmaltheaPackage::_instance()->getLabelAccessStatistic__cacheMisses());

#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::NumericStatistic_ptr _old_cacheMisses = m_cacheMisses;
#endif
    m_cacheMisses = _cacheMisses;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getLabelAccessStatistic__cacheMisses(), _old_cacheMisses, m_cacheMisses);
        eNotify(&notification);
    }
#endif
}

