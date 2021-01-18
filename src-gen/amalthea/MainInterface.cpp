// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/MainInterface.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "MainInterface.hpp"
#include <amalthea/ComponentInterface.hpp>
#include <amalthea/INamespaceMember.hpp>
#include <amalthea/IComponentStructureMember.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Tag.hpp>
#include <amalthea/TypeDefinition.hpp>
#include <amalthea/SubInterface.hpp>
#include <amalthea/Namespace.hpp>
#include <amalthea/ComponentStructure.hpp>
#include <amalthea/INamed.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(MainInterface.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
MainInterface::MainInterface() : m_version("1.0")
{

    /*PROTECTED REGION ID(MainInterfaceImpl__MainInterfaceImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

MainInterface::~MainInterface()
{
}

// Attributes

::ecore::EString const& MainInterface::getVersion() const
{
    return m_version;
}

void MainInterface::setVersion(::ecore::EString const &_version)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EString _old_version = m_version;
#endif
    m_version = _version;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getMainInterface__version(), _old_version, m_version);
        eNotify(&notification);
    }
#endif
}

// References

