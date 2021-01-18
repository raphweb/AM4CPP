// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/OsISROverhead.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "OsISROverhead.hpp"
#include <amalthea/BaseObject.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Ticks.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(OsISROverhead.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
OsISROverhead::OsISROverhead() : m_preExecutionOverhead(0), m_postExecutionOverhead(
        0)
{

    /*PROTECTED REGION ID(OsISROverheadImpl__OsISROverheadImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

OsISROverhead::~OsISROverhead()
{
    if (m_preExecutionOverhead)
    {
        m_preExecutionOverhead.reset();
    }
    if (m_postExecutionOverhead)
    {
        m_postExecutionOverhead.reset();
    }
}

// Attributes

// References

::amalthea::Ticks_ptr OsISROverhead::getPreExecutionOverhead() const
{
    return m_preExecutionOverhead;
}

void OsISROverhead::setPreExecutionOverhead(
        ::amalthea::Ticks_ptr _preExecutionOverhead)
{
    if (m_preExecutionOverhead)
        m_preExecutionOverhead->_setEContainer(OsISROverhead_ptr(),
                ::amalthea::AmaltheaPackage::_instance()->getOsISROverhead__preExecutionOverhead());
    if (_preExecutionOverhead)
        _preExecutionOverhead->_setEContainer(_this(),
                ::amalthea::AmaltheaPackage::_instance()->getOsISROverhead__preExecutionOverhead());

#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::Ticks_ptr _old_preExecutionOverhead = m_preExecutionOverhead;
#endif
    m_preExecutionOverhead = _preExecutionOverhead;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getOsISROverhead__preExecutionOverhead(), _old_preExecutionOverhead, m_preExecutionOverhead);
        eNotify(&notification);
    }
#endif
}

::amalthea::Ticks_ptr OsISROverhead::getPostExecutionOverhead() const
{
    return m_postExecutionOverhead;
}

void OsISROverhead::setPostExecutionOverhead(
        ::amalthea::Ticks_ptr _postExecutionOverhead)
{
    if (m_postExecutionOverhead)
        m_postExecutionOverhead->_setEContainer(OsISROverhead_ptr(),
                ::amalthea::AmaltheaPackage::_instance()->getOsISROverhead__postExecutionOverhead());
    if (_postExecutionOverhead)
        _postExecutionOverhead->_setEContainer(_this(),
                ::amalthea::AmaltheaPackage::_instance()->getOsISROverhead__postExecutionOverhead());

#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::Ticks_ptr _old_postExecutionOverhead = m_postExecutionOverhead;
#endif
    m_postExecutionOverhead = _postExecutionOverhead;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getOsISROverhead__postExecutionOverhead(), _old_postExecutionOverhead, m_postExecutionOverhead);
        eNotify(&notification);
    }
#endif
}

