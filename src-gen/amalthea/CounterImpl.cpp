// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/CounterImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "Counter.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/BaseObject.hpp>
#include <amalthea/CustomProperty.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(CounterImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void Counter::_initialize()
{
    // Supertypes
    ::amalthea::BaseObject::_initialize();

    // References

    /*PROTECTED REGION ID(CounterImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject Counter::eGet(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        return amalthea::IAnnotatable::eGet(_featureID, _resolve);
    }
    case ::amalthea::AmaltheaPackage::COUNTER__PRESCALER:
    {
        ::ecorecpp::mapping::any_traits < ::amalthea::PositiveLong
                > ::toAny(_any, m_prescaler);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::COUNTER__OFFSET:
    {
        ::ecorecpp::mapping::any_traits < ::amalthea::NonNegativeLong
                > ::toAny(_any, m_offset);
        return _any;
    }
    }
    throw std::runtime_error("Counter::eGet Error. FeatureID:" + _featureID);
}

void Counter::eSet(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        amalthea::IAnnotatable::eSet(_featureID, _newValue);
        return;
    }
    case ::amalthea::AmaltheaPackage::COUNTER__PRESCALER:
    {
        ::amalthea::PositiveLong _t0;
        ::ecorecpp::mapping::any_traits < ::amalthea::PositiveLong
                > ::fromAny(_newValue, _t0);
        ::amalthea::Counter::setPrescaler(_t0);
        return;
    }
    case ::amalthea::AmaltheaPackage::COUNTER__OFFSET:
    {
        ::amalthea::NonNegativeLong _t0;
        ::ecorecpp::mapping::any_traits < ::amalthea::NonNegativeLong
                > ::fromAny(_newValue, _t0);
        ::amalthea::Counter::setOffset(_t0);
        return;
    }
    }
    throw std::runtime_error("Counter::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean Counter::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        return amalthea::IAnnotatable::eIsSet(_featureID);
    }
    case ::amalthea::AmaltheaPackage::COUNTER__PRESCALER:
    {
        return m_prescaler != 1;
    }
    case ::amalthea::AmaltheaPackage::COUNTER__OFFSET:
    {
        return m_offset != 0;
    }
    }
    throw std::runtime_error("Counter::eIsSet Error. FeatureID:" + _featureID);
}

void Counter::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error("Counter::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr Counter::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getCounter();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void Counter::_inverseAdd(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void Counter::_inverseRemove(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

