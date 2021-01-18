// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/Semaphore.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "Semaphore.hpp"
#include <amalthea/ReferableBaseObject.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/SemaphoreAccess.hpp>
#include <amalthea/Component.hpp>
#include <amalthea/INamed.hpp>
#include <amalthea/Namespace.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(Semaphore.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
Semaphore::Semaphore() : m_initialValue(0), m_maxValue(0), m_priorityCeilingProtocol(
        false)
{

    m_semaphoreAccesses.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::amalthea::SemaphoreAccess_ptr, -1, false, false >(this,
                    ::amalthea::AmaltheaPackage::_instance()->getSemaphore__semaphoreAccesses()));
    m_referringComponents.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::amalthea::Component_ptr, -1, false, false >(this,
                    ::amalthea::AmaltheaPackage::_instance()->getSemaphore__referringComponents()));

    /*PROTECTED REGION ID(SemaphoreImpl__SemaphoreImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

Semaphore::~Semaphore()
{
}

// Attributes

::amalthea::SemaphoreType Semaphore::getSemaphoreType() const
{
    return m_semaphoreType;
}

void Semaphore::setSemaphoreType(::amalthea::SemaphoreType _semaphoreType)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::SemaphoreType _old_semaphoreType = m_semaphoreType;
#endif
    m_semaphoreType = _semaphoreType;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getSemaphore__semaphoreType(), _old_semaphoreType, m_semaphoreType);
        eNotify(&notification);
    }
#endif
}

::ecore::EInt Semaphore::getInitialValue() const
{
    return m_initialValue;
}

void Semaphore::setInitialValue(::ecore::EInt _initialValue)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EInt _old_initialValue = m_initialValue;
#endif
    m_initialValue = _initialValue;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getSemaphore__initialValue(), _old_initialValue, m_initialValue);
        eNotify(&notification);
    }
#endif
}

::ecore::EInt Semaphore::getMaxValue() const
{
    return m_maxValue;
}

void Semaphore::setMaxValue(::ecore::EInt _maxValue)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EInt _old_maxValue = m_maxValue;
#endif
    m_maxValue = _maxValue;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getSemaphore__maxValue(), _old_maxValue, m_maxValue);
        eNotify(&notification);
    }
#endif
}

::ecore::EBoolean Semaphore::isPriorityCeilingProtocol() const
{
    return m_priorityCeilingProtocol;
}

void Semaphore::setPriorityCeilingProtocol(
        ::ecore::EBoolean _priorityCeilingProtocol)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EBoolean _old_priorityCeilingProtocol = m_priorityCeilingProtocol;
#endif
    m_priorityCeilingProtocol = _priorityCeilingProtocol;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getSemaphore__priorityCeilingProtocol(), _old_priorityCeilingProtocol, m_priorityCeilingProtocol);
        eNotify(&notification);
    }
#endif
}

// References

const ::ecorecpp::mapping::EList< ::amalthea::SemaphoreAccess_ptr >& Semaphore::getSemaphoreAccesses() const
{
    return *m_semaphoreAccesses;
}

::ecorecpp::mapping::EList< ::amalthea::SemaphoreAccess_ptr >& Semaphore::getSemaphoreAccesses()
{
    return *m_semaphoreAccesses;
}

const ::ecorecpp::mapping::EList< ::amalthea::Component_ptr >& Semaphore::getReferringComponents() const
{
    return *m_referringComponents;
}

::ecorecpp::mapping::EList< ::amalthea::Component_ptr >& Semaphore::getReferringComponents()
{
    return *m_referringComponents;
}

