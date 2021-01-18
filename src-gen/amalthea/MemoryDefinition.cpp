// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/MemoryDefinition.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "MemoryDefinition.hpp"
#include <amalthea/HwDefinition.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Tag.hpp>
#include <amalthea/DataSize.hpp>
#include <amalthea/IDiscreteValueDeviation.hpp>
#include <amalthea/DataRate.hpp>
#include <amalthea/MemoryClassifier.hpp>
#include <amalthea/INamed.hpp>
#include <amalthea/Namespace.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(MemoryDefinition.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
MemoryDefinition::MemoryDefinition() : m_size(0), m_accessLatency(0), m_dataRate(
        0)
{

    m_classifiers.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::amalthea::MemoryClassifier_ptr, -1, false, false >(this,
                    ::amalthea::AmaltheaPackage::_instance()->getMemoryDefinition__classifiers()));

    /*PROTECTED REGION ID(MemoryDefinitionImpl__MemoryDefinitionImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

MemoryDefinition::~MemoryDefinition()
{
    if (m_size)
    {
        m_size.reset();
    }
    if (m_accessLatency)
    {
        m_accessLatency.reset();
    }
    if (m_dataRate)
    {
        m_dataRate.reset();
    }
}

// Attributes

::amalthea::MemoryType MemoryDefinition::getMemoryType() const
{
    return m_memoryType;
}

void MemoryDefinition::setMemoryType(::amalthea::MemoryType _memoryType)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::MemoryType _old_memoryType = m_memoryType;
#endif
    m_memoryType = _memoryType;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getMemoryDefinition__memoryType(), _old_memoryType, m_memoryType);
        eNotify(&notification);
    }
#endif
}

// References

::amalthea::DataSize_ptr MemoryDefinition::getSize() const
{
    return m_size;
}

void MemoryDefinition::setSize(::amalthea::DataSize_ptr _size)
{
    if (m_size)
        m_size->_setEContainer(MemoryDefinition_ptr(),
                ::amalthea::AmaltheaPackage::_instance()->getMemoryDefinition__size());
    if (_size)
        _size->_setEContainer(_this(),
                ::amalthea::AmaltheaPackage::_instance()->getMemoryDefinition__size());

#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::DataSize_ptr _old_size = m_size;
#endif
    m_size = _size;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getMemoryDefinition__size(), _old_size, m_size);
        eNotify(&notification);
    }
#endif
}

::amalthea::IDiscreteValueDeviation_ptr MemoryDefinition::getAccessLatency() const
{
    return m_accessLatency;
}

void MemoryDefinition::setAccessLatency(
        ::amalthea::IDiscreteValueDeviation_ptr _accessLatency)
{
    if (m_accessLatency)
        m_accessLatency->_setEContainer(MemoryDefinition_ptr(),
                ::amalthea::AmaltheaPackage::_instance()->getMemoryDefinition__accessLatency());
    if (_accessLatency)
        _accessLatency->_setEContainer(_this(),
                ::amalthea::AmaltheaPackage::_instance()->getMemoryDefinition__accessLatency());

#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::IDiscreteValueDeviation_ptr _old_accessLatency = m_accessLatency;
#endif
    m_accessLatency = _accessLatency;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getMemoryDefinition__accessLatency(), _old_accessLatency, m_accessLatency);
        eNotify(&notification);
    }
#endif
}

::amalthea::DataRate_ptr MemoryDefinition::getDataRate() const
{
    return m_dataRate;
}

void MemoryDefinition::setDataRate(::amalthea::DataRate_ptr _dataRate)
{
    if (m_dataRate)
        m_dataRate->_setEContainer(MemoryDefinition_ptr(),
                ::amalthea::AmaltheaPackage::_instance()->getMemoryDefinition__dataRate());
    if (_dataRate)
        _dataRate->_setEContainer(_this(),
                ::amalthea::AmaltheaPackage::_instance()->getMemoryDefinition__dataRate());

#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::DataRate_ptr _old_dataRate = m_dataRate;
#endif
    m_dataRate = _dataRate;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getMemoryDefinition__dataRate(), _old_dataRate, m_dataRate);
        eNotify(&notification);
    }
#endif
}

const ::ecorecpp::mapping::EList< ::amalthea::MemoryClassifier_ptr >& MemoryDefinition::getClassifiers() const
{
    return *m_classifiers;
}

::ecorecpp::mapping::EList< ::amalthea::MemoryClassifier_ptr >& MemoryDefinition::getClassifiers()
{
    return *m_classifiers;
}

