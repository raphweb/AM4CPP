// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/SporadicActivation.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "SporadicActivation.hpp"
#include <amalthea/Activation.hpp>
#include <amalthea/IDescription.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Tag.hpp>
#include <amalthea/ITimeDeviation.hpp>
#include <amalthea/INamed.hpp>
#include <amalthea/Namespace.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(SporadicActivation.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
SporadicActivation::SporadicActivation() : m_occurrence(0)
{

    /*PROTECTED REGION ID(SporadicActivationImpl__SporadicActivationImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

SporadicActivation::~SporadicActivation()
{
    if (m_occurrence)
    {
        m_occurrence.reset();
    }
}

// Attributes

// References

::amalthea::ITimeDeviation_ptr SporadicActivation::getOccurrence() const
{
    return m_occurrence;
}

void SporadicActivation::setOccurrence(
        ::amalthea::ITimeDeviation_ptr _occurrence)
{
    if (m_occurrence)
        m_occurrence->_setEContainer(SporadicActivation_ptr(),
                ::amalthea::AmaltheaPackage::_instance()->getSporadicActivation__occurrence());
    if (_occurrence)
        _occurrence->_setEContainer(_this(),
                ::amalthea::AmaltheaPackage::_instance()->getSporadicActivation__occurrence());

#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::ITimeDeviation_ptr _old_occurrence = m_occurrence;
#endif
    m_occurrence = _occurrence;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getSporadicActivation__occurrence(), _old_occurrence, m_occurrence);
        eNotify(&notification);
    }
#endif
}

