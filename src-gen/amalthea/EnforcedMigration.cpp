// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/EnforcedMigration.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "EnforcedMigration.hpp"
#include <amalthea/ActivityGraphItem.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Process.hpp>
#include <amalthea/Runnable.hpp>
#include <amalthea/ActivityGraph.hpp>
#include <amalthea/TaskScheduler.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(EnforcedMigration.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
EnforcedMigration::EnforcedMigration() : m_resourceOwner(0)
{

    /*PROTECTED REGION ID(EnforcedMigrationImpl__EnforcedMigrationImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

EnforcedMigration::~EnforcedMigration()
{
}

// Attributes

// References

::amalthea::TaskScheduler_ptr EnforcedMigration::getResourceOwner() const
{
    return m_resourceOwner;
}

void EnforcedMigration::setResourceOwner(
        ::amalthea::TaskScheduler_ptr _resourceOwner)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::TaskScheduler_ptr _old_resourceOwner = m_resourceOwner;
#endif
    m_resourceOwner = _resourceOwner;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getEnforcedMigration__resourceOwner(), _old_resourceOwner, m_resourceOwner);
        eNotify(&notification);
    }
#endif
}

