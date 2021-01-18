// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/IDependsOn.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "IDependsOn.hpp"
#include <amalthea/DataDependency.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(IDependsOn.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
IDependsOn::IDependsOn() : m_dependsOn(0)
{

    /*PROTECTED REGION ID(IDependsOnImpl__IDependsOnImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

IDependsOn::~IDependsOn()
{
    if (m_dependsOn)
    {
        m_dependsOn.reset();
    }
}

// Attributes

// References

::amalthea::DataDependency_ptr IDependsOn::getDependsOn() const
{
    return m_dependsOn;
}

void IDependsOn::setDependsOn(::amalthea::DataDependency_ptr _dependsOn)
{
    if (m_dependsOn)
        m_dependsOn->_setEContainer(IDependsOn_ptr(),
                ::amalthea::AmaltheaPackage::_instance()->getIDependsOn__dependsOn());
    if (_dependsOn)
        _dependsOn->_setEContainer(_this(),
                ::amalthea::AmaltheaPackage::_instance()->getIDependsOn__dependsOn());

#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::DataDependency_ptr _old_dependsOn = m_dependsOn;
#endif
    m_dependsOn = _dependsOn;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getIDependsOn__dependsOn(), _old_dependsOn, m_dependsOn);
        eNotify(&notification);
    }
#endif
}

