// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/HwPath.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "HwPath.hpp"
#include <amalthea/ProcessingUnit.hpp>
#include <amalthea/HwDestination.hpp>
#include <amalthea/HwAccessElement.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(HwPath.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
HwPath::HwPath() : m_source(0), m_destination(0)
{

    /*PROTECTED REGION ID(HwPathImpl__HwPathImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

HwPath::~HwPath()
{
}

// Attributes

// References

::amalthea::ProcessingUnit_ptr HwPath::getSource() const
{
    return m_source;
}

void HwPath::setSource(::amalthea::ProcessingUnit_ptr _source)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::ProcessingUnit_ptr _old_source = m_source;
#endif
    m_source = _source;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getHwPath__source(), _old_source, m_source);
        eNotify(&notification);
    }
#endif
}

::amalthea::HwDestination_ptr HwPath::getDestination() const
{
    return m_destination;
}

void HwPath::setDestination(::amalthea::HwDestination_ptr _destination)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::HwDestination_ptr _old_destination = m_destination;
#endif
    m_destination = _destination;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getHwPath__destination(), _old_destination, m_destination);
        eNotify(&notification);
    }
#endif
}

