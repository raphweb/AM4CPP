// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/Channel.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "Channel.hpp"
#include <amalthea/AbstractMemoryElement.hpp>
#include <amalthea/IDisplayName.hpp>
#include <amalthea/INamespaceMember.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Tag.hpp>
#include <amalthea/DataSize.hpp>
#include <amalthea/MemoryMapping.hpp>
#include <amalthea/Namespace.hpp>
#include <amalthea/DataType.hpp>
#include <amalthea/ChannelAccess.hpp>
#include <amalthea/INamed.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(Channel.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
Channel::Channel() : m_defaultElements(0), m_maxElements(0), m_elementType(0)
{

    m_channelAccesses.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::amalthea::ChannelAccess_ptr, -1, false, false >(this,
                    ::amalthea::AmaltheaPackage::_instance()->getChannel__channelAccesses()));

    /*PROTECTED REGION ID(ChannelImpl__ChannelImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

Channel::~Channel()
{
    if (m_elementType)
    {
        m_elementType.reset();
    }
}

// Attributes

::ecore::EInt Channel::getDefaultElements() const
{
    return m_defaultElements;
}

void Channel::setDefaultElements(::ecore::EInt _defaultElements)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EInt _old_defaultElements = m_defaultElements;
#endif
    m_defaultElements = _defaultElements;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getChannel__defaultElements(), _old_defaultElements, m_defaultElements);
        eNotify(&notification);
    }
#endif
}

::ecore::EInt Channel::getMaxElements() const
{
    return m_maxElements;
}

void Channel::setMaxElements(::ecore::EInt _maxElements)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EInt _old_maxElements = m_maxElements;
#endif
    m_maxElements = _maxElements;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getChannel__maxElements(), _old_maxElements, m_maxElements);
        eNotify(&notification);
    }
#endif
}

// References

::amalthea::DataType_ptr Channel::getElementType() const
{
    return m_elementType;
}

void Channel::setElementType(::amalthea::DataType_ptr _elementType)
{
    if (m_elementType)
        m_elementType->_setEContainer(Channel_ptr(),
                ::amalthea::AmaltheaPackage::_instance()->getChannel__elementType());
    if (_elementType)
        _elementType->_setEContainer(_this(),
                ::amalthea::AmaltheaPackage::_instance()->getChannel__elementType());

#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::DataType_ptr _old_elementType = m_elementType;
#endif
    m_elementType = _elementType;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getChannel__elementType(), _old_elementType, m_elementType);
        eNotify(&notification);
    }
#endif
}

const ::ecorecpp::mapping::EList< ::amalthea::ChannelAccess_ptr >& Channel::getChannelAccesses() const
{
    return *m_channelAccesses;
}

::ecorecpp::mapping::EList< ::amalthea::ChannelAccess_ptr >& Channel::getChannelAccesses()
{
    return *m_channelAccesses;
}

