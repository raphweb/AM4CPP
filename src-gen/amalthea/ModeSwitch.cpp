// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/ModeSwitch.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "ModeSwitch.hpp"
#include <amalthea/ActivityGraphItem.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Process.hpp>
#include <amalthea/Runnable.hpp>
#include <amalthea/ActivityGraph.hpp>
#include <amalthea/ModeSwitchEntry.hpp>
#include <amalthea/ModeSwitchDefault.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(ModeSwitch.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
ModeSwitch::ModeSwitch() : m_defaultEntry(0)
{

    m_entries.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::amalthea::ModeSwitchEntry_ptr, -1, true, false >(this,
                    ::amalthea::AmaltheaPackage::_instance()->getModeSwitch__entries()));

    /*PROTECTED REGION ID(ModeSwitchImpl__ModeSwitchImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

ModeSwitch::~ModeSwitch()
{
    if (m_defaultEntry)
    {
        m_defaultEntry.reset();
    }
}

// Attributes

// References

const ::ecorecpp::mapping::EList< ::amalthea::ModeSwitchEntry_ptr >& ModeSwitch::getEntries() const
{
    return *m_entries;
}

::ecorecpp::mapping::EList< ::amalthea::ModeSwitchEntry_ptr >& ModeSwitch::getEntries()
{
    return *m_entries;
}

::amalthea::ModeSwitchDefault_ptr ModeSwitch::getDefaultEntry() const
{
    return m_defaultEntry;
}

void ModeSwitch::setDefaultEntry(
        ::amalthea::ModeSwitchDefault_ptr _defaultEntry)
{
    if (m_defaultEntry)
        m_defaultEntry->_setEContainer(ModeSwitch_ptr(),
                ::amalthea::AmaltheaPackage::_instance()->getModeSwitch__defaultEntry());
    if (_defaultEntry)
        _defaultEntry->_setEContainer(_this(),
                ::amalthea::AmaltheaPackage::_instance()->getModeSwitch__defaultEntry());

#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::ModeSwitchDefault_ptr _old_defaultEntry = m_defaultEntry;
#endif
    m_defaultEntry = _defaultEntry;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getModeSwitch__defaultEntry(), _old_defaultEntry, m_defaultEntry);
        eNotify(&notification);
    }
#endif
}

