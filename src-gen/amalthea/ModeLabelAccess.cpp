// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/ModeLabelAccess.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "ModeLabelAccess.hpp"
#include <amalthea/ActivityGraphItem.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Process.hpp>
#include <amalthea/Runnable.hpp>
#include <amalthea/ActivityGraph.hpp>
#include <amalthea/ModeLabel.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(ModeLabelAccess.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
ModeLabelAccess::ModeLabelAccess() : m_step(1), m_data(0)
{

    /*PROTECTED REGION ID(ModeLabelAccessImpl__ModeLabelAccessImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

ModeLabelAccess::~ModeLabelAccess()
{
}

// Attributes

::amalthea::ModeLabelAccessEnum ModeLabelAccess::getAccess() const
{
    return m_access;
}

void ModeLabelAccess::setAccess(::amalthea::ModeLabelAccessEnum _access)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::ModeLabelAccessEnum _old_access = m_access;
#endif
    m_access = _access;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getModeLabelAccess__access(), _old_access, m_access);
        eNotify(&notification);
    }
#endif
}

::ecore::EString const& ModeLabelAccess::getValue() const
{
    return m_value;
}

void ModeLabelAccess::setValue(::ecore::EString const &_value)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EString _old_value = m_value;
#endif
    m_value = _value;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getModeLabelAccess__value(), _old_value, m_value);
        eNotify(&notification);
    }
#endif
}

::amalthea::PositiveInt ModeLabelAccess::getStep() const
{
    return m_step;
}

void ModeLabelAccess::setStep(::amalthea::PositiveInt _step)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::PositiveInt _old_step = m_step;
#endif
    m_step = _step;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getModeLabelAccess__step(), _old_step, m_step);
        eNotify(&notification);
    }
#endif
}

// References

::amalthea::ModeLabel_ptr ModeLabelAccess::getData() const
{
    return m_data;
}

void ModeLabelAccess::setData(::amalthea::ModeLabel_ptr _data)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::ModeLabel_ptr _old_data = m_data;
#endif
    m_data = _data;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getModeLabelAccess__data(), _old_data, m_data);
        eNotify(&notification);
    }
#endif
}

