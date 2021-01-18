// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/CoreAllocationConstraint.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "CoreAllocationConstraint.hpp"
#include <amalthea/BaseObject.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/CoreClassification.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(CoreAllocationConstraint.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
CoreAllocationConstraint::CoreAllocationConstraint() : m_coreClassification(0)
{

    /*PROTECTED REGION ID(CoreAllocationConstraintImpl__CoreAllocationConstraintImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

CoreAllocationConstraint::~CoreAllocationConstraint()
{
    if (m_coreClassification)
    {
        m_coreClassification.reset();
    }
}

// Attributes

// References

::amalthea::CoreClassification_ptr CoreAllocationConstraint::getCoreClassification() const
{
    return m_coreClassification;
}

void CoreAllocationConstraint::setCoreClassification(
        ::amalthea::CoreClassification_ptr _coreClassification)
{
    if (m_coreClassification)
        m_coreClassification->_setEContainer(CoreAllocationConstraint_ptr(),
                ::amalthea::AmaltheaPackage::_instance()->getCoreAllocationConstraint__coreClassification());
    if (_coreClassification)
        _coreClassification->_setEContainer(_this(),
                ::amalthea::AmaltheaPackage::_instance()->getCoreAllocationConstraint__coreClassification());

#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::CoreClassification_ptr _old_coreClassification = m_coreClassification;
#endif
    m_coreClassification = _coreClassification;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getCoreAllocationConstraint__coreClassification(), _old_coreClassification, m_coreClassification);
        eNotify(&notification);
    }
#endif
}

