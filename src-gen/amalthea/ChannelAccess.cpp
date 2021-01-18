// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/ChannelAccess.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "ChannelAccess.hpp"
#include <amalthea/ActivityGraphItem.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Process.hpp>
#include <amalthea/Runnable.hpp>
#include <amalthea/ActivityGraph.hpp>
#include <amalthea/Channel.hpp>
#include <amalthea/TransmissionPolicy.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(ChannelAccess.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
ChannelAccess::ChannelAccess() : m_elements(0), m_data(0), m_transmissionPolicy(
        0)
{

    /*PROTECTED REGION ID(ChannelAccessImpl__ChannelAccessImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

ChannelAccess::~ChannelAccess()
{
    if (m_transmissionPolicy)
    {
        m_transmissionPolicy.reset();
    }
}

// Attributes

::ecore::EInt ChannelAccess::getElements() const
{
    return m_elements;
}

void ChannelAccess::setElements(::ecore::EInt _elements)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EInt _old_elements = m_elements;
#endif
    m_elements = _elements;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getChannelAccess__elements(), _old_elements, m_elements);
        eNotify(&notification);
    }
#endif
}

// References

::amalthea::Channel_ptr ChannelAccess::getData() const
{
    return m_data;
}

void ChannelAccess::setData(::amalthea::Channel_ptr _data)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::Channel_ptr _old_data = m_data;
#endif
    m_data = _data;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getChannelAccess__data(), _old_data, m_data);
        eNotify(&notification);
    }
#endif
}

::amalthea::TransmissionPolicy_ptr ChannelAccess::getTransmissionPolicy() const
{
    return m_transmissionPolicy;
}

void ChannelAccess::setTransmissionPolicy(
        ::amalthea::TransmissionPolicy_ptr _transmissionPolicy)
{
    if (m_transmissionPolicy)
        m_transmissionPolicy->_setEContainer(ChannelAccess_ptr(),
                ::amalthea::AmaltheaPackage::_instance()->getChannelAccess__transmissionPolicy());
    if (_transmissionPolicy)
        _transmissionPolicy->_setEContainer(_this(),
                ::amalthea::AmaltheaPackage::_instance()->getChannelAccess__transmissionPolicy());

#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::TransmissionPolicy_ptr _old_transmissionPolicy = m_transmissionPolicy;
#endif
    m_transmissionPolicy = _transmissionPolicy;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getChannelAccess__transmissionPolicy(), _old_transmissionPolicy, m_transmissionPolicy);
        eNotify(&notification);
    }
#endif
}

