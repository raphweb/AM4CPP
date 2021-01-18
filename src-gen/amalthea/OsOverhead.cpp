// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/OsOverhead.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "OsOverhead.hpp"
#include <amalthea/ReferableBaseObject.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/OsAPIOverhead.hpp>
#include <amalthea/OsISROverhead.hpp>
#include <amalthea/INamed.hpp>
#include <amalthea/Namespace.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(OsOverhead.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
OsOverhead::OsOverhead() : m_apiOverhead(0), m_isrCategory1Overhead(0), m_isrCategory2Overhead(
        0)
{

    /*PROTECTED REGION ID(OsOverheadImpl__OsOverheadImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

OsOverhead::~OsOverhead()
{
    if (m_apiOverhead)
    {
        m_apiOverhead.reset();
    }
    if (m_isrCategory1Overhead)
    {
        m_isrCategory1Overhead.reset();
    }
    if (m_isrCategory2Overhead)
    {
        m_isrCategory2Overhead.reset();
    }
}

// Attributes

// References

::amalthea::OsAPIOverhead_ptr OsOverhead::getApiOverhead() const
{
    return m_apiOverhead;
}

void OsOverhead::setApiOverhead(::amalthea::OsAPIOverhead_ptr _apiOverhead)
{
    if (m_apiOverhead)
        m_apiOverhead->_setEContainer(OsOverhead_ptr(),
                ::amalthea::AmaltheaPackage::_instance()->getOsOverhead__apiOverhead());
    if (_apiOverhead)
        _apiOverhead->_setEContainer(_this(),
                ::amalthea::AmaltheaPackage::_instance()->getOsOverhead__apiOverhead());

#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::OsAPIOverhead_ptr _old_apiOverhead = m_apiOverhead;
#endif
    m_apiOverhead = _apiOverhead;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getOsOverhead__apiOverhead(), _old_apiOverhead, m_apiOverhead);
        eNotify(&notification);
    }
#endif
}

::amalthea::OsISROverhead_ptr OsOverhead::getIsrCategory1Overhead() const
{
    return m_isrCategory1Overhead;
}

void OsOverhead::setIsrCategory1Overhead(
        ::amalthea::OsISROverhead_ptr _isrCategory1Overhead)
{
    if (m_isrCategory1Overhead)
        m_isrCategory1Overhead->_setEContainer(OsOverhead_ptr(),
                ::amalthea::AmaltheaPackage::_instance()->getOsOverhead__isrCategory1Overhead());
    if (_isrCategory1Overhead)
        _isrCategory1Overhead->_setEContainer(_this(),
                ::amalthea::AmaltheaPackage::_instance()->getOsOverhead__isrCategory1Overhead());

#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::OsISROverhead_ptr _old_isrCategory1Overhead = m_isrCategory1Overhead;
#endif
    m_isrCategory1Overhead = _isrCategory1Overhead;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getOsOverhead__isrCategory1Overhead(), _old_isrCategory1Overhead, m_isrCategory1Overhead);
        eNotify(&notification);
    }
#endif
}

::amalthea::OsISROverhead_ptr OsOverhead::getIsrCategory2Overhead() const
{
    return m_isrCategory2Overhead;
}

void OsOverhead::setIsrCategory2Overhead(
        ::amalthea::OsISROverhead_ptr _isrCategory2Overhead)
{
    if (m_isrCategory2Overhead)
        m_isrCategory2Overhead->_setEContainer(OsOverhead_ptr(),
                ::amalthea::AmaltheaPackage::_instance()->getOsOverhead__isrCategory2Overhead());
    if (_isrCategory2Overhead)
        _isrCategory2Overhead->_setEContainer(_this(),
                ::amalthea::AmaltheaPackage::_instance()->getOsOverhead__isrCategory2Overhead());

#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::OsISROverhead_ptr _old_isrCategory2Overhead = m_isrCategory2Overhead;
#endif
    m_isrCategory2Overhead = _isrCategory2Overhead;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getOsOverhead__isrCategory2Overhead(), _old_isrCategory2Overhead, m_isrCategory2Overhead);
        eNotify(&notification);
    }
#endif
}

