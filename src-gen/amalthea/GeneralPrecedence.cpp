// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/GeneralPrecedence.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "GeneralPrecedence.hpp"
#include <amalthea/BaseObject.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Runnable.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(GeneralPrecedence.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
GeneralPrecedence::GeneralPrecedence() : m_origin(0), m_target(0)
{

    /*PROTECTED REGION ID(GeneralPrecedenceImpl__GeneralPrecedenceImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

GeneralPrecedence::~GeneralPrecedence()
{
}

// Attributes

// References

::amalthea::Runnable_ptr GeneralPrecedence::getOrigin() const
{
    return m_origin;
}

void GeneralPrecedence::setOrigin(::amalthea::Runnable_ptr _origin)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::Runnable_ptr _old_origin = m_origin;
#endif
    m_origin = _origin;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getGeneralPrecedence__origin(), _old_origin, m_origin);
        eNotify(&notification);
    }
#endif
}

::amalthea::Runnable_ptr GeneralPrecedence::getTarget() const
{
    return m_target;
}

void GeneralPrecedence::setTarget(::amalthea::Runnable_ptr _target)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::Runnable_ptr _old_target = m_target;
#endif
    m_target = _target;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getGeneralPrecedence__target(), _old_target, m_target);
        eNotify(&notification);
    }
#endif
}

