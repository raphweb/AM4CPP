// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/ProcessChain.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "ProcessChain.hpp"
#include <amalthea/ReferableBaseObject.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Process.hpp>
#include <amalthea/INamed.hpp>
#include <amalthea/Namespace.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(ProcessChain.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
ProcessChain::ProcessChain()
{

    m_processes.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::amalthea::Process_ptr, -1, false, false >(this,
                    ::amalthea::AmaltheaPackage::_instance()->getProcessChain__processes()));

    /*PROTECTED REGION ID(ProcessChainImpl__ProcessChainImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

ProcessChain::~ProcessChain()
{
}

// Attributes

// References

const ::ecorecpp::mapping::EList< ::amalthea::Process_ptr >& ProcessChain::getProcesses() const
{
    return *m_processes;
}

::ecorecpp::mapping::EList< ::amalthea::Process_ptr >& ProcessChain::getProcesses()
{
    return *m_processes;
}

