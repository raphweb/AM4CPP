// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/RepetitionConstraintImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "RepetitionConstraint.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/TimingConstraint.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/EntityEvent.hpp>
#include <amalthea/Time.hpp>
#include <amalthea/INamed.hpp>
#include <amalthea/Namespace.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(RepetitionConstraintImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void RepetitionConstraint::_initialize()
{
    // Supertypes
    ::amalthea::TimingConstraint::_initialize();

    // References
    if (m_lower)
    {
        m_lower->_initialize();
    }
    if (m_upper)
    {
        m_upper->_initialize();
    }
    if (m_jitter)
    {
        m_jitter->_initialize();
    }
    if (m_period)
    {
        m_period->_initialize();
    }

    /*PROTECTED REGION ID(RepetitionConstraintImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject RepetitionConstraint::eGet(::ecore::EInt _featureID,
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
    case ::amalthea::AmaltheaPackage::REPETITIONCONSTRAINT__EVENT:
    {
        if (m_event)
            _any = ::ecore::as < ::ecore::EObject > (m_event);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::REPETITIONCONSTRAINT__SPAN:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EInt > ::toAny(_any, m_span);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::REPETITIONCONSTRAINT__LOWER:
    {
        if (m_lower)
            _any = ::ecore::as < ::ecore::EObject > (m_lower);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::REPETITIONCONSTRAINT__UPPER:
    {
        if (m_upper)
            _any = ::ecore::as < ::ecore::EObject > (m_upper);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::REPETITIONCONSTRAINT__JITTER:
    {
        if (m_jitter)
            _any = ::ecore::as < ::ecore::EObject > (m_jitter);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::REPETITIONCONSTRAINT__PERIOD:
    {
        if (m_period)
            _any = ::ecore::as < ::ecore::EObject > (m_period);
        return _any;
    }
    }
    throw std::runtime_error(
            "RepetitionConstraint::eGet Error. FeatureID:" + _featureID);
}

void RepetitionConstraint::eSet(::ecore::EInt _featureID,
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
    case ::amalthea::AmaltheaPackage::REPETITIONCONSTRAINT__EVENT:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::EntityEvent_ptr _t1 =
                dynamic_cast< ::amalthea::EntityEvent* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::EntityEvent >(_t0);*/
        ::amalthea::RepetitionConstraint::setEvent(_t1);
        return;
    }
    case ::amalthea::AmaltheaPackage::REPETITIONCONSTRAINT__SPAN:
    {
        ::ecore::EInt _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EInt
                > ::fromAny(_newValue, _t0);
        ::amalthea::RepetitionConstraint::setSpan(_t0);
        return;
    }
    case ::amalthea::AmaltheaPackage::REPETITIONCONSTRAINT__LOWER:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::Time_ptr _t1 = dynamic_cast< ::amalthea::Time* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::Time >(_t0);*/
        ::amalthea::RepetitionConstraint::setLower(_t1);
        return;
    }
    case ::amalthea::AmaltheaPackage::REPETITIONCONSTRAINT__UPPER:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::Time_ptr _t1 = dynamic_cast< ::amalthea::Time* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::Time >(_t0);*/
        ::amalthea::RepetitionConstraint::setUpper(_t1);
        return;
    }
    case ::amalthea::AmaltheaPackage::REPETITIONCONSTRAINT__JITTER:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::Time_ptr _t1 = dynamic_cast< ::amalthea::Time* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::Time >(_t0);*/
        ::amalthea::RepetitionConstraint::setJitter(_t1);
        return;
    }
    case ::amalthea::AmaltheaPackage::REPETITIONCONSTRAINT__PERIOD:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::Time_ptr _t1 = dynamic_cast< ::amalthea::Time* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::Time >(_t0);*/
        ::amalthea::RepetitionConstraint::setPeriod(_t1);
        return;
    }
    }
    throw std::runtime_error(
            "RepetitionConstraint::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean RepetitionConstraint::eIsSet(::ecore::EInt _featureID)
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
    case ::amalthea::AmaltheaPackage::REPETITIONCONSTRAINT__EVENT:
    {
        return (bool) m_event;
    }
    case ::amalthea::AmaltheaPackage::REPETITIONCONSTRAINT__SPAN:
    {
        return m_span != 0;
    }
    case ::amalthea::AmaltheaPackage::REPETITIONCONSTRAINT__LOWER:
    {
        return (bool) m_lower;
    }
    case ::amalthea::AmaltheaPackage::REPETITIONCONSTRAINT__UPPER:
    {
        return (bool) m_upper;
    }
    case ::amalthea::AmaltheaPackage::REPETITIONCONSTRAINT__JITTER:
    {
        return (bool) m_jitter;
    }
    case ::amalthea::AmaltheaPackage::REPETITIONCONSTRAINT__PERIOD:
    {
        return (bool) m_period;
    }
    }
    throw std::runtime_error(
            "RepetitionConstraint::eIsSet Error. FeatureID:" + _featureID);
}

void RepetitionConstraint::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "RepetitionConstraint::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr RepetitionConstraint::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getRepetitionConstraint();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void RepetitionConstraint::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::REPETITIONCONSTRAINT__EVENT:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::REPETITIONCONSTRAINT__LOWER:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::REPETITIONCONSTRAINT__UPPER:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::REPETITIONCONSTRAINT__JITTER:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::REPETITIONCONSTRAINT__PERIOD:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void RepetitionConstraint::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::REPETITIONCONSTRAINT__EVENT:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::REPETITIONCONSTRAINT__LOWER:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::REPETITIONCONSTRAINT__UPPER:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::REPETITIONCONSTRAINT__JITTER:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::REPETITIONCONSTRAINT__PERIOD:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

