// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/InterfaceChannel.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "InterfaceChannel.hpp"
#include <amalthea/ComponentInterface.hpp>
#include <amalthea/Channel.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(InterfaceChannel.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
InterfaceChannel::InterfaceChannel() : m_key(0), m_value(0)
{

    /*PROTECTED REGION ID(InterfaceChannelImpl__InterfaceChannelImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

InterfaceChannel::~InterfaceChannel()
{
}

// Attributes

// References

::amalthea::ComponentInterface_ptr InterfaceChannel::getKey() const
{
    return m_key;
}

void InterfaceChannel::setKey(::amalthea::ComponentInterface_ptr _key)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::ComponentInterface_ptr _old_key = m_key;
#endif
    m_key = _key;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getInterfaceChannel__key(), _old_key, m_key);
        eNotify(&notification);
    }
#endif
}

::amalthea::Channel_ptr InterfaceChannel::getValue() const
{
    return m_value;
}

void InterfaceChannel::setValue(::amalthea::Channel_ptr _value)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::Channel_ptr _old_value = m_value;
#endif
    m_value = _value;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getInterfaceChannel__value(), _old_value, m_value);
        eNotify(&notification);
    }
#endif
}

