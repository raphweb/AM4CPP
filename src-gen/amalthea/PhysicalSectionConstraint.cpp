// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/PhysicalSectionConstraint.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "PhysicalSectionConstraint.hpp"
#include <amalthea/ReferableBaseObject.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Section.hpp>
#include <amalthea/Memory.hpp>
#include <amalthea/INamed.hpp>
#include <amalthea/Namespace.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(PhysicalSectionConstraint.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
PhysicalSectionConstraint::PhysicalSectionConstraint() : m_section(0)
{

    m_memories.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl< ::amalthea::Memory_ptr,
                    -1, false, false >(this,
                    ::amalthea::AmaltheaPackage::_instance()->getPhysicalSectionConstraint__memories()));

    /*PROTECTED REGION ID(PhysicalSectionConstraintImpl__PhysicalSectionConstraintImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

PhysicalSectionConstraint::~PhysicalSectionConstraint()
{
}

// Attributes

// References

::amalthea::Section_ptr PhysicalSectionConstraint::getSection() const
{
    return m_section;
}

void PhysicalSectionConstraint::setSection(::amalthea::Section_ptr _section)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::Section_ptr _old_section = m_section;
#endif
    m_section = _section;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getPhysicalSectionConstraint__section(), _old_section, m_section);
        eNotify(&notification);
    }
#endif
}

const ::ecorecpp::mapping::EList< ::amalthea::Memory_ptr >& PhysicalSectionConstraint::getMemories() const
{
    return *m_memories;
}

::ecorecpp::mapping::EList< ::amalthea::Memory_ptr >& PhysicalSectionConstraint::getMemories()
{
    return *m_memories;
}

