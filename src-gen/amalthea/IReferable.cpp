// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/IReferable.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "IReferable.hpp"
#include <amalthea/INamed.hpp>
#include <amalthea/Namespace.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(IReferable.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
IReferable::IReferable()
{

    /*PROTECTED REGION ID(IReferableImpl__IReferableImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

IReferable::~IReferable()
{
}

// Attributes

::ecore::EString const& IReferable::getUniqueName() const
{
    return m_uniqueName;
}

void IReferable::setUniqueName(::ecore::EString const &_uniqueName)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EString _old_uniqueName = m_uniqueName;
#endif
    m_uniqueName = _uniqueName;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getIReferable__uniqueName(), _old_uniqueName, m_uniqueName);
        eNotify(&notification);
    }
#endif
}

// References

