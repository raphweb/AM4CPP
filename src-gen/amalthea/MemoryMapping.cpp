// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/MemoryMapping.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "MemoryMapping.hpp"
#include <amalthea/BaseObject.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/AbstractMemoryElement.hpp>
#include <amalthea/Memory.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(MemoryMapping.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
MemoryMapping::MemoryMapping() : m_memoryPositionAddress(0), m_abstractElement(
        0), m_memory(0)
{

    /*PROTECTED REGION ID(MemoryMappingImpl__MemoryMappingImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

MemoryMapping::~MemoryMapping()
{
}

// Attributes

::amalthea::Address MemoryMapping::getMemoryPositionAddress() const
{
    return m_memoryPositionAddress;
}

void MemoryMapping::setMemoryPositionAddress(
        ::amalthea::Address _memoryPositionAddress)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::Address _old_memoryPositionAddress = m_memoryPositionAddress;
#endif
    m_memoryPositionAddress = _memoryPositionAddress;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getMemoryMapping__memoryPositionAddress(), _old_memoryPositionAddress, m_memoryPositionAddress);
        eNotify(&notification);
    }
#endif
}

// References

::amalthea::AbstractMemoryElement_ptr MemoryMapping::getAbstractElement() const
{
    return m_abstractElement;
}

void MemoryMapping::setAbstractElement(
        ::amalthea::AbstractMemoryElement_ptr _abstractElement)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::AbstractMemoryElement_ptr _old_abstractElement = m_abstractElement;
#endif
    m_abstractElement = _abstractElement;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getMemoryMapping__abstractElement(), _old_abstractElement, m_abstractElement);
        eNotify(&notification);
    }
#endif
}

::amalthea::Memory_ptr MemoryMapping::getMemory() const
{
    return m_memory;
}

void MemoryMapping::setMemory(::amalthea::Memory_ptr _memory)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::Memory_ptr _old_memory = m_memory;
#endif
    m_memory = _memory;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getMemoryMapping__memory(), _old_memory, m_memory);
        eNotify(&notification);
    }
#endif
}

