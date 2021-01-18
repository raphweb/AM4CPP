// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/Scheduler.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "Scheduler.hpp"
#include <amalthea/ReferableBaseObject.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/ComputationItem.hpp>
#include <amalthea/SchedulerAllocation.hpp>
#include <amalthea/RunnableAllocation.hpp>
#include <amalthea/INamed.hpp>
#include <amalthea/Namespace.hpp>
#include <amalthea/Algorithm.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(Scheduler.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
Scheduler::Scheduler()
{

    m_computationItems.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::amalthea::ComputationItem_ptr, -1, true, false >(this,
                    ::amalthea::AmaltheaPackage::_instance()->getScheduler__computationItems()));
    m_schedulerAllocations.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::amalthea::SchedulerAllocation_ptr, -1, false, false >(
                    this,
                    ::amalthea::AmaltheaPackage::_instance()->getScheduler__schedulerAllocations()));
    m_runnableAllocations.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::amalthea::RunnableAllocation_ptr, -1, false, false >(this,
                    ::amalthea::AmaltheaPackage::_instance()->getScheduler__runnableAllocations()));

    /*PROTECTED REGION ID(SchedulerImpl__SchedulerImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

Scheduler::~Scheduler()
{
}

// Attributes

// References

const ::ecorecpp::mapping::EList< ::amalthea::ComputationItem_ptr >& Scheduler::getComputationItems() const
{
    return *m_computationItems;
}

::ecorecpp::mapping::EList< ::amalthea::ComputationItem_ptr >& Scheduler::getComputationItems()
{
    return *m_computationItems;
}

const ::ecorecpp::mapping::EList< ::amalthea::SchedulerAllocation_ptr >& Scheduler::getSchedulerAllocations() const
{
    return *m_schedulerAllocations;
}

::ecorecpp::mapping::EList< ::amalthea::SchedulerAllocation_ptr >& Scheduler::getSchedulerAllocations()
{
    return *m_schedulerAllocations;
}

const ::ecorecpp::mapping::EList< ::amalthea::RunnableAllocation_ptr >& Scheduler::getRunnableAllocations() const
{
    return *m_runnableAllocations;
}

::ecorecpp::mapping::EList< ::amalthea::RunnableAllocation_ptr >& Scheduler::getRunnableAllocations()
{
    return *m_runnableAllocations;
}

