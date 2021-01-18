// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/EventModel.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "EventModel.hpp"
#include <amalthea/BaseObject.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Event.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(EventModel.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
EventModel::EventModel()
{

    m_events.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl< ::amalthea::Event_ptr,
                    -1, true, false >(this,
                    ::amalthea::AmaltheaPackage::_instance()->getEventModel__events()));

    /*PROTECTED REGION ID(EventModelImpl__EventModelImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

EventModel::~EventModel()
{
}

// Attributes

// References

const ::ecorecpp::mapping::EList< ::amalthea::Event_ptr >& EventModel::getEvents() const
{
    return *m_events;
}

::ecorecpp::mapping::EList< ::amalthea::Event_ptr >& EventModel::getEvents()
{
    return *m_events;
}

