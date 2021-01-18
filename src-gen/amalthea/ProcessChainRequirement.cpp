// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/ProcessChainRequirement.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "ProcessChainRequirement.hpp"
#include <amalthea/Requirement.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/RequirementLimit.hpp>
#include <amalthea/ProcessChain.hpp>
#include <amalthea/INamed.hpp>
#include <amalthea/Namespace.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(ProcessChainRequirement.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
ProcessChainRequirement::ProcessChainRequirement() : m_processChain(0)
{

    /*PROTECTED REGION ID(ProcessChainRequirementImpl__ProcessChainRequirementImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

ProcessChainRequirement::~ProcessChainRequirement()
{
}

// Attributes

// References

::amalthea::ProcessChain_ptr ProcessChainRequirement::getProcessChain() const
{
    return m_processChain;
}

void ProcessChainRequirement::setProcessChain(
        ::amalthea::ProcessChain_ptr _processChain)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::ProcessChain_ptr _old_processChain = m_processChain;
#endif
    m_processChain = _processChain;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getProcessChainRequirement__processChain(), _old_processChain, m_processChain);
        eNotify(&notification);
    }
#endif
}

