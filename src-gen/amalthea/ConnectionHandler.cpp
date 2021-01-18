// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/ConnectionHandler.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "ConnectionHandler.hpp"
#include <amalthea/HwModule.hpp>
#include <amalthea/HwPathElement.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Tag.hpp>
#include <amalthea/HwPort.hpp>
#include <amalthea/PowerDomain.hpp>
#include <amalthea/FrequencyDomain.hpp>
#include <amalthea/ConnectionHandlerDefinition.hpp>
#include <amalthea/HwConnection.hpp>
#include <amalthea/INamed.hpp>
#include <amalthea/Namespace.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(ConnectionHandler.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
ConnectionHandler::ConnectionHandler() : m_definition(0)
{

    m_internalConnections.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::amalthea::HwConnection_ptr, -1, true, false >(this,
                    ::amalthea::AmaltheaPackage::_instance()->getConnectionHandler__internalConnections()));

    /*PROTECTED REGION ID(ConnectionHandlerImpl__ConnectionHandlerImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

ConnectionHandler::~ConnectionHandler()
{
}

// Attributes

// References

::amalthea::ConnectionHandlerDefinition_ptr ConnectionHandler::getDefinition() const
{
    return m_definition;
}

void ConnectionHandler::setDefinition(
        ::amalthea::ConnectionHandlerDefinition_ptr _definition)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::ConnectionHandlerDefinition_ptr _old_definition = m_definition;
#endif
    m_definition = _definition;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getConnectionHandler__definition(), _old_definition, m_definition);
        eNotify(&notification);
    }
#endif
}

const ::ecorecpp::mapping::EList< ::amalthea::HwConnection_ptr >& ConnectionHandler::getInternalConnections() const
{
    return *m_internalConnections;
}

::ecorecpp::mapping::EList< ::amalthea::HwConnection_ptr >& ConnectionHandler::getInternalConnections()
{
    return *m_internalConnections;
}

