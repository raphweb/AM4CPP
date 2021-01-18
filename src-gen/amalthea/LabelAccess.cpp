// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/LabelAccess.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "LabelAccess.hpp"
#include <amalthea/ComputationItem.hpp>
#include <amalthea/ITaggable.hpp>
#include <amalthea/IDependsOn.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Process.hpp>
#include <amalthea/Runnable.hpp>
#include <amalthea/ActivityGraph.hpp>
#include <amalthea/Tag.hpp>
#include <amalthea/DataDependency.hpp>
#include <amalthea/Label.hpp>
#include <amalthea/LabelAccessStatistic.hpp>
#include <amalthea/TransmissionPolicy.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(LabelAccess.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
LabelAccess::LabelAccess() : m_data(0), m_statistic(0), m_transmissionPolicy(0)
{

    /*PROTECTED REGION ID(LabelAccessImpl__LabelAccessImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

LabelAccess::~LabelAccess()
{
    if (m_statistic)
    {
        m_statistic.reset();
    }
    if (m_transmissionPolicy)
    {
        m_transmissionPolicy.reset();
    }
}

// Attributes

::amalthea::LabelAccessEnum LabelAccess::getAccess() const
{
    return m_access;
}

void LabelAccess::setAccess(::amalthea::LabelAccessEnum _access)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::LabelAccessEnum _old_access = m_access;
#endif
    m_access = _access;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getLabelAccess__access(), _old_access, m_access);
        eNotify(&notification);
    }
#endif
}

::amalthea::LabelAccessDataStability LabelAccess::getDataStability() const
{
    return m_dataStability;
}

void LabelAccess::setDataStability(
        ::amalthea::LabelAccessDataStability _dataStability)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::LabelAccessDataStability _old_dataStability = m_dataStability;
#endif
    m_dataStability = _dataStability;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getLabelAccess__dataStability(), _old_dataStability, m_dataStability);
        eNotify(&notification);
    }
#endif
}

::amalthea::LabelAccessImplementation LabelAccess::getImplementation() const
{
    return m_implementation;
}

void LabelAccess::setImplementation(
        ::amalthea::LabelAccessImplementation _implementation)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::LabelAccessImplementation _old_implementation = m_implementation;
#endif
    m_implementation = _implementation;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getLabelAccess__implementation(), _old_implementation, m_implementation);
        eNotify(&notification);
    }
#endif
}

// References

::amalthea::Label_ptr LabelAccess::getData() const
{
    return m_data;
}

void LabelAccess::setData(::amalthea::Label_ptr _data)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::Label_ptr _old_data = m_data;
#endif
    m_data = _data;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getLabelAccess__data(), _old_data, m_data);
        eNotify(&notification);
    }
#endif
}

::amalthea::LabelAccessStatistic_ptr LabelAccess::getStatistic() const
{
    return m_statistic;
}

void LabelAccess::setStatistic(::amalthea::LabelAccessStatistic_ptr _statistic)
{
    if (m_statistic)
        m_statistic->_setEContainer(LabelAccess_ptr(),
                ::amalthea::AmaltheaPackage::_instance()->getLabelAccess__statistic());
    if (_statistic)
        _statistic->_setEContainer(_this(),
                ::amalthea::AmaltheaPackage::_instance()->getLabelAccess__statistic());

#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::LabelAccessStatistic_ptr _old_statistic = m_statistic;
#endif
    m_statistic = _statistic;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getLabelAccess__statistic(), _old_statistic, m_statistic);
        eNotify(&notification);
    }
#endif
}

::amalthea::TransmissionPolicy_ptr LabelAccess::getTransmissionPolicy() const
{
    return m_transmissionPolicy;
}

void LabelAccess::setTransmissionPolicy(
        ::amalthea::TransmissionPolicy_ptr _transmissionPolicy)
{
    if (m_transmissionPolicy)
        m_transmissionPolicy->_setEContainer(LabelAccess_ptr(),
                ::amalthea::AmaltheaPackage::_instance()->getLabelAccess__transmissionPolicy());
    if (_transmissionPolicy)
        _transmissionPolicy->_setEContainer(_this(),
                ::amalthea::AmaltheaPackage::_instance()->getLabelAccess__transmissionPolicy());

#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::TransmissionPolicy_ptr _old_transmissionPolicy = m_transmissionPolicy;
#endif
    m_transmissionPolicy = _transmissionPolicy;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getLabelAccess__transmissionPolicy(), _old_transmissionPolicy, m_transmissionPolicy);
        eNotify(&notification);
    }
#endif
}

