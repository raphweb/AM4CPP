// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/ISRAllocationImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "ISRAllocation.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/BaseObject.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/ISR.hpp>
#include <amalthea/InterruptController.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(ISRAllocationImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void ISRAllocation::_initialize()
{
    // Supertypes
    ::amalthea::BaseObject::_initialize();

    // References

    /*PROTECTED REGION ID(ISRAllocationImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject ISRAllocation::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        return amalthea::IAnnotatable::eGet(_featureID, _resolve);
    }
    case ::amalthea::AmaltheaPackage::ISRALLOCATION__ISR:
    {
        if (m_isr)
            _any = ::ecore::as < ::ecore::EObject > (m_isr);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::ISRALLOCATION__CONTROLLER:
    {
        if (m_controller)
            _any = ::ecore::as < ::ecore::EObject > (m_controller);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::ISRALLOCATION__PRIORITY:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EIntegerObject
                > ::toAny(_any, m_priority);
        return _any;
    }
    }
    throw std::runtime_error(
            "ISRAllocation::eGet Error. FeatureID:" + _featureID);
}

void ISRAllocation::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        amalthea::IAnnotatable::eSet(_featureID, _newValue);
        return;
    }
    case ::amalthea::AmaltheaPackage::ISRALLOCATION__ISR:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::ISR_ptr _t1 = dynamic_cast< ::amalthea::ISR* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::ISR >(_t0);*/
        ::amalthea::ISRAllocation::setIsr(_t1);
        return;
    }
    case ::amalthea::AmaltheaPackage::ISRALLOCATION__CONTROLLER:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::InterruptController_ptr _t1 =
                dynamic_cast< ::amalthea::InterruptController* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::InterruptController >(_t0);*/
        ::amalthea::ISRAllocation::setController(_t1);
        return;
    }
    case ::amalthea::AmaltheaPackage::ISRALLOCATION__PRIORITY:
    {
        ::ecore::EIntegerObject _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EIntegerObject
                > ::fromAny(_newValue, _t0);
        ::amalthea::ISRAllocation::setPriority(_t0);
        return;
    }
    }
    throw std::runtime_error(
            "ISRAllocation::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean ISRAllocation::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        return amalthea::IAnnotatable::eIsSet(_featureID);
    }
    case ::amalthea::AmaltheaPackage::ISRALLOCATION__ISR:
    {
        return (bool) m_isr;
    }
    case ::amalthea::AmaltheaPackage::ISRALLOCATION__CONTROLLER:
    {
        return (bool) m_controller;
    }
    case ::amalthea::AmaltheaPackage::ISRALLOCATION__PRIORITY:
    {
        return ::ecorecpp::mapping::set_traits < ::ecore::EIntegerObject
                > ::is_set(m_priority);
    }
    }
    throw std::runtime_error(
            "ISRAllocation::eIsSet Error. FeatureID:" + _featureID);
}

void ISRAllocation::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "ISRAllocation::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr ISRAllocation::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getISRAllocation();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void ISRAllocation::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::ISRALLOCATION__ISR:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::ISRALLOCATION__CONTROLLER:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void ISRAllocation::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::ISRALLOCATION__ISR:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::ISRALLOCATION__CONTROLLER:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

