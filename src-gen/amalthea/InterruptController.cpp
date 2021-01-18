// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/InterruptController.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "InterruptController.hpp"
#include <amalthea/Scheduler.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/ComputationItem.hpp>
#include <amalthea/SchedulerAllocation.hpp>
#include <amalthea/RunnableAllocation.hpp>
#include <amalthea/InterruptSchedulingAlgorithm.hpp>
#include <amalthea/ISRAllocation.hpp>
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

/*PROTECTED REGION ID(InterruptController.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
InterruptController::InterruptController() : m_schedulingAlgorithm(0)
{

    m_isrAllocations.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::amalthea::ISRAllocation_ptr, -1, false, false >(this,
                    ::amalthea::AmaltheaPackage::_instance()->getInterruptController__isrAllocations()));

    /*PROTECTED REGION ID(InterruptControllerImpl__InterruptControllerImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

InterruptController::~InterruptController()
{
    if (m_schedulingAlgorithm)
    {
        m_schedulingAlgorithm.reset();
    }
}

// Attributes

// References

::amalthea::InterruptSchedulingAlgorithm_ptr InterruptController::getSchedulingAlgorithm() const
{
    return m_schedulingAlgorithm;
}

void InterruptController::setSchedulingAlgorithm(
        ::amalthea::InterruptSchedulingAlgorithm_ptr _schedulingAlgorithm)
{
    if (m_schedulingAlgorithm)
        m_schedulingAlgorithm->_setEContainer(InterruptController_ptr(),
                ::amalthea::AmaltheaPackage::_instance()->getInterruptController__schedulingAlgorithm());
    if (_schedulingAlgorithm)
        _schedulingAlgorithm->_setEContainer(_this(),
                ::amalthea::AmaltheaPackage::_instance()->getInterruptController__schedulingAlgorithm());

#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::InterruptSchedulingAlgorithm_ptr _old_schedulingAlgorithm = m_schedulingAlgorithm;
#endif
    m_schedulingAlgorithm = _schedulingAlgorithm;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getInterruptController__schedulingAlgorithm(), _old_schedulingAlgorithm, m_schedulingAlgorithm);
        eNotify(&notification);
    }
#endif
}

const ::ecorecpp::mapping::EList< ::amalthea::ISRAllocation_ptr >& InterruptController::getIsrAllocations() const
{
    return *m_isrAllocations;
}

::ecorecpp::mapping::EList< ::amalthea::ISRAllocation_ptr >& InterruptController::getIsrAllocations()
{
    return *m_isrAllocations;
}

