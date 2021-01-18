// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/IDisplayName.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "IDisplayName.hpp"
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(IDisplayName.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
IDisplayName::IDisplayName()
{

    /*PROTECTED REGION ID(IDisplayNameImpl__IDisplayNameImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

IDisplayName::~IDisplayName()
{
}

// Attributes

::ecore::EString const& IDisplayName::getDisplayName() const
{
    return m_displayName;
}

void IDisplayName::setDisplayName(::ecore::EString const &_displayName)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EString _old_displayName = m_displayName;
#endif
    m_displayName = _displayName;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getIDisplayName__displayName(), _old_displayName, m_displayName);
        eNotify(&notification);
    }
#endif
}

// References

