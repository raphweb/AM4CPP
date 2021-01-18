// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/PowerDomain.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "PowerDomain.hpp"
#include <amalthea/HwDomain.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Tag.hpp>
#include <amalthea/Voltage.hpp>
#include <amalthea/INamed.hpp>
#include <amalthea/Namespace.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(PowerDomain.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
PowerDomain::PowerDomain() : m_powerGating(false), m_defaultValue(0)
{

    /*PROTECTED REGION ID(PowerDomainImpl__PowerDomainImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

PowerDomain::~PowerDomain()
{
    if (m_defaultValue)
    {
        m_defaultValue.reset();
    }
}

// Attributes

::ecore::EBoolean PowerDomain::isPowerGating() const
{
    return m_powerGating;
}

void PowerDomain::setPowerGating(::ecore::EBoolean _powerGating)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EBoolean _old_powerGating = m_powerGating;
#endif
    m_powerGating = _powerGating;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getPowerDomain__powerGating(), _old_powerGating, m_powerGating);
        eNotify(&notification);
    }
#endif
}

// References

::amalthea::Voltage_ptr PowerDomain::getDefaultValue() const
{
    return m_defaultValue;
}

void PowerDomain::setDefaultValue(::amalthea::Voltage_ptr _defaultValue)
{
    if (m_defaultValue)
        m_defaultValue->_setEContainer(PowerDomain_ptr(),
                ::amalthea::AmaltheaPackage::_instance()->getPowerDomain__defaultValue());
    if (_defaultValue)
        _defaultValue->_setEContainer(_this(),
                ::amalthea::AmaltheaPackage::_instance()->getPowerDomain__defaultValue());

#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::Voltage_ptr _old_defaultValue = m_defaultValue;
#endif
    m_defaultValue = _defaultValue;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getPowerDomain__defaultValue(), _old_defaultValue, m_defaultValue);
        eNotify(&notification);
    }
#endif
}

