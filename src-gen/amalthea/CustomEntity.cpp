// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/CustomEntity.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "CustomEntity.hpp"
#include <amalthea/AbstractMemoryElement.hpp>
#include <amalthea/IDescription.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Tag.hpp>
#include <amalthea/DataSize.hpp>
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

/*PROTECTED REGION ID(CustomEntity.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
CustomEntity::CustomEntity()
{

    /*PROTECTED REGION ID(CustomEntityImpl__CustomEntityImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

CustomEntity::~CustomEntity()
{
}

// Attributes

::ecore::EString const& CustomEntity::getTypeName() const
{
    return m_typeName;
}

void CustomEntity::setTypeName(::ecore::EString const &_typeName)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EString _old_typeName = m_typeName;
#endif
    m_typeName = _typeName;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getCustomEntity__typeName(), _old_typeName, m_typeName);
        eNotify(&notification);
    }
#endif
}

// References

