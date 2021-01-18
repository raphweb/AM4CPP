// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/RunnableAllocationConstraint.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "RunnableAllocationConstraint.hpp"
#include <amalthea/CoreAllocationConstraint.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/CoreClassification.hpp>
#include <amalthea/Runnable.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(RunnableAllocationConstraint.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
RunnableAllocationConstraint::RunnableAllocationConstraint() : m_runnable(0)
{

    /*PROTECTED REGION ID(RunnableAllocationConstraintImpl__RunnableAllocationConstraintImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

RunnableAllocationConstraint::~RunnableAllocationConstraint()
{
}

// Attributes

// References

::amalthea::Runnable_ptr RunnableAllocationConstraint::getRunnable() const
{
    return m_runnable;
}

void RunnableAllocationConstraint::setRunnable(
        ::amalthea::Runnable_ptr _runnable)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::Runnable_ptr _old_runnable = m_runnable;
#endif
    m_runnable = _runnable;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getRunnableAllocationConstraint__runnable(), _old_runnable, m_runnable);
        eNotify(&notification);
    }
#endif
}

