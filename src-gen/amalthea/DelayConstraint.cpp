// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/DelayConstraint.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "DelayConstraint.hpp"
#include <amalthea/TimingConstraint.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/EntityEvent.hpp>
#include <amalthea/Time.hpp>
#include <amalthea/INamed.hpp>
#include <amalthea/Namespace.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(DelayConstraint.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
DelayConstraint::DelayConstraint() : m_source(0), m_target(0), m_upper(0), m_lower(
        0)
{

    /*PROTECTED REGION ID(DelayConstraintImpl__DelayConstraintImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

DelayConstraint::~DelayConstraint()
{
    if (m_upper)
    {
        m_upper.reset();
    }
    if (m_lower)
    {
        m_lower.reset();
    }
}

// Attributes

::amalthea::MappingType DelayConstraint::getMappingType() const
{
    return m_mappingType;
}

void DelayConstraint::setMappingType(::amalthea::MappingType _mappingType)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::MappingType _old_mappingType = m_mappingType;
#endif
    m_mappingType = _mappingType;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getDelayConstraint__mappingType(), _old_mappingType, m_mappingType);
        eNotify(&notification);
    }
#endif
}

// References

::amalthea::EntityEvent_ptr DelayConstraint::getSource() const
{
    return m_source;
}

void DelayConstraint::setSource(::amalthea::EntityEvent_ptr _source)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::EntityEvent_ptr _old_source = m_source;
#endif
    m_source = _source;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getDelayConstraint__source(), _old_source, m_source);
        eNotify(&notification);
    }
#endif
}

::amalthea::EntityEvent_ptr DelayConstraint::getTarget() const
{
    return m_target;
}

void DelayConstraint::setTarget(::amalthea::EntityEvent_ptr _target)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::EntityEvent_ptr _old_target = m_target;
#endif
    m_target = _target;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getDelayConstraint__target(), _old_target, m_target);
        eNotify(&notification);
    }
#endif
}

::amalthea::Time_ptr DelayConstraint::getUpper() const
{
    return m_upper;
}

void DelayConstraint::setUpper(::amalthea::Time_ptr _upper)
{
    if (m_upper)
        m_upper->_setEContainer(DelayConstraint_ptr(),
                ::amalthea::AmaltheaPackage::_instance()->getDelayConstraint__upper());
    if (_upper)
        _upper->_setEContainer(_this(),
                ::amalthea::AmaltheaPackage::_instance()->getDelayConstraint__upper());

#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::Time_ptr _old_upper = m_upper;
#endif
    m_upper = _upper;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getDelayConstraint__upper(), _old_upper, m_upper);
        eNotify(&notification);
    }
#endif
}

::amalthea::Time_ptr DelayConstraint::getLower() const
{
    return m_lower;
}

void DelayConstraint::setLower(::amalthea::Time_ptr _lower)
{
    if (m_lower)
        m_lower->_setEContainer(DelayConstraint_ptr(),
                ::amalthea::AmaltheaPackage::_instance()->getDelayConstraint__lower());
    if (_lower)
        _lower->_setEContainer(_this(),
                ::amalthea::AmaltheaPackage::_instance()->getDelayConstraint__lower());

#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::Time_ptr _old_lower = m_lower;
#endif
    m_lower = _lower;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getDelayConstraint__lower(), _old_lower, m_lower);
        eNotify(&notification);
    }
#endif
}

