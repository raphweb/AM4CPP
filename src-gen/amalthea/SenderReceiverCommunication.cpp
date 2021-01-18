// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/SenderReceiverCommunication.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "SenderReceiverCommunication.hpp"
#include <amalthea/ActivityGraphItem.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Process.hpp>
#include <amalthea/Runnable.hpp>
#include <amalthea/ActivityGraph.hpp>
#include <amalthea/Label.hpp>
#include <amalthea/ComponentPort.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(SenderReceiverCommunication.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
SenderReceiverCommunication::SenderReceiverCommunication() : m_buffered(false), m_label(
        0), m_port(0)
{

    /*PROTECTED REGION ID(SenderReceiverCommunicationImpl__SenderReceiverCommunicationImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

SenderReceiverCommunication::~SenderReceiverCommunication()
{
}

// Attributes

::ecore::EBoolean SenderReceiverCommunication::isBuffered() const
{
    return m_buffered;
}

void SenderReceiverCommunication::setBuffered(::ecore::EBoolean _buffered)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EBoolean _old_buffered = m_buffered;
#endif
    m_buffered = _buffered;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getSenderReceiverCommunication__buffered(), _old_buffered, m_buffered);
        eNotify(&notification);
    }
#endif
}

// References

::amalthea::Label_ptr SenderReceiverCommunication::getLabel() const
{
    return m_label;
}

void SenderReceiverCommunication::setLabel(::amalthea::Label_ptr _label)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::Label_ptr _old_label = m_label;
#endif
    m_label = _label;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getSenderReceiverCommunication__label(), _old_label, m_label);
        eNotify(&notification);
    }
#endif
}

::amalthea::ComponentPort_ptr SenderReceiverCommunication::getPort() const
{
    return m_port;
}

void SenderReceiverCommunication::setPort(::amalthea::ComponentPort_ptr _port)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::ComponentPort_ptr _old_port = m_port;
#endif
    m_port = _port;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getSenderReceiverCommunication__port(), _old_port, m_port);
        eNotify(&notification);
    }
#endif
}

