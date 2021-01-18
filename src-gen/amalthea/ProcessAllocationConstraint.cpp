// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/ProcessAllocationConstraint.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "ProcessAllocationConstraint.hpp"
#include <amalthea/CoreAllocationConstraint.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/CoreClassification.hpp>
#include <amalthea/Process.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(ProcessAllocationConstraint.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
ProcessAllocationConstraint::ProcessAllocationConstraint() : m_process(0)
{

    /*PROTECTED REGION ID(ProcessAllocationConstraintImpl__ProcessAllocationConstraintImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

ProcessAllocationConstraint::~ProcessAllocationConstraint()
{
}

// Attributes

// References

::amalthea::Process_ptr ProcessAllocationConstraint::getProcess() const
{
    return m_process;
}

void ProcessAllocationConstraint::setProcess(::amalthea::Process_ptr _process)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::Process_ptr _old_process = m_process;
#endif
    m_process = _process;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getProcessAllocationConstraint__process(), _old_process, m_process);
        eNotify(&notification);
    }
#endif
}

