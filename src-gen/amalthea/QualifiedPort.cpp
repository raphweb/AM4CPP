// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/QualifiedPort.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "QualifiedPort.hpp"
#include <amalthea/BaseObject.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/ComponentInstance.hpp>
#include <amalthea/ComponentPort.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(QualifiedPort.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
QualifiedPort::QualifiedPort() : m_instance(0), m_port(0)
{

    /*PROTECTED REGION ID(QualifiedPortImpl__QualifiedPortImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

QualifiedPort::~QualifiedPort()
{
}

// Attributes

// References

::amalthea::ComponentInstance_ptr QualifiedPort::getInstance() const
{
    return m_instance;
}

void QualifiedPort::setInstance(::amalthea::ComponentInstance_ptr _instance)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::ComponentInstance_ptr _old_instance = m_instance;
#endif
    m_instance = _instance;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getQualifiedPort__instance(), _old_instance, m_instance);
        eNotify(&notification);
    }
#endif
}

::amalthea::ComponentPort_ptr QualifiedPort::getPort() const
{
    return m_port;
}

void QualifiedPort::setPort(::amalthea::ComponentPort_ptr _port)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::ComponentPort_ptr _old_port = m_port;
#endif
    m_port = _port;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getQualifiedPort__port(), _old_port, m_port);
        eNotify(&notification);
    }
#endif
}

