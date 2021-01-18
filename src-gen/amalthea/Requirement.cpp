// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/Requirement.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "Requirement.hpp"
#include <amalthea/BaseObject.hpp>
#include <amalthea/INamed.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/RequirementLimit.hpp>
#include <amalthea/Namespace.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(Requirement.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
Requirement::Requirement() : m_limit(0)
{

    /*PROTECTED REGION ID(RequirementImpl__RequirementImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

Requirement::~Requirement()
{
    if (m_limit)
    {
        m_limit.reset();
    }
}

// Attributes

::amalthea::Severity Requirement::getSeverity() const
{
    return m_severity;
}

void Requirement::setSeverity(::amalthea::Severity _severity)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::Severity _old_severity = m_severity;
#endif
    m_severity = _severity;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getRequirement__severity(), _old_severity, m_severity);
        eNotify(&notification);
    }
#endif
}

// References

::amalthea::RequirementLimit_ptr Requirement::getLimit() const
{
    return m_limit;
}

void Requirement::setLimit(::amalthea::RequirementLimit_ptr _limit)
{
    if (m_limit)
        m_limit->_setEContainer(Requirement_ptr(),
                ::amalthea::AmaltheaPackage::_instance()->getRequirement__limit());
    if (_limit)
        _limit->_setEContainer(_this(),
                ::amalthea::AmaltheaPackage::_instance()->getRequirement__limit());

#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::RequirementLimit_ptr _old_limit = m_limit;
#endif
    m_limit = _limit;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getRequirement__limit(), _old_limit, m_limit);
        eNotify(&notification);
    }
#endif
}

