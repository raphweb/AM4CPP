// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/OsEvent.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "OsEvent.hpp"
#include <amalthea/ReferableBaseObject.hpp>
#include <amalthea/ITaggable.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Tag.hpp>
#include <amalthea/Component.hpp>
#include <amalthea/INamed.hpp>
#include <amalthea/Namespace.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(OsEvent.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
OsEvent::OsEvent() : m_communicationOverheadInBit(0)
{

    m_referringComponents.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::amalthea::Component_ptr, -1, false, false >(this,
                    ::amalthea::AmaltheaPackage::_instance()->getOsEvent__referringComponents()));

    /*PROTECTED REGION ID(OsEventImpl__OsEventImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

OsEvent::~OsEvent()
{
}

// Attributes

::ecore::EInt OsEvent::getCommunicationOverheadInBit() const
{
    return m_communicationOverheadInBit;
}

void OsEvent::setCommunicationOverheadInBit(
        ::ecore::EInt _communicationOverheadInBit)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EInt _old_communicationOverheadInBit = m_communicationOverheadInBit;
#endif
    m_communicationOverheadInBit = _communicationOverheadInBit;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getOsEvent__communicationOverheadInBit(), _old_communicationOverheadInBit, m_communicationOverheadInBit);
        eNotify(&notification);
    }
#endif
}

// References

const ::ecorecpp::mapping::EList< ::amalthea::Component_ptr >& OsEvent::getReferringComponents() const
{
    return *m_referringComponents;
}

::ecorecpp::mapping::EList< ::amalthea::Component_ptr >& OsEvent::getReferringComponents()
{
    return *m_referringComponents;
}

