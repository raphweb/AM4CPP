// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/ComponentInstance.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "ComponentInstance.hpp"
#include <amalthea/ReferableBaseObject.hpp>
#include <amalthea/ITaggable.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Tag.hpp>
#include <amalthea/ISystem.hpp>
#include <amalthea/Component.hpp>
#include <amalthea/INamed.hpp>
#include <amalthea/Namespace.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(ComponentInstance.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
ComponentInstance::ComponentInstance() : m_containingSystem(0), m_type(0)
{

    /*PROTECTED REGION ID(ComponentInstanceImpl__ComponentInstanceImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

ComponentInstance::~ComponentInstance()
{
}

// Attributes

// References

::amalthea::ISystem_ptr ComponentInstance::getContainingSystem() const
{
    return m_containingSystem;
}

::amalthea::ISystem_ptr ComponentInstance::basicgetContainingSystem()
{
    return m_containingSystem;
}

void ComponentInstance::basicsetContainingSystem(
        ::amalthea::ISystem_ptr _containingSystem)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::ISystem_ptr _old_containingSystem = m_containingSystem;
#endif
    m_containingSystem = _containingSystem;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getComponentInstance__containingSystem(), _old_containingSystem, m_containingSystem);
        eNotify(&notification);
    }
#endif
}

void ComponentInstance::setContainingSystem(
        ::amalthea::ISystem_ptr _containingSystem)
{
    if (_containingSystem != m_containingSystem)
    {
        ::ecore::EJavaObject _this = ::ecore::EObject::_this();
        if (m_containingSystem != nullptr)
        {
            m_containingSystem->_inverseRemove(
                    ::amalthea::AmaltheaPackage::ISYSTEM__COMPONENTINSTANCES,
                    _this);
        }
        if (_containingSystem != nullptr)
        {
            _containingSystem->_inverseAdd(
                    ::amalthea::AmaltheaPackage::ISYSTEM__COMPONENTINSTANCES,
                    _this);
        }
        basicsetContainingSystem(_containingSystem);
    }
}

::amalthea::Component_ptr ComponentInstance::getType() const
{
    return m_type;
}

void ComponentInstance::setType(::amalthea::Component_ptr _type)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::Component_ptr _old_type = m_type;
#endif
    m_type = _type;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getComponentInstance__type(), _old_type, m_type);
        eNotify(&notification);
    }
#endif
}

