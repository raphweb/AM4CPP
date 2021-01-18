// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/SynchronizationConstraint.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "SynchronizationConstraint.hpp"
#include <amalthea/TimingConstraint.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Time.hpp>
#include <amalthea/INamed.hpp>
#include <amalthea/Namespace.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(SynchronizationConstraint.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
SynchronizationConstraint::SynchronizationConstraint() : m_multipleOccurrencesAllowed(
        false), m_tolerance(0)
{

    /*PROTECTED REGION ID(SynchronizationConstraintImpl__SynchronizationConstraintImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

SynchronizationConstraint::~SynchronizationConstraint()
{
    if (m_tolerance)
    {
        m_tolerance.reset();
    }
}

// Attributes

::ecore::EBoolean SynchronizationConstraint::isMultipleOccurrencesAllowed() const
{
    return m_multipleOccurrencesAllowed;
}

void SynchronizationConstraint::setMultipleOccurrencesAllowed(
        ::ecore::EBoolean _multipleOccurrencesAllowed)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EBoolean _old_multipleOccurrencesAllowed = m_multipleOccurrencesAllowed;
#endif
    m_multipleOccurrencesAllowed = _multipleOccurrencesAllowed;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getSynchronizationConstraint__multipleOccurrencesAllowed(), _old_multipleOccurrencesAllowed, m_multipleOccurrencesAllowed);
        eNotify(&notification);
    }
#endif
}

// References

::amalthea::Time_ptr SynchronizationConstraint::getTolerance() const
{
    return m_tolerance;
}

void SynchronizationConstraint::setTolerance(::amalthea::Time_ptr _tolerance)
{
    if (m_tolerance)
        m_tolerance->_setEContainer(SynchronizationConstraint_ptr(),
                ::amalthea::AmaltheaPackage::_instance()->getSynchronizationConstraint__tolerance());
    if (_tolerance)
        _tolerance->_setEContainer(_this(),
                ::amalthea::AmaltheaPackage::_instance()->getSynchronizationConstraint__tolerance());

#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::Time_ptr _old_tolerance = m_tolerance;
#endif
    m_tolerance = _tolerance;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getSynchronizationConstraint__tolerance(), _old_tolerance, m_tolerance);
        eNotify(&notification);
    }
#endif
}

