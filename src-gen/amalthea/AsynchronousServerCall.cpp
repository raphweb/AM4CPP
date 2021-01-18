// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/AsynchronousServerCall.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "AsynchronousServerCall.hpp"
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

/*PROTECTED REGION ID(AsynchronousServerCall.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
AsynchronousServerCall::AsynchronousServerCall() : m_resultRunnable(0)
{

    /*PROTECTED REGION ID(AsynchronousServerCallImpl__AsynchronousServerCallImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

AsynchronousServerCall::~AsynchronousServerCall()
{
}

// Attributes

// References

::amalthea::Runnable_ptr AsynchronousServerCall::getResultRunnable() const
{
    return m_resultRunnable;
}

void AsynchronousServerCall::setResultRunnable(
        ::amalthea::Runnable_ptr _resultRunnable)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::Runnable_ptr _old_resultRunnable = m_resultRunnable;
#endif
    m_resultRunnable = _resultRunnable;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getAsynchronousServerCall__resultRunnable(), _old_resultRunnable, m_resultRunnable);
        eNotify(&notification);
    }
#endif
}

