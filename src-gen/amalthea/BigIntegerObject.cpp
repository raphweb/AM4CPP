// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/BigIntegerObject.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "BigIntegerObject.hpp"
#include <amalthea/Value.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(BigIntegerObject.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
BigIntegerObject::BigIntegerObject() : m_value(0)
{

    /*PROTECTED REGION ID(BigIntegerObjectImpl__BigIntegerObjectImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

BigIntegerObject::~BigIntegerObject()
{
}

// Attributes

::ecore::EBigInteger BigIntegerObject::getValue() const
{
    return m_value;
}

void BigIntegerObject::setValue(::ecore::EBigInteger _value)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EBigInteger _old_value = m_value;
#endif
    m_value = _value;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getBigIntegerObject__value(), _old_value, m_value);
        eNotify(&notification);
    }
#endif
}

// References

