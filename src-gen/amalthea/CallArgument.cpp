// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/CallArgument.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "CallArgument.hpp"
#include <amalthea/ReferableObject.hpp>
#include <amalthea/IDependsOn.hpp>
#include <amalthea/DataDependency.hpp>
#include <amalthea/RunnableCall.hpp>
#include <amalthea/RunnableParameter.hpp>
#include <amalthea/INamed.hpp>
#include <amalthea/Namespace.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(CallArgument.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
CallArgument::CallArgument() : m_containingCall(0), m_parameter(0)
{

    /*PROTECTED REGION ID(CallArgumentImpl__CallArgumentImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

CallArgument::~CallArgument()
{
}

// Attributes

// References

::amalthea::RunnableCall_ptr CallArgument::getContainingCall() const
{
    return m_containingCall;
}

::amalthea::RunnableCall_ptr CallArgument::basicgetContainingCall()
{
    return m_containingCall;
}

void CallArgument::basicsetContainingCall(
        ::amalthea::RunnableCall_ptr _containingCall)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::RunnableCall_ptr _old_containingCall = m_containingCall;
#endif
    m_containingCall = _containingCall;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getCallArgument__containingCall(), _old_containingCall, m_containingCall);
        eNotify(&notification);
    }
#endif
}

void CallArgument::setContainingCall(
        ::amalthea::RunnableCall_ptr _containingCall)
{
    if (_containingCall != m_containingCall)
    {
        ::ecore::EJavaObject _this = ::ecore::EObject::_this();
        if (m_containingCall != nullptr)
        {
            m_containingCall->_inverseRemove(
                    ::amalthea::AmaltheaPackage::RUNNABLECALL__ARGUMENTS,
                    _this);
        }
        if (_containingCall != nullptr)
        {
            _containingCall->_inverseAdd(
                    ::amalthea::AmaltheaPackage::RUNNABLECALL__ARGUMENTS,
                    _this);
        }
        basicsetContainingCall(_containingCall);
    }
}

::amalthea::RunnableParameter_ptr CallArgument::getParameter() const
{
    return m_parameter;
}

void CallArgument::setParameter(::amalthea::RunnableParameter_ptr _parameter)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::RunnableParameter_ptr _old_parameter = m_parameter;
#endif
    m_parameter = _parameter;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getCallArgument__parameter(), _old_parameter, m_parameter);
        eNotify(&notification);
    }
#endif
}

