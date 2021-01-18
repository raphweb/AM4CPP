// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/TargetMemory.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "TargetMemory.hpp"
#include <amalthea/DataConstraintTarget.hpp>
#include <amalthea/BaseObject.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Memory.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(TargetMemory.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
TargetMemory::TargetMemory()
{

    m_memories.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl< ::amalthea::Memory_ptr,
                    -1, false, false >(this,
                    ::amalthea::AmaltheaPackage::_instance()->getTargetMemory__memories()));

    /*PROTECTED REGION ID(TargetMemoryImpl__TargetMemoryImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

TargetMemory::~TargetMemory()
{
}

// Attributes

// References

const ::ecorecpp::mapping::EList< ::amalthea::Memory_ptr >& TargetMemory::getMemories() const
{
    return *m_memories;
}

::ecorecpp::mapping::EList< ::amalthea::Memory_ptr >& TargetMemory::getMemories()
{
    return *m_memories;
}

