// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/ModeLiteral.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "ModeLiteral.hpp"
#include <amalthea/ReferableBaseObject.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/EnumMode.hpp>
#include <amalthea/INamed.hpp>
#include <amalthea/Namespace.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(ModeLiteral.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
ModeLiteral::ModeLiteral() : m_containingMode(0)
{

    /*PROTECTED REGION ID(ModeLiteralImpl__ModeLiteralImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

ModeLiteral::~ModeLiteral()
{
}

// Attributes

// References

::amalthea::EnumMode_ptr ModeLiteral::getContainingMode() const
{
    return m_containingMode;
}

::amalthea::EnumMode_ptr ModeLiteral::basicgetContainingMode()
{
    return m_containingMode;
}

void ModeLiteral::basicsetContainingMode(
        ::amalthea::EnumMode_ptr _containingMode)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::EnumMode_ptr _old_containingMode = m_containingMode;
#endif
    m_containingMode = _containingMode;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getModeLiteral__containingMode(), _old_containingMode, m_containingMode);
        eNotify(&notification);
    }
#endif
}

void ModeLiteral::setContainingMode(::amalthea::EnumMode_ptr _containingMode)
{
    if (_containingMode != m_containingMode)
    {
        ::ecore::EJavaObject _this = ::ecore::EObject::_this();
        if (m_containingMode != nullptr)
        {
            m_containingMode->_inverseRemove(
                    ::amalthea::AmaltheaPackage::ENUMMODE__LITERALS, _this);
        }
        if (_containingMode != nullptr)
        {
            _containingMode->_inverseAdd(
                    ::amalthea::AmaltheaPackage::ENUMMODE__LITERALS, _this);
        }
        basicsetContainingMode(_containingMode);
    }
}

