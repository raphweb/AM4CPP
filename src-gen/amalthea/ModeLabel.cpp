// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/ModeLabel.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "ModeLabel.hpp"
#include <amalthea/AbstractMemoryElement.hpp>
#include <amalthea/IDisplayName.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Tag.hpp>
#include <amalthea/DataSize.hpp>
#include <amalthea/MemoryMapping.hpp>
#include <amalthea/Mode.hpp>
#include <amalthea/INamed.hpp>
#include <amalthea/Namespace.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(ModeLabel.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
ModeLabel::ModeLabel() : m_mode(0)
{

    /*PROTECTED REGION ID(ModeLabelImpl__ModeLabelImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

ModeLabel::~ModeLabel()
{
}

// Attributes

::ecore::EString const& ModeLabel::getInitialValue() const
{
    return m_initialValue;
}

void ModeLabel::setInitialValue(::ecore::EString const &_initialValue)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EString _old_initialValue = m_initialValue;
#endif
    m_initialValue = _initialValue;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getModeLabel__initialValue(), _old_initialValue, m_initialValue);
        eNotify(&notification);
    }
#endif
}

// References

::amalthea::Mode_ptr ModeLabel::getMode() const
{
    return m_mode;
}

void ModeLabel::setMode(::amalthea::Mode_ptr _mode)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::Mode_ptr _old_mode = m_mode;
#endif
    m_mode = _mode;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getModeLabel__mode(), _old_mode, m_mode);
        eNotify(&notification);
    }
#endif
}

