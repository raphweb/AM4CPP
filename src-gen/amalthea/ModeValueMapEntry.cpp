// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/ModeValueMapEntry.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "ModeValueMapEntry.hpp"
#include <amalthea/ModeLabel.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(ModeValueMapEntry.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
ModeValueMapEntry::ModeValueMapEntry() : m_key(0)
{

    /*PROTECTED REGION ID(ModeValueMapEntryImpl__ModeValueMapEntryImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

ModeValueMapEntry::~ModeValueMapEntry()
{
}

// Attributes

::ecore::EString const& ModeValueMapEntry::getValue() const
{
    return m_value;
}

void ModeValueMapEntry::setValue(::ecore::EString const &_value)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EString _old_value = m_value;
#endif
    m_value = _value;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getModeValueMapEntry__value(), _old_value, m_value);
        eNotify(&notification);
    }
#endif
}

// References

::amalthea::ModeLabel_ptr ModeValueMapEntry::getKey() const
{
    return m_key;
}

void ModeValueMapEntry::setKey(::amalthea::ModeLabel_ptr _key)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::ModeLabel_ptr _old_key = m_key;
#endif
    m_key = _key;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getModeValueMapEntry__key(), _old_key, m_key);
        eNotify(&notification);
    }
#endif
}

