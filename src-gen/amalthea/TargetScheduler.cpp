// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/TargetScheduler.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "TargetScheduler.hpp"
#include <amalthea/RunnableConstraintTarget.hpp>
#include <amalthea/ProcessConstraintTarget.hpp>
#include <amalthea/BaseObject.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Scheduler.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(TargetScheduler.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
TargetScheduler::TargetScheduler()
{

    m_schedulers.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::amalthea::Scheduler_ptr, -1, false, false >(this,
                    ::amalthea::AmaltheaPackage::_instance()->getTargetScheduler__schedulers()));

    /*PROTECTED REGION ID(TargetSchedulerImpl__TargetSchedulerImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

TargetScheduler::~TargetScheduler()
{
}

// Attributes

// References

const ::ecorecpp::mapping::EList< ::amalthea::Scheduler_ptr >& TargetScheduler::getSchedulers() const
{
    return *m_schedulers;
}

::ecorecpp::mapping::EList< ::amalthea::Scheduler_ptr >& TargetScheduler::getSchedulers()
{
    return *m_schedulers;
}

