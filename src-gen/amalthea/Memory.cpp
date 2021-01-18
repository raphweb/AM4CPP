// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/Memory.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "Memory.hpp"
#include <amalthea/HwModule.hpp>
#include <amalthea/HwDestination.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Tag.hpp>
#include <amalthea/HwPort.hpp>
#include <amalthea/PowerDomain.hpp>
#include <amalthea/FrequencyDomain.hpp>
#include <amalthea/MemoryDefinition.hpp>
#include <amalthea/MemoryMapping.hpp>
#include <amalthea/INamed.hpp>
#include <amalthea/Namespace.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(Memory.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
Memory::Memory() : m_definition(0)
{

    m_mappings.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::amalthea::MemoryMapping_ptr, -1, false, false >(this,
                    ::amalthea::AmaltheaPackage::_instance()->getMemory__mappings()));

    /*PROTECTED REGION ID(MemoryImpl__MemoryImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

Memory::~Memory()
{
}

// Attributes

// References

::amalthea::MemoryDefinition_ptr Memory::getDefinition() const
{
    return m_definition;
}

void Memory::setDefinition(::amalthea::MemoryDefinition_ptr _definition)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::MemoryDefinition_ptr _old_definition = m_definition;
#endif
    m_definition = _definition;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getMemory__definition(), _old_definition, m_definition);
        eNotify(&notification);
    }
#endif
}

const ::ecorecpp::mapping::EList< ::amalthea::MemoryMapping_ptr >& Memory::getMappings() const
{
    return *m_mappings;
}

::ecorecpp::mapping::EList< ::amalthea::MemoryMapping_ptr >& Memory::getMappings()
{
    return *m_mappings;
}

