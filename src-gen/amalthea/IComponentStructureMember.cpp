// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/IComponentStructureMember.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "IComponentStructureMember.hpp"
#include <amalthea/ComponentStructure.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(IComponentStructureMember.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
IComponentStructureMember::IComponentStructureMember() : m_structure(0)
{

    /*PROTECTED REGION ID(IComponentStructureMemberImpl__IComponentStructureMemberImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

IComponentStructureMember::~IComponentStructureMember()
{
}

// Attributes

// References

::amalthea::ComponentStructure_ptr IComponentStructureMember::getStructure() const
{
    return m_structure;
}

void IComponentStructureMember::setStructure(
        ::amalthea::ComponentStructure_ptr _structure)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::ComponentStructure_ptr _old_structure = m_structure;
#endif
    m_structure = _structure;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getIComponentStructureMember__structure(), _old_structure, m_structure);
        eNotify(&notification);
    }
#endif
}

