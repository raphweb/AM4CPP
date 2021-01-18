// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/VariableRateActivation.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "VariableRateActivation.hpp"
#include <amalthea/Activation.hpp>
#include <amalthea/IDescription.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Tag.hpp>
#include <amalthea/Time.hpp>
#include <amalthea/IContinuousValueDeviation.hpp>
#include <amalthea/INamed.hpp>
#include <amalthea/Namespace.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(VariableRateActivation.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
VariableRateActivation::VariableRateActivation() : m_step(0), m_occurrencesPerStep(
        0)
{

    /*PROTECTED REGION ID(VariableRateActivationImpl__VariableRateActivationImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

VariableRateActivation::~VariableRateActivation()
{
    if (m_step)
    {
        m_step.reset();
    }
    if (m_occurrencesPerStep)
    {
        m_occurrencesPerStep.reset();
    }
}

// Attributes

// References

::amalthea::Time_ptr VariableRateActivation::getStep() const
{
    return m_step;
}

void VariableRateActivation::setStep(::amalthea::Time_ptr _step)
{
    if (m_step)
        m_step->_setEContainer(VariableRateActivation_ptr(),
                ::amalthea::AmaltheaPackage::_instance()->getVariableRateActivation__step());
    if (_step)
        _step->_setEContainer(_this(),
                ::amalthea::AmaltheaPackage::_instance()->getVariableRateActivation__step());

#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::Time_ptr _old_step = m_step;
#endif
    m_step = _step;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getVariableRateActivation__step(), _old_step, m_step);
        eNotify(&notification);
    }
#endif
}

::amalthea::IContinuousValueDeviation_ptr VariableRateActivation::getOccurrencesPerStep() const
{
    return m_occurrencesPerStep;
}

void VariableRateActivation::setOccurrencesPerStep(
        ::amalthea::IContinuousValueDeviation_ptr _occurrencesPerStep)
{
    if (m_occurrencesPerStep)
        m_occurrencesPerStep->_setEContainer(VariableRateActivation_ptr(),
                ::amalthea::AmaltheaPackage::_instance()->getVariableRateActivation__occurrencesPerStep());
    if (_occurrencesPerStep)
        _occurrencesPerStep->_setEContainer(_this(),
                ::amalthea::AmaltheaPackage::_instance()->getVariableRateActivation__occurrencesPerStep());

#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::IContinuousValueDeviation_ptr _old_occurrencesPerStep = m_occurrencesPerStep;
#endif
    m_occurrencesPerStep = _occurrencesPerStep;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getVariableRateActivation__occurrencesPerStep(), _old_occurrencesPerStep, m_occurrencesPerStep);
        eNotify(&notification);
    }
#endif
}

