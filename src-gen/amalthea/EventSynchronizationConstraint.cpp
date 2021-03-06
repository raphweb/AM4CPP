// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/EventSynchronizationConstraint.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "EventSynchronizationConstraint.hpp"
#include <amalthea/SynchronizationConstraint.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Time.hpp>
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

/*PROTECTED REGION ID(EventSynchronizationConstraint.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
EventSynchronizationConstraint::EventSynchronizationConstraint()
{

    m_events.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::amalthea::EntityEvent_ptr, -1, false, false >(this,
                    ::amalthea::AmaltheaPackage::_instance()->getEventSynchronizationConstraint__events()));

    /*PROTECTED REGION ID(EventSynchronizationConstraintImpl__EventSynchronizationConstraintImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

EventSynchronizationConstraint::~EventSynchronizationConstraint()
{
}

// Attributes

// References

const ::ecorecpp::mapping::EList< ::amalthea::EntityEvent_ptr >& EventSynchronizationConstraint::getEvents() const
{
    return *m_events;
}

::ecorecpp::mapping::EList< ::amalthea::EntityEvent_ptr >& EventSynchronizationConstraint::getEvents()
{
    return *m_events;
}

