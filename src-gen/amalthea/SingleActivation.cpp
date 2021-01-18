// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/SingleActivation.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "SingleActivation.hpp"
#include <amalthea/Activation.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Tag.hpp>
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

/*PROTECTED REGION ID(SingleActivation.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
SingleActivation::SingleActivation() : m_min(0), m_max(0)
{

    /*PROTECTED REGION ID(SingleActivationImpl__SingleActivationImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

SingleActivation::~SingleActivation()
{
    if (m_min)
    {
        m_min.reset();
    }
    if (m_max)
    {
        m_max.reset();
    }
}

// Attributes

// References

::amalthea::Time_ptr SingleActivation::getMin() const
{
    return m_min;
}

void SingleActivation::setMin(::amalthea::Time_ptr _min)
{
    if (m_min)
        m_min->_setEContainer(SingleActivation_ptr(),
                ::amalthea::AmaltheaPackage::_instance()->getSingleActivation__min());
    if (_min)
        _min->_setEContainer(_this(),
                ::amalthea::AmaltheaPackage::_instance()->getSingleActivation__min());

#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::Time_ptr _old_min = m_min;
#endif
    m_min = _min;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getSingleActivation__min(), _old_min, m_min);
        eNotify(&notification);
    }
#endif
}

::amalthea::Time_ptr SingleActivation::getMax() const
{
    return m_max;
}

void SingleActivation::setMax(::amalthea::Time_ptr _max)
{
    if (m_max)
        m_max->_setEContainer(SingleActivation_ptr(),
                ::amalthea::AmaltheaPackage::_instance()->getSingleActivation__max());
    if (_max)
        _max->_setEContainer(_this(),
                ::amalthea::AmaltheaPackage::_instance()->getSingleActivation__max());

#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::Time_ptr _old_max = m_max;
#endif
    m_max = _max;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getSingleActivation__max(), _old_max, m_max);
        eNotify(&notification);
    }
#endif
}

