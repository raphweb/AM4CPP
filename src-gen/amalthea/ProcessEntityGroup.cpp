// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/ProcessEntityGroup.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "ProcessEntityGroup.hpp"
#include <amalthea/ProcessGroup.hpp>
#include <amalthea/BaseObject.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Process.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(ProcessEntityGroup.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
ProcessEntityGroup::ProcessEntityGroup()
{

    m_processes.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::amalthea::Process_ptr, -1, false, false >(this,
                    ::amalthea::AmaltheaPackage::_instance()->getProcessEntityGroup__processes()));

    /*PROTECTED REGION ID(ProcessEntityGroupImpl__ProcessEntityGroupImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

ProcessEntityGroup::~ProcessEntityGroup()
{
}

// Attributes

// References

const ::ecorecpp::mapping::EList< ::amalthea::Process_ptr >& ProcessEntityGroup::getProcesses() const
{
    return *m_processes;
}

::ecorecpp::mapping::EList< ::amalthea::Process_ptr >& ProcessEntityGroup::getProcesses()
{
    return *m_processes;
}

