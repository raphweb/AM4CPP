// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/OsDataConsistency.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "OsDataConsistency.hpp"
#include <amalthea/BaseObject.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/DataStability.hpp>
#include <amalthea/NonAtomicDataCoherency.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(OsDataConsistency.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
OsDataConsistency::OsDataConsistency() : m_dataStability(0), m_nonAtomicDataCoherency(
        0)
{

    /*PROTECTED REGION ID(OsDataConsistencyImpl__OsDataConsistencyImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

OsDataConsistency::~OsDataConsistency()
{
    if (m_dataStability)
    {
        m_dataStability.reset();
    }
    if (m_nonAtomicDataCoherency)
    {
        m_nonAtomicDataCoherency.reset();
    }
}

// Attributes

::amalthea::OsDataConsistencyMode OsDataConsistency::getMode() const
{
    return m_mode;
}

void OsDataConsistency::setMode(::amalthea::OsDataConsistencyMode _mode)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::OsDataConsistencyMode _old_mode = m_mode;
#endif
    m_mode = _mode;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getOsDataConsistency__mode(), _old_mode, m_mode);
        eNotify(&notification);
    }
#endif
}

// References

::amalthea::DataStability_ptr OsDataConsistency::getDataStability() const
{
    return m_dataStability;
}

void OsDataConsistency::setDataStability(
        ::amalthea::DataStability_ptr _dataStability)
{
    if (m_dataStability)
        m_dataStability->_setEContainer(OsDataConsistency_ptr(),
                ::amalthea::AmaltheaPackage::_instance()->getOsDataConsistency__dataStability());
    if (_dataStability)
        _dataStability->_setEContainer(_this(),
                ::amalthea::AmaltheaPackage::_instance()->getOsDataConsistency__dataStability());

#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::DataStability_ptr _old_dataStability = m_dataStability;
#endif
    m_dataStability = _dataStability;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getOsDataConsistency__dataStability(), _old_dataStability, m_dataStability);
        eNotify(&notification);
    }
#endif
}

::amalthea::NonAtomicDataCoherency_ptr OsDataConsistency::getNonAtomicDataCoherency() const
{
    return m_nonAtomicDataCoherency;
}

void OsDataConsistency::setNonAtomicDataCoherency(
        ::amalthea::NonAtomicDataCoherency_ptr _nonAtomicDataCoherency)
{
    if (m_nonAtomicDataCoherency)
        m_nonAtomicDataCoherency->_setEContainer(OsDataConsistency_ptr(),
                ::amalthea::AmaltheaPackage::_instance()->getOsDataConsistency__nonAtomicDataCoherency());
    if (_nonAtomicDataCoherency)
        _nonAtomicDataCoherency->_setEContainer(_this(),
                ::amalthea::AmaltheaPackage::_instance()->getOsDataConsistency__nonAtomicDataCoherency());

#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::NonAtomicDataCoherency_ptr _old_nonAtomicDataCoherency = m_nonAtomicDataCoherency;
#endif
    m_nonAtomicDataCoherency = _nonAtomicDataCoherency;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getOsDataConsistency__nonAtomicDataCoherency(), _old_nonAtomicDataCoherency, m_nonAtomicDataCoherency);
        eNotify(&notification);
    }
#endif
}

