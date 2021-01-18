// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/EventChainLatencyConstraintImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "EventChainLatencyConstraint.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/TimingConstraint.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/EventChain.hpp>
#include <amalthea/Time.hpp>
#include <amalthea/INamed.hpp>
#include <amalthea/Namespace.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(EventChainLatencyConstraintImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void EventChainLatencyConstraint::_initialize()
{
    // Supertypes
    ::amalthea::TimingConstraint::_initialize();

    // References
    if (m_minimum)
    {
        m_minimum->_initialize();
    }
    if (m_maximum)
    {
        m_maximum->_initialize();
    }

    /*PROTECTED REGION ID(EventChainLatencyConstraintImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject EventChainLatencyConstraint::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        return amalthea::IAnnotatable::eGet(_featureID, _resolve);
    }
    case ::amalthea::AmaltheaPackage::INAMED__NAME:
    {
        return amalthea::INamed::eGet(_featureID, _resolve);
    }
    case ::amalthea::AmaltheaPackage::EVENTCHAINLATENCYCONSTRAINT__SCOPE:
    {
        if (m_scope)
            _any = ::ecore::as < ::ecore::EObject > (m_scope);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::EVENTCHAINLATENCYCONSTRAINT__TYPE:
    {
        ::ecorecpp::mapping::any_traits < ::amalthea::LatencyType
                > ::toAny(_any, m_type);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::EVENTCHAINLATENCYCONSTRAINT__MINIMUM:
    {
        if (m_minimum)
            _any = ::ecore::as < ::ecore::EObject > (m_minimum);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::EVENTCHAINLATENCYCONSTRAINT__MAXIMUM:
    {
        if (m_maximum)
            _any = ::ecore::as < ::ecore::EObject > (m_maximum);
        return _any;
    }
    }
    throw std::runtime_error(
            "EventChainLatencyConstraint::eGet Error. FeatureID:" + _featureID);
}

void EventChainLatencyConstraint::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        amalthea::IAnnotatable::eSet(_featureID, _newValue);
        return;
    }
    case ::amalthea::AmaltheaPackage::INAMED__NAME:
    {
        amalthea::INamed::eSet(_featureID, _newValue);
        return;
    }
    case ::amalthea::AmaltheaPackage::EVENTCHAINLATENCYCONSTRAINT__SCOPE:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::EventChain_ptr _t1 =
                dynamic_cast< ::amalthea::EventChain* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::EventChain >(_t0);*/
        ::amalthea::EventChainLatencyConstraint::setScope(_t1);
        return;
    }
    case ::amalthea::AmaltheaPackage::EVENTCHAINLATENCYCONSTRAINT__TYPE:
    {
        ::amalthea::LatencyType _t0;
        ::ecorecpp::mapping::any_traits < ::amalthea::LatencyType
                > ::fromAny(_newValue, _t0);
        ::amalthea::EventChainLatencyConstraint::setType(_t0);
        return;
    }
    case ::amalthea::AmaltheaPackage::EVENTCHAINLATENCYCONSTRAINT__MINIMUM:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::Time_ptr _t1 = dynamic_cast< ::amalthea::Time* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::Time >(_t0);*/
        ::amalthea::EventChainLatencyConstraint::setMinimum(_t1);
        return;
    }
    case ::amalthea::AmaltheaPackage::EVENTCHAINLATENCYCONSTRAINT__MAXIMUM:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::Time_ptr _t1 = dynamic_cast< ::amalthea::Time* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::Time >(_t0);*/
        ::amalthea::EventChainLatencyConstraint::setMaximum(_t1);
        return;
    }
    }
    throw std::runtime_error(
            "EventChainLatencyConstraint::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean EventChainLatencyConstraint::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        return amalthea::IAnnotatable::eIsSet(_featureID);
    }
    case ::amalthea::AmaltheaPackage::INAMED__NAME:
    case ::amalthea::AmaltheaPackage::INAMED__QUALIFIEDNAME:
    {
        return amalthea::INamed::eIsSet(_featureID);
    }
    case ::amalthea::AmaltheaPackage::IREFERABLE__UNIQUENAME:
    {
        return amalthea::IReferable::eIsSet(_featureID);
    }
    case ::amalthea::AmaltheaPackage::EVENTCHAINLATENCYCONSTRAINT__SCOPE:
    {
        return (bool) m_scope;
    }
    case ::amalthea::AmaltheaPackage::EVENTCHAINLATENCYCONSTRAINT__TYPE:
    {
        return ::ecorecpp::mapping::set_traits < ::amalthea::LatencyType
                > ::is_set(m_type);
    }
    case ::amalthea::AmaltheaPackage::EVENTCHAINLATENCYCONSTRAINT__MINIMUM:
    {
        return (bool) m_minimum;
    }
    case ::amalthea::AmaltheaPackage::EVENTCHAINLATENCYCONSTRAINT__MAXIMUM:
    {
        return (bool) m_maximum;
    }
    }
    throw std::runtime_error(
            "EventChainLatencyConstraint::eIsSet Error. FeatureID:"
                    + _featureID);
}

void EventChainLatencyConstraint::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "EventChainLatencyConstraint::eUnset Error. FeatureID:"
                    + _featureID);
}

::ecore::EClass_ptr EventChainLatencyConstraint::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getEventChainLatencyConstraint();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void EventChainLatencyConstraint::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::EVENTCHAINLATENCYCONSTRAINT__SCOPE:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::EVENTCHAINLATENCYCONSTRAINT__MINIMUM:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::EVENTCHAINLATENCYCONSTRAINT__MAXIMUM:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void EventChainLatencyConstraint::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::EVENTCHAINLATENCYCONSTRAINT__SCOPE:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::EVENTCHAINLATENCYCONSTRAINT__MINIMUM:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::EVENTCHAINLATENCYCONSTRAINT__MAXIMUM:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

