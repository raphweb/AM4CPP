// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/CacheDefinition.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "CacheDefinition.hpp"
#include <amalthea/HwDefinition.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Tag.hpp>
#include <amalthea/DataSize.hpp>
#include <amalthea/IDiscreteValueDeviation.hpp>
#include <amalthea/INamed.hpp>
#include <amalthea/Namespace.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(CacheDefinition.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
CacheDefinition::CacheDefinition() : m_nWays(0), m_coherency(false), m_exclusive(
        false), m_hitRate(0.0), m_size(0), m_lineSize(0), m_accessLatency(0)
{

    /*PROTECTED REGION ID(CacheDefinitionImpl__CacheDefinitionImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

CacheDefinition::~CacheDefinition()
{
    if (m_size)
    {
        m_size.reset();
    }
    if (m_lineSize)
    {
        m_lineSize.reset();
    }
    if (m_accessLatency)
    {
        m_accessLatency.reset();
    }
}

// Attributes

::amalthea::CacheType CacheDefinition::getCacheType() const
{
    return m_cacheType;
}

void CacheDefinition::setCacheType(::amalthea::CacheType _cacheType)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::CacheType _old_cacheType = m_cacheType;
#endif
    m_cacheType = _cacheType;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getCacheDefinition__cacheType(), _old_cacheType, m_cacheType);
        eNotify(&notification);
    }
#endif
}

::amalthea::WriteStrategy CacheDefinition::getWriteStrategy() const
{
    return m_writeStrategy;
}

void CacheDefinition::setWriteStrategy(::amalthea::WriteStrategy _writeStrategy)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::WriteStrategy _old_writeStrategy = m_writeStrategy;
#endif
    m_writeStrategy = _writeStrategy;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getCacheDefinition__writeStrategy(), _old_writeStrategy, m_writeStrategy);
        eNotify(&notification);
    }
#endif
}

::ecore::EInt CacheDefinition::getNWays() const
{
    return m_nWays;
}

void CacheDefinition::setNWays(::ecore::EInt _nWays)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EInt _old_nWays = m_nWays;
#endif
    m_nWays = _nWays;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getCacheDefinition__nWays(), _old_nWays, m_nWays);
        eNotify(&notification);
    }
#endif
}

::ecore::EBoolean CacheDefinition::isCoherency() const
{
    return m_coherency;
}

void CacheDefinition::setCoherency(::ecore::EBoolean _coherency)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EBoolean _old_coherency = m_coherency;
#endif
    m_coherency = _coherency;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getCacheDefinition__coherency(), _old_coherency, m_coherency);
        eNotify(&notification);
    }
#endif
}

::ecore::EBoolean CacheDefinition::isExclusive() const
{
    return m_exclusive;
}

void CacheDefinition::setExclusive(::ecore::EBoolean _exclusive)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EBoolean _old_exclusive = m_exclusive;
#endif
    m_exclusive = _exclusive;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getCacheDefinition__exclusive(), _old_exclusive, m_exclusive);
        eNotify(&notification);
    }
#endif
}

::ecore::EDouble CacheDefinition::getHitRate() const
{
    return m_hitRate;
}

void CacheDefinition::setHitRate(::ecore::EDouble _hitRate)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EDouble _old_hitRate = m_hitRate;
#endif
    m_hitRate = _hitRate;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getCacheDefinition__hitRate(), _old_hitRate, m_hitRate);
        eNotify(&notification);
    }
#endif
}

// References

::amalthea::DataSize_ptr CacheDefinition::getSize() const
{
    return m_size;
}

void CacheDefinition::setSize(::amalthea::DataSize_ptr _size)
{
    if (m_size)
        m_size->_setEContainer(CacheDefinition_ptr(),
                ::amalthea::AmaltheaPackage::_instance()->getCacheDefinition__size());
    if (_size)
        _size->_setEContainer(_this(),
                ::amalthea::AmaltheaPackage::_instance()->getCacheDefinition__size());

#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::DataSize_ptr _old_size = m_size;
#endif
    m_size = _size;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getCacheDefinition__size(), _old_size, m_size);
        eNotify(&notification);
    }
#endif
}

::amalthea::DataSize_ptr CacheDefinition::getLineSize() const
{
    return m_lineSize;
}

void CacheDefinition::setLineSize(::amalthea::DataSize_ptr _lineSize)
{
    if (m_lineSize)
        m_lineSize->_setEContainer(CacheDefinition_ptr(),
                ::amalthea::AmaltheaPackage::_instance()->getCacheDefinition__lineSize());
    if (_lineSize)
        _lineSize->_setEContainer(_this(),
                ::amalthea::AmaltheaPackage::_instance()->getCacheDefinition__lineSize());

#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::DataSize_ptr _old_lineSize = m_lineSize;
#endif
    m_lineSize = _lineSize;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getCacheDefinition__lineSize(), _old_lineSize, m_lineSize);
        eNotify(&notification);
    }
#endif
}

::amalthea::IDiscreteValueDeviation_ptr CacheDefinition::getAccessLatency() const
{
    return m_accessLatency;
}

void CacheDefinition::setAccessLatency(
        ::amalthea::IDiscreteValueDeviation_ptr _accessLatency)
{
    if (m_accessLatency)
        m_accessLatency->_setEContainer(CacheDefinition_ptr(),
                ::amalthea::AmaltheaPackage::_instance()->getCacheDefinition__accessLatency());
    if (_accessLatency)
        _accessLatency->_setEContainer(_this(),
                ::amalthea::AmaltheaPackage::_instance()->getCacheDefinition__accessLatency());

#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::IDiscreteValueDeviation_ptr _old_accessLatency = m_accessLatency;
#endif
    m_accessLatency = _accessLatency;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getCacheDefinition__accessLatency(), _old_accessLatency, m_accessLatency);
        eNotify(&notification);
    }
#endif
}

