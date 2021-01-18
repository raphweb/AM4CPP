// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/ModeLabelCondition.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "ModeLabelCondition.hpp"
#include <amalthea/ModeCondition.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/ModeLabel.hpp>
#include <amalthea/ModeValueMapEntry.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(ModeLabelCondition.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
ModeLabelCondition::ModeLabelCondition() : m_label1(0), m_label2(0)
{

    /*PROTECTED REGION ID(ModeLabelConditionImpl__ModeLabelConditionImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

ModeLabelCondition::~ModeLabelCondition()
{
}

// Attributes

// References

::amalthea::ModeLabel_ptr ModeLabelCondition::getLabel1() const
{
    return m_label1;
}

void ModeLabelCondition::setLabel1(::amalthea::ModeLabel_ptr _label1)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::ModeLabel_ptr _old_label1 = m_label1;
#endif
    m_label1 = _label1;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getModeLabelCondition__label1(), _old_label1, m_label1);
        eNotify(&notification);
    }
#endif
}

::amalthea::ModeLabel_ptr ModeLabelCondition::getLabel2() const
{
    return m_label2;
}

void ModeLabelCondition::setLabel2(::amalthea::ModeLabel_ptr _label2)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::ModeLabel_ptr _old_label2 = m_label2;
#endif
    m_label2 = _label2;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getModeLabelCondition__label2(), _old_label2, m_label2);
        eNotify(&notification);
    }
#endif
}

