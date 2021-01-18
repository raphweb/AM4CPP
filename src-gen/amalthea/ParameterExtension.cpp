// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/ParameterExtension.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "ParameterExtension.hpp"
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(ParameterExtension.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
ParameterExtension::ParameterExtension()
{

    /*PROTECTED REGION ID(ParameterExtensionImpl__ParameterExtensionImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

ParameterExtension::~ParameterExtension()
{
}

// Attributes

::ecore::EString const& ParameterExtension::getKey() const
{
    return m_key;
}

void ParameterExtension::setKey(::ecore::EString const &_key)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EString _old_key = m_key;
#endif
    m_key = _key;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getParameterExtension__key(), _old_key, m_key);
        eNotify(&notification);
    }
#endif
}

::ecore::EString const& ParameterExtension::getValue() const
{
    return m_value;
}

void ParameterExtension::setValue(::ecore::EString const &_value)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EString _old_value = m_value;
#endif
    m_value = _value;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getParameterExtension__value(), _old_value, m_value);
        eNotify(&notification);
    }
#endif
}

// References

