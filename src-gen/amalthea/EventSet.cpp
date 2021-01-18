// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/EventSet.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "EventSet.hpp"
#include <amalthea/Event.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Tag.hpp>
#include <amalthea/EntityEvent.hpp>
#include <amalthea/INamed.hpp>
#include <amalthea/Namespace.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(EventSet.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
EventSet::EventSet()
{

    m_events.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::amalthea::EntityEvent_ptr, -1, false, false >(this,
                    ::amalthea::AmaltheaPackage::_instance()->getEventSet__events()));

    /*PROTECTED REGION ID(EventSetImpl__EventSetImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

EventSet::~EventSet()
{
}

// Attributes

// References

const ::ecorecpp::mapping::EList< ::amalthea::EntityEvent_ptr >& EventSet::getEvents() const
{
    return *m_events;
}

::ecorecpp::mapping::EList< ::amalthea::EntityEvent_ptr >& EventSet::getEvents()
{
    return *m_events;
}

