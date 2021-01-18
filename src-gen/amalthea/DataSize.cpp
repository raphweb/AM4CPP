// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/DataSize.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "DataSize.hpp"
#include <amalthea/Quantity.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(DataSize.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
DataSize::DataSize() : m_value(0)
{

    /*PROTECTED REGION ID(DataSizeImpl__DataSizeImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

DataSize::~DataSize()
{
}

// Attributes

::ecore::EBigInteger DataSize::getValue() const
{
    return m_value;
}

void DataSize::setValue(::ecore::EBigInteger _value)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EBigInteger _old_value = m_value;
#endif
    m_value = _value;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getDataSize__value(), _old_value, m_value);
        eNotify(&notification);
    }
#endif
}

::amalthea::DataSizeUnit DataSize::getUnit() const
{
    return m_unit;
}

void DataSize::setUnit(::amalthea::DataSizeUnit _unit)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::DataSizeUnit _old_unit = m_unit;
#endif
    m_unit = _unit;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getDataSize__unit(), _old_unit, m_unit);
        eNotify(&notification);
    }
#endif
}

// References

