// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/RunnableParameter.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "RunnableParameter.hpp"
#include <amalthea/ReferableBaseObject.hpp>
#include <amalthea/IDependsOn.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/DataDependency.hpp>
#include <amalthea/Runnable.hpp>
#include <amalthea/TypeDefinition.hpp>
#include <amalthea/INamed.hpp>
#include <amalthea/Namespace.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(RunnableParameter.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
RunnableParameter::RunnableParameter() : m_containingRunnable(0), m_dataType(0)
{

    /*PROTECTED REGION ID(RunnableParameterImpl__RunnableParameterImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

RunnableParameter::~RunnableParameter()
{
}

// Attributes

::amalthea::DirectionType RunnableParameter::getDirection() const
{
    return m_direction;
}

void RunnableParameter::setDirection(::amalthea::DirectionType _direction)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::DirectionType _old_direction = m_direction;
#endif
    m_direction = _direction;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getRunnableParameter__direction(), _old_direction, m_direction);
        eNotify(&notification);
    }
#endif
}

// References

::amalthea::Runnable_ptr RunnableParameter::getContainingRunnable() const
{
    return m_containingRunnable;
}

::amalthea::Runnable_ptr RunnableParameter::basicgetContainingRunnable()
{
    return m_containingRunnable;
}

void RunnableParameter::basicsetContainingRunnable(
        ::amalthea::Runnable_ptr _containingRunnable)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::Runnable_ptr _old_containingRunnable = m_containingRunnable;
#endif
    m_containingRunnable = _containingRunnable;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getRunnableParameter__containingRunnable(), _old_containingRunnable, m_containingRunnable);
        eNotify(&notification);
    }
#endif
}

void RunnableParameter::setContainingRunnable(
        ::amalthea::Runnable_ptr _containingRunnable)
{
    if (_containingRunnable != m_containingRunnable)
    {
        ::ecore::EJavaObject _this = ::ecore::EObject::_this();
        if (m_containingRunnable != nullptr)
        {
            m_containingRunnable->_inverseRemove(
                    ::amalthea::AmaltheaPackage::RUNNABLE__PARAMETERS, _this);
        }
        if (_containingRunnable != nullptr)
        {
            _containingRunnable->_inverseAdd(
                    ::amalthea::AmaltheaPackage::RUNNABLE__PARAMETERS, _this);
        }
        basicsetContainingRunnable(_containingRunnable);
    }
}

::amalthea::TypeDefinition_ptr RunnableParameter::getDataType() const
{
    return m_dataType;
}

void RunnableParameter::setDataType(::amalthea::TypeDefinition_ptr _dataType)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::TypeDefinition_ptr _old_dataType = m_dataType;
#endif
    m_dataType = _dataType;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getRunnableParameter__dataType(), _old_dataType, m_dataType);
        eNotify(&notification);
    }
#endif
}

