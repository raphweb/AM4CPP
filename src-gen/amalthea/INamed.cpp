// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/INamed.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "INamed.hpp"
#include <amalthea/INamed.hpp>
#include <amalthea/Namespace.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(INamed.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
INamed::INamed() : m_name("")
{

    /*PROTECTED REGION ID(INamedImpl__INamedImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

INamed::~INamed()
{
}

// Attributes

::ecore::EString const& INamed::getName() const
{
    return m_name;
}

void INamed::setName(::ecore::EString const &_name)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EString _old_name = m_name;
#endif
    m_name = _name;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getINamed__name(), _old_name, m_name);
        eNotify(&notification);
    }
#endif
}

::ecore::EString const& INamed::getQualifiedName() const
{
    return m_qualifiedName;
}

void INamed::setQualifiedName(::ecore::EString const &_qualifiedName)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EString _old_qualifiedName = m_qualifiedName;
#endif
    m_qualifiedName = _qualifiedName;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getINamed__qualifiedName(), _old_qualifiedName, m_qualifiedName);
        eNotify(&notification);
    }
#endif
}

// References

