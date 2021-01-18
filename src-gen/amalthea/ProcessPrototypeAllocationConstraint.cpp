// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/ProcessPrototypeAllocationConstraint.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "ProcessPrototypeAllocationConstraint.hpp"
#include <amalthea/CoreAllocationConstraint.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/CoreClassification.hpp>
#include <amalthea/ProcessPrototype.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(ProcessPrototypeAllocationConstraint.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
ProcessPrototypeAllocationConstraint::ProcessPrototypeAllocationConstraint() : m_processPrototype(
        0)
{

    /*PROTECTED REGION ID(ProcessPrototypeAllocationConstraintImpl__ProcessPrototypeAllocationConstraintImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

ProcessPrototypeAllocationConstraint::~ProcessPrototypeAllocationConstraint()
{
}

// Attributes

// References

::amalthea::ProcessPrototype_ptr ProcessPrototypeAllocationConstraint::getProcessPrototype() const
{
    return m_processPrototype;
}

void ProcessPrototypeAllocationConstraint::setProcessPrototype(
        ::amalthea::ProcessPrototype_ptr _processPrototype)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::ProcessPrototype_ptr _old_processPrototype = m_processPrototype;
#endif
    m_processPrototype = _processPrototype;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getProcessPrototypeAllocationConstraint__processPrototype(), _old_processPrototype, m_processPrototype);
        eNotify(&notification);
    }
#endif
}

