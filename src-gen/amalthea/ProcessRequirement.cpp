// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/ProcessRequirement.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "ProcessRequirement.hpp"
#include <amalthea/Requirement.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/RequirementLimit.hpp>
#include <amalthea/AbstractProcess.hpp>
#include <amalthea/INamed.hpp>
#include <amalthea/Namespace.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(ProcessRequirement.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
ProcessRequirement::ProcessRequirement() : m_process(0)
{

    /*PROTECTED REGION ID(ProcessRequirementImpl__ProcessRequirementImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

ProcessRequirement::~ProcessRequirement()
{
}

// Attributes

// References

::amalthea::AbstractProcess_ptr ProcessRequirement::getProcess() const
{
    return m_process;
}

void ProcessRequirement::setProcess(::amalthea::AbstractProcess_ptr _process)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::AbstractProcess_ptr _old_process = m_process;
#endif
    m_process = _process;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getProcessRequirement__process(), _old_process, m_process);
        eNotify(&notification);
    }
#endif
}

