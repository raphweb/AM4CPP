// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/TypeRef.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "TypeRef.hpp"
#include <amalthea/BaseObject.hpp>
#include <amalthea/DataType.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/TypeDefinition.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(TypeRef.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
TypeRef::TypeRef() : m_typeDef(0)
{

    /*PROTECTED REGION ID(TypeRefImpl__TypeRefImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

TypeRef::~TypeRef()
{
}

// Attributes

// References

::amalthea::TypeDefinition_ptr TypeRef::getTypeDef() const
{
    return m_typeDef;
}

void TypeRef::setTypeDef(::amalthea::TypeDefinition_ptr _typeDef)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::TypeDefinition_ptr _old_typeDef = m_typeDef;
#endif
    m_typeDef = _typeDef;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getTypeRef__typeDef(), _old_typeDef, m_typeDef);
        eNotify(&notification);
    }
#endif
}

