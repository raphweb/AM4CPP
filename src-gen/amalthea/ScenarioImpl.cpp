// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/ScenarioImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "Scenario.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/BaseObject.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Clock.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(ScenarioImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void Scenario::_initialize()
{
    // Supertypes
    ::amalthea::BaseObject::_initialize();

    // References

    /*PROTECTED REGION ID(ScenarioImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject Scenario::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        return amalthea::IAnnotatable::eGet(_featureID, _resolve);
    }
    case ::amalthea::AmaltheaPackage::SCENARIO__CLOCK:
    {
        if (m_clock)
            _any = ::ecore::as < ::ecore::EObject > (m_clock);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::SCENARIO__SAMPLINGOFFSET:
    {
        ::ecorecpp::mapping::any_traits < ::amalthea::NonNegativeDouble
                > ::toAny(_any, m_samplingOffset);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::SCENARIO__SAMPLINGRECURRENCE:
    {
        ::ecorecpp::mapping::any_traits < ::amalthea::NonNegativeDouble
                > ::toAny(_any, m_samplingRecurrence);
        return _any;
    }
    }
    throw std::runtime_error("Scenario::eGet Error. FeatureID:" + _featureID);
}

void Scenario::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        amalthea::IAnnotatable::eSet(_featureID, _newValue);
        return;
    }
    case ::amalthea::AmaltheaPackage::SCENARIO__CLOCK:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::Clock_ptr _t1 =
                dynamic_cast< ::amalthea::Clock* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::Clock >(_t0);*/
        ::amalthea::Scenario::setClock(_t1);
        return;
    }
    case ::amalthea::AmaltheaPackage::SCENARIO__SAMPLINGOFFSET:
    {
        ::amalthea::NonNegativeDouble _t0;
        ::ecorecpp::mapping::any_traits < ::amalthea::NonNegativeDouble
                > ::fromAny(_newValue, _t0);
        ::amalthea::Scenario::setSamplingOffset(_t0);
        return;
    }
    case ::amalthea::AmaltheaPackage::SCENARIO__SAMPLINGRECURRENCE:
    {
        ::amalthea::NonNegativeDouble _t0;
        ::ecorecpp::mapping::any_traits < ::amalthea::NonNegativeDouble
                > ::fromAny(_newValue, _t0);
        ::amalthea::Scenario::setSamplingRecurrence(_t0);
        return;
    }
    }
    throw std::runtime_error("Scenario::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean Scenario::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        return amalthea::IAnnotatable::eIsSet(_featureID);
    }
    case ::amalthea::AmaltheaPackage::SCENARIO__CLOCK:
    {
        return (bool) m_clock;
    }
    case ::amalthea::AmaltheaPackage::SCENARIO__SAMPLINGOFFSET:
    {
        return m_samplingOffset != 0.0;
    }
    case ::amalthea::AmaltheaPackage::SCENARIO__SAMPLINGRECURRENCE:
    {
        return m_samplingRecurrence != 1.0;
    }
    }
    throw std::runtime_error("Scenario::eIsSet Error. FeatureID:" + _featureID);
}

void Scenario::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error("Scenario::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr Scenario::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getScenario();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void Scenario::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::SCENARIO__CLOCK:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void Scenario::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::SCENARIO__CLOCK:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

