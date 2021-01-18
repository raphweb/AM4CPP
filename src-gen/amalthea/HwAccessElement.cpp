// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/HwAccessElement.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "HwAccessElement.hpp"
#include <amalthea/ITaggable.hpp>
#include <amalthea/INamed.hpp>
#include <amalthea/Tag.hpp>
#include <amalthea/ProcessingUnit.hpp>
#include <amalthea/HwDestination.hpp>
#include <amalthea/HwAccessPath.hpp>
#include <amalthea/IDiscreteValueDeviation.hpp>
#include <amalthea/DataRate.hpp>
#include <amalthea/Namespace.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(HwAccessElement.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
HwAccessElement::HwAccessElement() : m_source(0), m_destination(0), m_accessPath(
        0), m_readLatency(0), m_writeLatency(0), m_dataRate(0)
{

    /*PROTECTED REGION ID(HwAccessElementImpl__HwAccessElementImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

HwAccessElement::~HwAccessElement()
{
    if (m_accessPath)
    {
        m_accessPath.reset();
    }
    if (m_readLatency)
    {
        m_readLatency.reset();
    }
    if (m_writeLatency)
    {
        m_writeLatency.reset();
    }
    if (m_dataRate)
    {
        m_dataRate.reset();
    }
}

// Attributes

// References

::amalthea::ProcessingUnit_ptr HwAccessElement::getSource() const
{
    return m_source;
}

::amalthea::ProcessingUnit_ptr HwAccessElement::basicgetSource()
{
    return m_source;
}

void HwAccessElement::basicsetSource(::amalthea::ProcessingUnit_ptr _source)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::ProcessingUnit_ptr _old_source = m_source;
#endif
    m_source = _source;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getHwAccessElement__source(), _old_source, m_source);
        eNotify(&notification);
    }
#endif
}

void HwAccessElement::setSource(::amalthea::ProcessingUnit_ptr _source)
{
    if (_source != m_source)
    {
        ::ecore::EJavaObject _this = ::ecore::EObject::_this();
        if (m_source != nullptr)
        {
            m_source->_inverseRemove(
                    ::amalthea::AmaltheaPackage::PROCESSINGUNIT__ACCESSELEMENTS,
                    _this);
        }
        if (_source != nullptr)
        {
            _source->_inverseAdd(
                    ::amalthea::AmaltheaPackage::PROCESSINGUNIT__ACCESSELEMENTS,
                    _this);
        }
        basicsetSource(_source);
    }
}

::amalthea::HwDestination_ptr HwAccessElement::getDestination() const
{
    return m_destination;
}

void HwAccessElement::setDestination(::amalthea::HwDestination_ptr _destination)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::HwDestination_ptr _old_destination = m_destination;
#endif
    m_destination = _destination;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getHwAccessElement__destination(), _old_destination, m_destination);
        eNotify(&notification);
    }
#endif
}

::amalthea::HwAccessPath_ptr HwAccessElement::getAccessPath() const
{
    return m_accessPath;
}

::amalthea::HwAccessPath_ptr HwAccessElement::basicgetAccessPath()
{
    return m_accessPath;
}

void HwAccessElement::basicsetAccessPath(
        ::amalthea::HwAccessPath_ptr _accessPath)
{
    if (m_accessPath)
        m_accessPath->_setEContainer(HwAccessElement_ptr(),
                ::amalthea::AmaltheaPackage::_instance()->getHwAccessElement__accessPath());
    if (_accessPath)
        _accessPath->_setEContainer(_this(),
                ::amalthea::AmaltheaPackage::_instance()->getHwAccessElement__accessPath());

#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::HwAccessPath_ptr _old_accessPath = m_accessPath;
#endif
    m_accessPath = _accessPath;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getHwAccessElement__accessPath(), _old_accessPath, m_accessPath);
        eNotify(&notification);
    }
#endif
}

void HwAccessElement::setAccessPath(::amalthea::HwAccessPath_ptr _accessPath)
{
    if (_accessPath != m_accessPath)
    {
        ::ecore::EJavaObject _this = ::ecore::EObject::_this();
        if (m_accessPath != nullptr)
        {
            m_accessPath->_inverseRemove(
                    ::amalthea::AmaltheaPackage::HWACCESSPATH__CONTAININGACCESSELEMENT,
                    _this);
        }
        if (_accessPath != nullptr)
        {
            _accessPath->_inverseAdd(
                    ::amalthea::AmaltheaPackage::HWACCESSPATH__CONTAININGACCESSELEMENT,
                    _this);
        }
        basicsetAccessPath(_accessPath);
    }
}

::amalthea::IDiscreteValueDeviation_ptr HwAccessElement::getReadLatency() const
{
    return m_readLatency;
}

void HwAccessElement::setReadLatency(
        ::amalthea::IDiscreteValueDeviation_ptr _readLatency)
{
    if (m_readLatency)
        m_readLatency->_setEContainer(HwAccessElement_ptr(),
                ::amalthea::AmaltheaPackage::_instance()->getHwAccessElement__readLatency());
    if (_readLatency)
        _readLatency->_setEContainer(_this(),
                ::amalthea::AmaltheaPackage::_instance()->getHwAccessElement__readLatency());

#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::IDiscreteValueDeviation_ptr _old_readLatency = m_readLatency;
#endif
    m_readLatency = _readLatency;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getHwAccessElement__readLatency(), _old_readLatency, m_readLatency);
        eNotify(&notification);
    }
#endif
}

::amalthea::IDiscreteValueDeviation_ptr HwAccessElement::getWriteLatency() const
{
    return m_writeLatency;
}

void HwAccessElement::setWriteLatency(
        ::amalthea::IDiscreteValueDeviation_ptr _writeLatency)
{
    if (m_writeLatency)
        m_writeLatency->_setEContainer(HwAccessElement_ptr(),
                ::amalthea::AmaltheaPackage::_instance()->getHwAccessElement__writeLatency());
    if (_writeLatency)
        _writeLatency->_setEContainer(_this(),
                ::amalthea::AmaltheaPackage::_instance()->getHwAccessElement__writeLatency());

#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::IDiscreteValueDeviation_ptr _old_writeLatency = m_writeLatency;
#endif
    m_writeLatency = _writeLatency;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getHwAccessElement__writeLatency(), _old_writeLatency, m_writeLatency);
        eNotify(&notification);
    }
#endif
}

::amalthea::DataRate_ptr HwAccessElement::getDataRate() const
{
    return m_dataRate;
}

void HwAccessElement::setDataRate(::amalthea::DataRate_ptr _dataRate)
{
    if (m_dataRate)
        m_dataRate->_setEContainer(HwAccessElement_ptr(),
                ::amalthea::AmaltheaPackage::_instance()->getHwAccessElement__dataRate());
    if (_dataRate)
        _dataRate->_setEContainer(_this(),
                ::amalthea::AmaltheaPackage::_instance()->getHwAccessElement__dataRate());

#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::DataRate_ptr _old_dataRate = m_dataRate;
#endif
    m_dataRate = _dataRate;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getHwAccessElement__dataRate(), _old_dataRate, m_dataRate);
        eNotify(&notification);
    }
#endif
}

