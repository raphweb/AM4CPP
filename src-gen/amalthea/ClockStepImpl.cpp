// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/ClockStepImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "ClockStep.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/BaseObject.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Frequency.hpp>
#include <amalthea/Time.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(ClockStepImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void ClockStep::_initialize()
{
    // Supertypes
    ::amalthea::BaseObject::_initialize();

    // References
    if (m_frequency)
    {
        m_frequency->_initialize();
    }
    if (m_time)
    {
        m_time->_initialize();
    }

    /*PROTECTED REGION ID(ClockStepImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject ClockStep::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        return amalthea::IAnnotatable::eGet(_featureID, _resolve);
    }
    case ::amalthea::AmaltheaPackage::CLOCKSTEP__FREQUENCY:
    {
        if (m_frequency)
            _any = ::ecore::as < ::ecore::EObject > (m_frequency);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::CLOCKSTEP__TIME:
    {
        if (m_time)
            _any = ::ecore::as < ::ecore::EObject > (m_time);
        return _any;
    }
    }
    throw std::runtime_error("ClockStep::eGet Error. FeatureID:" + _featureID);
}

void ClockStep::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        amalthea::IAnnotatable::eSet(_featureID, _newValue);
        return;
    }
    case ::amalthea::AmaltheaPackage::CLOCKSTEP__FREQUENCY:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::Frequency_ptr _t1 =
                dynamic_cast< ::amalthea::Frequency* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::Frequency >(_t0);*/
        ::amalthea::ClockStep::setFrequency(_t1);
        return;
    }
    case ::amalthea::AmaltheaPackage::CLOCKSTEP__TIME:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::Time_ptr _t1 = dynamic_cast< ::amalthea::Time* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::Time >(_t0);*/
        ::amalthea::ClockStep::setTime(_t1);
        return;
    }
    }
    throw std::runtime_error("ClockStep::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean ClockStep::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        return amalthea::IAnnotatable::eIsSet(_featureID);
    }
    case ::amalthea::AmaltheaPackage::CLOCKSTEP__FREQUENCY:
    {
        return (bool) m_frequency;
    }
    case ::amalthea::AmaltheaPackage::CLOCKSTEP__TIME:
    {
        return (bool) m_time;
    }
    }
    throw std::runtime_error(
            "ClockStep::eIsSet Error. FeatureID:" + _featureID);
}

void ClockStep::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "ClockStep::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr ClockStep::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getClockStep();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void ClockStep::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::CLOCKSTEP__FREQUENCY:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::CLOCKSTEP__TIME:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void ClockStep::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::CLOCKSTEP__FREQUENCY:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::CLOCKSTEP__TIME:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

