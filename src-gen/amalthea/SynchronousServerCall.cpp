// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/SynchronousServerCall.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "SynchronousServerCall.hpp"
#include <amalthea/ServerCall.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Process.hpp>
#include <amalthea/Runnable.hpp>
#include <amalthea/ActivityGraph.hpp>
#include <amalthea/ComponentPort.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(SynchronousServerCall.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
SynchronousServerCall::SynchronousServerCall()
{

    /*PROTECTED REGION ID(SynchronousServerCallImpl__SynchronousServerCallImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

SynchronousServerCall::~SynchronousServerCall()
{
}

// Attributes

::amalthea::WaitingBehaviour SynchronousServerCall::getWaitingBehaviour() const
{
    return m_waitingBehaviour;
}

void SynchronousServerCall::setWaitingBehaviour(
        ::amalthea::WaitingBehaviour _waitingBehaviour)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::WaitingBehaviour _old_waitingBehaviour = m_waitingBehaviour;
#endif
    m_waitingBehaviour = _waitingBehaviour;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getSynchronousServerCall__waitingBehaviour(), _old_waitingBehaviour, m_waitingBehaviour);
        eNotify(&notification);
    }
#endif
}

// References

