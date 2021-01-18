// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/Alias.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "Alias.hpp"
#include <amalthea/BaseObject.hpp>
#include <amalthea/CustomProperty.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(Alias.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
Alias::Alias()
{

    /*PROTECTED REGION ID(AliasImpl__AliasImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

Alias::~Alias()
{
}

// Attributes

::ecore::EString const& Alias::getTarget() const
{
    return m_target;
}

void Alias::setTarget(::ecore::EString const &_target)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EString _old_target = m_target;
#endif
    m_target = _target;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getAlias__target(), _old_target, m_target);
        eNotify(&notification);
    }
#endif
}

::ecore::EString const& Alias::getAlias() const
{
    return m_alias;
}

void Alias::setAlias(::ecore::EString const &_alias)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EString _old_alias = m_alias;
#endif
    m_alias = _alias;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getAlias__alias(), _old_alias, m_alias);
        eNotify(&notification);
    }
#endif
}

// References

