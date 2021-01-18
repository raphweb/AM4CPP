// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/EventChainContainer.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "EventChainContainer.hpp"
#include <amalthea/BaseObject.hpp>
#include <amalthea/EventChainItem.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/SubEventChain.hpp>
#include <amalthea/AbstractEventChain.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(EventChainContainer.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
EventChainContainer::EventChainContainer() : m_eventChain(0)
{

    /*PROTECTED REGION ID(EventChainContainerImpl__EventChainContainerImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

EventChainContainer::~EventChainContainer()
{
    if (m_eventChain)
    {
        m_eventChain.reset();
    }
}

// Attributes

// References

::amalthea::SubEventChain_ptr EventChainContainer::getEventChain() const
{
    return m_eventChain;
}

void EventChainContainer::setEventChain(
        ::amalthea::SubEventChain_ptr _eventChain)
{
    if (m_eventChain)
        m_eventChain->_setEContainer(EventChainContainer_ptr(),
                ::amalthea::AmaltheaPackage::_instance()->getEventChainContainer__eventChain());
    if (_eventChain)
        _eventChain->_setEContainer(_this(),
                ::amalthea::AmaltheaPackage::_instance()->getEventChainContainer__eventChain());

#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::SubEventChain_ptr _old_eventChain = m_eventChain;
#endif
    m_eventChain = _eventChain;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getEventChainContainer__eventChain(), _old_eventChain, m_eventChain);
        eNotify(&notification);
    }
#endif
}

