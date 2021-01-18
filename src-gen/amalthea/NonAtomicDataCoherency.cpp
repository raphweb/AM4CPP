// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/NonAtomicDataCoherency.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "NonAtomicDataCoherency.hpp"
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(NonAtomicDataCoherency.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
NonAtomicDataCoherency::NonAtomicDataCoherency() : m_enabled(false)
{

    /*PROTECTED REGION ID(NonAtomicDataCoherencyImpl__NonAtomicDataCoherencyImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

NonAtomicDataCoherency::~NonAtomicDataCoherency()
{
}

// Attributes

::ecore::EBoolean NonAtomicDataCoherency::isEnabled() const
{
    return m_enabled;
}

void NonAtomicDataCoherency::setEnabled(::ecore::EBoolean _enabled)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EBoolean _old_enabled = m_enabled;
#endif
    m_enabled = _enabled;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getNonAtomicDataCoherency__enabled(), _old_enabled, m_enabled);
        eNotify(&notification);
    }
#endif
}

::ecore::EString const& NonAtomicDataCoherency::getAlgorithm() const
{
    return m_algorithm;
}

void NonAtomicDataCoherency::setAlgorithm(::ecore::EString const &_algorithm)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EString _old_algorithm = m_algorithm;
#endif
    m_algorithm = _algorithm;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getNonAtomicDataCoherency__algorithm(), _old_algorithm, m_algorithm);
        eNotify(&notification);
    }
#endif
}

::amalthea::AccessMultiplicity NonAtomicDataCoherency::getAccessMultiplicity() const
{
    return m_accessMultiplicity;
}

void NonAtomicDataCoherency::setAccessMultiplicity(
        ::amalthea::AccessMultiplicity _accessMultiplicity)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::AccessMultiplicity _old_accessMultiplicity = m_accessMultiplicity;
#endif
    m_accessMultiplicity = _accessMultiplicity;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getNonAtomicDataCoherency__accessMultiplicity(), _old_accessMultiplicity, m_accessMultiplicity);
        eNotify(&notification);
    }
#endif
}

// References

