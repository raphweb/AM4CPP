// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/TransmissionPolicy.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "TransmissionPolicy.hpp"
#include <amalthea/DataSize.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(TransmissionPolicy.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
TransmissionPolicy::TransmissionPolicy() : m_chunkProcessingTicks(0), m_transmitRatio(
        1.0), m_chunkSize(0)
{

    /*PROTECTED REGION ID(TransmissionPolicyImpl__TransmissionPolicyImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

TransmissionPolicy::~TransmissionPolicy()
{
    if (m_chunkSize)
    {
        m_chunkSize.reset();
    }
}

// Attributes

::ecore::EInt TransmissionPolicy::getChunkProcessingTicks() const
{
    return m_chunkProcessingTicks;
}

void TransmissionPolicy::setChunkProcessingTicks(
        ::ecore::EInt _chunkProcessingTicks)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EInt _old_chunkProcessingTicks = m_chunkProcessingTicks;
#endif
    m_chunkProcessingTicks = _chunkProcessingTicks;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getTransmissionPolicy__chunkProcessingTicks(), _old_chunkProcessingTicks, m_chunkProcessingTicks);
        eNotify(&notification);
    }
#endif
}

::ecore::EDouble TransmissionPolicy::getTransmitRatio() const
{
    return m_transmitRatio;
}

void TransmissionPolicy::setTransmitRatio(::ecore::EDouble _transmitRatio)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EDouble _old_transmitRatio = m_transmitRatio;
#endif
    m_transmitRatio = _transmitRatio;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getTransmissionPolicy__transmitRatio(), _old_transmitRatio, m_transmitRatio);
        eNotify(&notification);
    }
#endif
}

// References

::amalthea::DataSize_ptr TransmissionPolicy::getChunkSize() const
{
    return m_chunkSize;
}

void TransmissionPolicy::setChunkSize(::amalthea::DataSize_ptr _chunkSize)
{
    if (m_chunkSize)
        m_chunkSize->_setEContainer(TransmissionPolicy_ptr(),
                ::amalthea::AmaltheaPackage::_instance()->getTransmissionPolicy__chunkSize());
    if (_chunkSize)
        _chunkSize->_setEContainer(_this(),
                ::amalthea::AmaltheaPackage::_instance()->getTransmissionPolicy__chunkSize());

#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::DataSize_ptr _old_chunkSize = m_chunkSize;
#endif
    m_chunkSize = _chunkSize;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getTransmissionPolicy__chunkSize(), _old_chunkSize, m_chunkSize);
        eNotify(&notification);
    }
#endif
}

