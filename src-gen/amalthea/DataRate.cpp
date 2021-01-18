// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/DataRate.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "DataRate.hpp"
#include <amalthea/Quantity.hpp>
#include <amalthea/DataRateComparable.hpp>
#include <amalthea/DataRate.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(DataRate.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
DataRate::DataRate() : m_value(0)
{

    /*PROTECTED REGION ID(DataRateImpl__DataRateImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

DataRate::~DataRate()
{
}

// Attributes

::ecore::EBigInteger DataRate::getValue() const
{
    return m_value;
}

void DataRate::setValue(::ecore::EBigInteger _value)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EBigInteger _old_value = m_value;
#endif
    m_value = _value;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getDataRate__value(), _old_value, m_value);
        eNotify(&notification);
    }
#endif
}

::amalthea::DataRateUnit DataRate::getUnit() const
{
    return m_unit;
}

void DataRate::setUnit(::amalthea::DataRateUnit _unit)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::DataRateUnit _old_unit = m_unit;
#endif
    m_unit = _unit;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getDataRate__unit(), _old_unit, m_unit);
        eNotify(&notification);
    }
#endif
}

// References

