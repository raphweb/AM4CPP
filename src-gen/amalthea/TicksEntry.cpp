// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/TicksEntry.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "TicksEntry.hpp"
#include <amalthea/ProcessingUnitDefinition.hpp>
#include <amalthea/IDiscreteValueDeviation.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(TicksEntry.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
TicksEntry::TicksEntry() : m_key(0), m_value(0)
{

    /*PROTECTED REGION ID(TicksEntryImpl__TicksEntryImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

TicksEntry::~TicksEntry()
{
    if (m_value)
    {
        m_value.reset();
    }
}

// Attributes

// References

::amalthea::ProcessingUnitDefinition_ptr TicksEntry::getKey() const
{
    return m_key;
}

void TicksEntry::setKey(::amalthea::ProcessingUnitDefinition_ptr _key)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::ProcessingUnitDefinition_ptr _old_key = m_key;
#endif
    m_key = _key;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getTicksEntry__key(), _old_key, m_key);
        eNotify(&notification);
    }
#endif
}

::amalthea::IDiscreteValueDeviation_ptr TicksEntry::getValue() const
{
    return m_value;
}

void TicksEntry::setValue(::amalthea::IDiscreteValueDeviation_ptr _value)
{
    if (m_value)
        m_value->_setEContainer(TicksEntry_ptr(),
                ::amalthea::AmaltheaPackage::_instance()->getTicksEntry__value());
    if (_value)
        _value->_setEContainer(_this(),
                ::amalthea::AmaltheaPackage::_instance()->getTicksEntry__value());

#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::IDiscreteValueDeviation_ptr _old_value = m_value;
#endif
    m_value = _value;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getTicksEntry__value(), _old_value, m_value);
        eNotify(&notification);
    }
#endif
}

