// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/ServerCall.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "ServerCall.hpp"
#include <amalthea/ActivityGraphItem.hpp>
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

/*PROTECTED REGION ID(ServerCall.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
ServerCall::ServerCall() : m_serverRunnable(0), m_port(0)
{

    /*PROTECTED REGION ID(ServerCallImpl__ServerCallImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

ServerCall::~ServerCall()
{
}

// Attributes

// References

::amalthea::Runnable_ptr ServerCall::getServerRunnable() const
{
    return m_serverRunnable;
}

void ServerCall::setServerRunnable(::amalthea::Runnable_ptr _serverRunnable)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::Runnable_ptr _old_serverRunnable = m_serverRunnable;
#endif
    m_serverRunnable = _serverRunnable;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getServerCall__serverRunnable(), _old_serverRunnable, m_serverRunnable);
        eNotify(&notification);
    }
#endif
}

::amalthea::ComponentPort_ptr ServerCall::getPort() const
{
    return m_port;
}

void ServerCall::setPort(::amalthea::ComponentPort_ptr _port)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::ComponentPort_ptr _old_port = m_port;
#endif
    m_port = _port;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getServerCall__port(), _old_port, m_port);
        eNotify(&notification);
    }
#endif
}

