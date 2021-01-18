// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/EventChainSynchronizationConstraint.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "EventChainSynchronizationConstraint.hpp"
#include <amalthea/SynchronizationConstraint.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Time.hpp>
#include <amalthea/EventChain.hpp>
#include <amalthea/INamed.hpp>
#include <amalthea/Namespace.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(EventChainSynchronizationConstraint.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
EventChainSynchronizationConstraint::EventChainSynchronizationConstraint()
{

    m_scope.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::amalthea::EventChain_ptr, 2, false, false >(this,
                    ::amalthea::AmaltheaPackage::_instance()->getEventChainSynchronizationConstraint__scope()));

    /*PROTECTED REGION ID(EventChainSynchronizationConstraintImpl__EventChainSynchronizationConstraintImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

EventChainSynchronizationConstraint::~EventChainSynchronizationConstraint()
{
}

// Attributes

::amalthea::SynchronizationType EventChainSynchronizationConstraint::getType() const
{
    return m_type;
}

void EventChainSynchronizationConstraint::setType(
        ::amalthea::SynchronizationType _type)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::SynchronizationType _old_type = m_type;
#endif
    m_type = _type;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getEventChainSynchronizationConstraint__type(), _old_type, m_type);
        eNotify(&notification);
    }
#endif
}

// References

const ::ecorecpp::mapping::EList< ::amalthea::EventChain_ptr >& EventChainSynchronizationConstraint::getScope() const
{
    return *m_scope;
}

::ecorecpp::mapping::EList< ::amalthea::EventChain_ptr >& EventChainSynchronizationConstraint::getScope()
{
    return *m_scope;
}

