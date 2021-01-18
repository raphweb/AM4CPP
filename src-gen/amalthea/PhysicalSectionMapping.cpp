// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/PhysicalSectionMapping.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "PhysicalSectionMapping.hpp"
#include <amalthea/ReferableBaseObject.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Section.hpp>
#include <amalthea/Memory.hpp>
#include <amalthea/Label.hpp>
#include <amalthea/Runnable.hpp>
#include <amalthea/INamed.hpp>
#include <amalthea/Namespace.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(PhysicalSectionMapping.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
PhysicalSectionMapping::PhysicalSectionMapping() : m_startAddress(0), m_endAddress(
        0), m_memory(0)
{

    m_origin.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::amalthea::Section_ptr, -1, false, false >(this,
                    ::amalthea::AmaltheaPackage::_instance()->getPhysicalSectionMapping__origin()));
    m_labels.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl< ::amalthea::Label_ptr,
                    -1, false, false >(this,
                    ::amalthea::AmaltheaPackage::_instance()->getPhysicalSectionMapping__labels()));
    m_runEntities.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::amalthea::Runnable_ptr, -1, false, false >(this,
                    ::amalthea::AmaltheaPackage::_instance()->getPhysicalSectionMapping__runEntities()));

    /*PROTECTED REGION ID(PhysicalSectionMappingImpl__PhysicalSectionMappingImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

PhysicalSectionMapping::~PhysicalSectionMapping()
{
}

// Attributes

::amalthea::Address PhysicalSectionMapping::getStartAddress() const
{
    return m_startAddress;
}

void PhysicalSectionMapping::setStartAddress(::amalthea::Address _startAddress)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::Address _old_startAddress = m_startAddress;
#endif
    m_startAddress = _startAddress;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getPhysicalSectionMapping__startAddress(), _old_startAddress, m_startAddress);
        eNotify(&notification);
    }
#endif
}

::amalthea::Address PhysicalSectionMapping::getEndAddress() const
{
    return m_endAddress;
}

void PhysicalSectionMapping::setEndAddress(::amalthea::Address _endAddress)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::Address _old_endAddress = m_endAddress;
#endif
    m_endAddress = _endAddress;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getPhysicalSectionMapping__endAddress(), _old_endAddress, m_endAddress);
        eNotify(&notification);
    }
#endif
}

// References

const ::ecorecpp::mapping::EList< ::amalthea::Section_ptr >& PhysicalSectionMapping::getOrigin() const
{
    return *m_origin;
}

::ecorecpp::mapping::EList< ::amalthea::Section_ptr >& PhysicalSectionMapping::getOrigin()
{
    return *m_origin;
}

::amalthea::Memory_ptr PhysicalSectionMapping::getMemory() const
{
    return m_memory;
}

void PhysicalSectionMapping::setMemory(::amalthea::Memory_ptr _memory)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::Memory_ptr _old_memory = m_memory;
#endif
    m_memory = _memory;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getPhysicalSectionMapping__memory(), _old_memory, m_memory);
        eNotify(&notification);
    }
#endif
}

const ::ecorecpp::mapping::EList< ::amalthea::Label_ptr >& PhysicalSectionMapping::getLabels() const
{
    return *m_labels;
}

::ecorecpp::mapping::EList< ::amalthea::Label_ptr >& PhysicalSectionMapping::getLabels()
{
    return *m_labels;
}

const ::ecorecpp::mapping::EList< ::amalthea::Runnable_ptr >& PhysicalSectionMapping::getRunEntities() const
{
    return *m_runEntities;
}

::ecorecpp::mapping::EList< ::amalthea::Runnable_ptr >& PhysicalSectionMapping::getRunEntities()
{
    return *m_runEntities;
}

