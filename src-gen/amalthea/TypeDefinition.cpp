// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/TypeDefinition.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "TypeDefinition.hpp"
#include <amalthea/ReferableBaseObject.hpp>
#include <amalthea/INamespaceMember.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Namespace.hpp>
#include <amalthea/DataSize.hpp>
#include <amalthea/INamed.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(TypeDefinition.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
TypeDefinition::TypeDefinition() : m_size(0)
{

    /*PROTECTED REGION ID(TypeDefinitionImpl__TypeDefinitionImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

TypeDefinition::~TypeDefinition()
{
    if (m_size)
    {
        m_size.reset();
    }
}

// Attributes

// References

::amalthea::DataSize_ptr TypeDefinition::getSize() const
{
    return m_size;
}

void TypeDefinition::setSize(::amalthea::DataSize_ptr _size)
{
    if (m_size)
        m_size->_setEContainer(TypeDefinition_ptr(),
                ::amalthea::AmaltheaPackage::_instance()->getTypeDefinition__size());
    if (_size)
        _size->_setEContainer(_this(),
                ::amalthea::AmaltheaPackage::_instance()->getTypeDefinition__size());

#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::DataSize_ptr _old_size = m_size;
#endif
    m_size = _size;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getTypeDefinition__size(), _old_size, m_size);
        eNotify(&notification);
    }
#endif
}

