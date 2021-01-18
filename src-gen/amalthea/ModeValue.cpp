// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/ModeValue.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "ModeValue.hpp"
#include <amalthea/BaseObject.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/ModeLabel.hpp>
#include <amalthea/ModeLiteral.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(ModeValue.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
ModeValue::ModeValue() : m_label(0)
{

    /*PROTECTED REGION ID(ModeValueImpl__ModeValueImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

ModeValue::~ModeValue()
{
}

// Attributes

::ecore::EString const& ModeValue::getValue() const
{
    return m_value;
}

void ModeValue::setValue(::ecore::EString const &_value)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EString _old_value = m_value;
#endif
    m_value = _value;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getModeValue__value(), _old_value, m_value);
        eNotify(&notification);
    }
#endif
}

// References

::amalthea::ModeLabel_ptr ModeValue::getLabel() const
{
    return m_label;
}

void ModeValue::setLabel(::amalthea::ModeLabel_ptr _label)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::ModeLabel_ptr _old_label = m_label;
#endif
    m_label = _label;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getModeValue__label(), _old_label, m_label);
        eNotify(&notification);
    }
#endif
}

