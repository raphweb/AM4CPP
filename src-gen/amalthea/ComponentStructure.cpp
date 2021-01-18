// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/ComponentStructure.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "ComponentStructure.hpp"
#include <amalthea/ReferableObject.hpp>
#include <amalthea/ComponentStructure.hpp>
#include <amalthea/IComponentStructureMember.hpp>
#include <amalthea/INamed.hpp>
#include <amalthea/Namespace.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(ComponentStructure.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
ComponentStructure::ComponentStructure() : m_structureType("")
{

    m_subStructures.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::amalthea::ComponentStructure_ptr, -1, true, false >(this,
                    ::amalthea::AmaltheaPackage::_instance()->getComponentStructure__subStructures()));
    m_memberObjects.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::amalthea::IComponentStructureMember_ptr, -1, false, false >(
                    this,
                    ::amalthea::AmaltheaPackage::_instance()->getComponentStructure__memberObjects()));

    /*PROTECTED REGION ID(ComponentStructureImpl__ComponentStructureImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

ComponentStructure::~ComponentStructure()
{
}

// Attributes

::ecore::EString const& ComponentStructure::getStructureType() const
{
    return m_structureType;
}

void ComponentStructure::setStructureType(
        ::ecore::EString const &_structureType)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EString _old_structureType = m_structureType;
#endif
    m_structureType = _structureType;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getComponentStructure__structureType(), _old_structureType, m_structureType);
        eNotify(&notification);
    }
#endif
}

// References

const ::ecorecpp::mapping::EList< ::amalthea::ComponentStructure_ptr >& ComponentStructure::getSubStructures() const
{
    return *m_subStructures;
}

::ecorecpp::mapping::EList< ::amalthea::ComponentStructure_ptr >& ComponentStructure::getSubStructures()
{
    return *m_subStructures;
}

const ::ecorecpp::mapping::EList< ::amalthea::IComponentStructureMember_ptr >& ComponentStructure::getMemberObjects() const
{
    return *m_memberObjects;
}

::ecorecpp::mapping::EList< ::amalthea::IComponentStructureMember_ptr >& ComponentStructure::getMemberObjects()
{
    return *m_memberObjects;
}

