// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/ReferenceObject.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "ReferenceObject.hpp"
#include <amalthea/Value.hpp>
#include <amalthea/IReferable.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(ReferenceObject.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
ReferenceObject::ReferenceObject() : m_value(0)
{

    /*PROTECTED REGION ID(ReferenceObjectImpl__ReferenceObjectImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

ReferenceObject::~ReferenceObject()
{
}

// Attributes

// References

::amalthea::IReferable_ptr ReferenceObject::getValue() const
{
    return m_value;
}

void ReferenceObject::setValue(::amalthea::IReferable_ptr _value)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::IReferable_ptr _old_value = m_value;
#endif
    m_value = _value;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getReferenceObject__value(), _old_value, m_value);
        eNotify(&notification);
    }
#endif
}

