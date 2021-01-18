// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/VendorOperatingSystem.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "VendorOperatingSystem.hpp"
#include <amalthea/OperatingSystem.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/OsOverhead.hpp>
#include <amalthea/TaskScheduler.hpp>
#include <amalthea/InterruptController.hpp>
#include <amalthea/OsDataConsistency.hpp>
#include <amalthea/INamed.hpp>
#include <amalthea/Namespace.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(VendorOperatingSystem.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
VendorOperatingSystem::VendorOperatingSystem()
{

    /*PROTECTED REGION ID(VendorOperatingSystemImpl__VendorOperatingSystemImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

VendorOperatingSystem::~VendorOperatingSystem()
{
}

// Attributes

::ecore::EString const& VendorOperatingSystem::getOsName() const
{
    return m_osName;
}

void VendorOperatingSystem::setOsName(::ecore::EString const &_osName)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EString _old_osName = m_osName;
#endif
    m_osName = _osName;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getVendorOperatingSystem__osName(), _old_osName, m_osName);
        eNotify(&notification);
    }
#endif
}

::ecore::EString const& VendorOperatingSystem::getVendor() const
{
    return m_vendor;
}

void VendorOperatingSystem::setVendor(::ecore::EString const &_vendor)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EString _old_vendor = m_vendor;
#endif
    m_vendor = _vendor;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getVendorOperatingSystem__vendor(), _old_vendor, m_vendor);
        eNotify(&notification);
    }
#endif
}

::ecore::EString const& VendorOperatingSystem::getVersion() const
{
    return m_version;
}

void VendorOperatingSystem::setVersion(::ecore::EString const &_version)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EString _old_version = m_version;
#endif
    m_version = _version;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getVendorOperatingSystem__version(), _old_version, m_version);
        eNotify(&notification);
    }
#endif
}

// References

