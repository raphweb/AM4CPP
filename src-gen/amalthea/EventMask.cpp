// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/EventMask.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "EventMask.hpp"
#include <amalthea/BaseObject.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/OsEvent.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(EventMask.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
EventMask::EventMask()
{

    m_events.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::amalthea::OsEvent_ptr, -1, false, false >(this,
                    ::amalthea::AmaltheaPackage::_instance()->getEventMask__events()));

    /*PROTECTED REGION ID(EventMaskImpl__EventMaskImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

EventMask::~EventMask()
{
}

// Attributes

// References

const ::ecorecpp::mapping::EList< ::amalthea::OsEvent_ptr >& EventMask::getEvents() const
{
    return *m_events;
}

::ecorecpp::mapping::EList< ::amalthea::OsEvent_ptr >& EventMask::getEvents()
{
    return *m_events;
}

