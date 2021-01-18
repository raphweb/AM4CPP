// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/AbstractEventChain.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "AbstractEventChain.hpp"
#include <amalthea/BaseObject.hpp>
#include <amalthea/INamed.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Event.hpp>
#include <amalthea/EventChainItem.hpp>
#include <amalthea/Namespace.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(AbstractEventChain.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
AbstractEventChain::AbstractEventChain() : m_minItemsCompleted(1), m_stimulus(
        0), m_response(0)
{

    m_items.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::amalthea::EventChainItem_ptr, -1, true, false >(this,
                    ::amalthea::AmaltheaPackage::_instance()->getAbstractEventChain__items()));

    /*PROTECTED REGION ID(AbstractEventChainImpl__AbstractEventChainImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

AbstractEventChain::~AbstractEventChain()
{
}

// Attributes

::amalthea::EventChainItemType AbstractEventChain::getItemType() const
{
    return m_itemType;
}

void AbstractEventChain::setItemType(::amalthea::EventChainItemType _itemType)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::EventChainItemType _old_itemType = m_itemType;
#endif
    m_itemType = _itemType;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getAbstractEventChain__itemType(), _old_itemType, m_itemType);
        eNotify(&notification);
    }
#endif
}

::amalthea::PositiveInt AbstractEventChain::getMinItemsCompleted() const
{
    return m_minItemsCompleted;
}

void AbstractEventChain::setMinItemsCompleted(
        ::amalthea::PositiveInt _minItemsCompleted)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::PositiveInt _old_minItemsCompleted = m_minItemsCompleted;
#endif
    m_minItemsCompleted = _minItemsCompleted;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getAbstractEventChain__minItemsCompleted(), _old_minItemsCompleted, m_minItemsCompleted);
        eNotify(&notification);
    }
#endif
}

// References

::amalthea::Event_ptr AbstractEventChain::getStimulus() const
{
    return m_stimulus;
}

void AbstractEventChain::setStimulus(::amalthea::Event_ptr _stimulus)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::Event_ptr _old_stimulus = m_stimulus;
#endif
    m_stimulus = _stimulus;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getAbstractEventChain__stimulus(), _old_stimulus, m_stimulus);
        eNotify(&notification);
    }
#endif
}

::amalthea::Event_ptr AbstractEventChain::getResponse() const
{
    return m_response;
}

void AbstractEventChain::setResponse(::amalthea::Event_ptr _response)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::Event_ptr _old_response = m_response;
#endif
    m_response = _response;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getAbstractEventChain__response(), _old_response, m_response);
        eNotify(&notification);
    }
#endif
}

const ::ecorecpp::mapping::EList< ::amalthea::EventChainItem_ptr >& AbstractEventChain::getItems() const
{
    return *m_items;
}

::ecorecpp::mapping::EList< ::amalthea::EventChainItem_ptr >& AbstractEventChain::getItems()
{
    return *m_items;
}

