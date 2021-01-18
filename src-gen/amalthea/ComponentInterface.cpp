// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/ComponentInterface.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "ComponentInterface.hpp"
#include <amalthea/ReferableBaseObject.hpp>
#include <amalthea/ITaggable.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Tag.hpp>
#include <amalthea/TypeDefinition.hpp>
#include <amalthea/SubInterface.hpp>
#include <amalthea/INamed.hpp>
#include <amalthea/Namespace.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(ComponentInterface.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
ComponentInterface::ComponentInterface() : m_datatype(0)
{

    m_subInterfaces.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::amalthea::SubInterface_ptr, -1, true, true >(this,
                    ::amalthea::AmaltheaPackage::_instance()->getComponentInterface__subInterfaces(),
                    ::amalthea::AmaltheaPackage::SUBINTERFACE__CONTAININGINTERFACE));

    /*PROTECTED REGION ID(ComponentInterfaceImpl__ComponentInterfaceImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

ComponentInterface::~ComponentInterface()
{
}

// Attributes

// References

::amalthea::TypeDefinition_ptr ComponentInterface::getDatatype() const
{
    return m_datatype;
}

void ComponentInterface::setDatatype(::amalthea::TypeDefinition_ptr _datatype)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::TypeDefinition_ptr _old_datatype = m_datatype;
#endif
    m_datatype = _datatype;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getComponentInterface__datatype(), _old_datatype, m_datatype);
        eNotify(&notification);
    }
#endif
}

const ::ecorecpp::mapping::EList< ::amalthea::SubInterface_ptr >& ComponentInterface::getSubInterfaces() const
{
    return *m_subInterfaces;
}

::ecorecpp::mapping::EList< ::amalthea::SubInterface_ptr >& ComponentInterface::getSubInterfaces()
{
    return *m_subInterfaces;
}

