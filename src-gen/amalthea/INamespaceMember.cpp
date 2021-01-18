// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/INamespaceMember.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "INamespaceMember.hpp"
#include <amalthea/Namespace.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(INamespaceMember.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
INamespaceMember::INamespaceMember() : m_namespace(0)
{

    /*PROTECTED REGION ID(INamespaceMemberImpl__INamespaceMemberImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

INamespaceMember::~INamespaceMember()
{
}

// Attributes

// References

::amalthea::Namespace_ptr INamespaceMember::getNamespace() const
{
    return m_namespace;
}

void INamespaceMember::setNamespace(::amalthea::Namespace_ptr _namespace)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::Namespace_ptr _old_namespace = m_namespace;
#endif
    m_namespace = _namespace;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getINamespaceMember__namespace(), _old_namespace, m_namespace);
        eNotify(&notification);
    }
#endif
}

