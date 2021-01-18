// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/ComponentScope.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "ComponentScope.hpp"
#include <amalthea/DataGroupScope.hpp>
#include <amalthea/Component.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(ComponentScope.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
ComponentScope::ComponentScope() : m_component(0)
{

    /*PROTECTED REGION ID(ComponentScopeImpl__ComponentScopeImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

ComponentScope::~ComponentScope()
{
}

// Attributes

// References

::amalthea::Component_ptr ComponentScope::getComponent() const
{
    return m_component;
}

void ComponentScope::setComponent(::amalthea::Component_ptr _component)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::Component_ptr _old_component = m_component;
#endif
    m_component = _component;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getComponentScope__component(), _old_component, m_component);
        eNotify(&notification);
    }
#endif
}

