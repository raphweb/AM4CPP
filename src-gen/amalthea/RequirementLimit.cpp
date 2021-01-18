// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/RequirementLimit.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "RequirementLimit.hpp"
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(RequirementLimit.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
RequirementLimit::RequirementLimit()
{

    /*PROTECTED REGION ID(RequirementLimitImpl__RequirementLimitImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

RequirementLimit::~RequirementLimit()
{
}

// Attributes

::amalthea::LimitType RequirementLimit::getLimitType() const
{
    return m_limitType;
}

void RequirementLimit::setLimitType(::amalthea::LimitType _limitType)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::LimitType _old_limitType = m_limitType;
#endif
    m_limitType = _limitType;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getRequirementLimit__limitType(), _old_limitType, m_limitType);
        eNotify(&notification);
    }
#endif
}

// References

