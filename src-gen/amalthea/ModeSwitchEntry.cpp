// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/ModeSwitchEntry.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "ModeSwitchEntry.hpp"
#include <amalthea/BaseObject.hpp>
#include <amalthea/INamed.hpp>
#include <amalthea/IActivityGraphItemContainer.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/ActivityGraphItem.hpp>
#include <amalthea/ModeConditionDisjunction.hpp>
#include <amalthea/Namespace.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(ModeSwitchEntry.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
ModeSwitchEntry::ModeSwitchEntry() : m_condition(0)
{

    /*PROTECTED REGION ID(ModeSwitchEntryImpl__ModeSwitchEntryImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

ModeSwitchEntry::~ModeSwitchEntry()
{
    if (m_condition)
    {
        m_condition.reset();
    }
}

// Attributes

// References

::amalthea::ModeConditionDisjunction_ptr ModeSwitchEntry::getCondition() const
{
    return m_condition;
}

void ModeSwitchEntry::setCondition(
        ::amalthea::ModeConditionDisjunction_ptr _condition)
{
    if (m_condition)
        m_condition->_setEContainer(ModeSwitchEntry_ptr(),
                ::amalthea::AmaltheaPackage::_instance()->getModeSwitchEntry__condition());
    if (_condition)
        _condition->_setEContainer(_this(),
                ::amalthea::AmaltheaPackage::_instance()->getModeSwitchEntry__condition());

#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::ModeConditionDisjunction_ptr _old_condition = m_condition;
#endif
    m_condition = _condition;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getModeSwitchEntry__condition(), _old_condition, m_condition);
        eNotify(&notification);
    }
#endif
}

