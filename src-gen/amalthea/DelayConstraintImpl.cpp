// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/DelayConstraintImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "DelayConstraint.hpp"
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

/*PROTECTED REGION ID(DelayConstraintImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void DelayConstraint::_initialize()
{
    // Supertypes
    ::amalthea::TimingConstraint::_initialize();

    // References
    if (m_upper)
    {
        m_upper->_initialize();
    }
    if (m_lower)
    {
        m_lower->_initialize();
    }

    /*PROTECTED REGION ID(DelayConstraintImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject DelayConstraint::eGet(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EBoolean _resolve)
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
    case ::amalthea::AmaltheaPackage::DELAYCONSTRAINT__MAPPINGTYPE:
    {
        ::ecorecpp::mapping::any_traits < ::amalthea::MappingType
                > ::toAny(_any, m_mappingType);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::DELAYCONSTRAINT__SOURCE:
    {
        if (m_source)
            _any = ::ecore::as < ::ecore::EObject > (m_source);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::DELAYCONSTRAINT__TARGET:
    {
        if (m_target)
            _any = ::ecore::as < ::ecore::EObject > (m_target);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::DELAYCONSTRAINT__UPPER:
    {
        if (m_upper)
            _any = ::ecore::as < ::ecore::EObject > (m_upper);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::DELAYCONSTRAINT__LOWER:
    {
        if (m_lower)
            _any = ::ecore::as < ::ecore::EObject > (m_lower);
        return _any;
    }
    }
    throw std::runtime_error(
            "DelayConstraint::eGet Error. FeatureID:" + _featureID);
}

void DelayConstraint::eSet(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
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
    case ::amalthea::AmaltheaPackage::DELAYCONSTRAINT__MAPPINGTYPE:
    {
        ::amalthea::MappingType _t0;
        ::ecorecpp::mapping::any_traits < ::amalthea::MappingType
                > ::fromAny(_newValue, _t0);
        ::amalthea::DelayConstraint::setMappingType(_t0);
        return;
    }
    case ::amalthea::AmaltheaPackage::DELAYCONSTRAINT__SOURCE:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::EntityEvent_ptr _t1 =
                dynamic_cast< ::amalthea::EntityEvent* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::EntityEvent >(_t0);*/
        ::amalthea::DelayConstraint::setSource(_t1);
        return;
    }
    case ::amalthea::AmaltheaPackage::DELAYCONSTRAINT__TARGET:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::EntityEvent_ptr _t1 =
                dynamic_cast< ::amalthea::EntityEvent* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::EntityEvent >(_t0);*/
        ::amalthea::DelayConstraint::setTarget(_t1);
        return;
    }
    case ::amalthea::AmaltheaPackage::DELAYCONSTRAINT__UPPER:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::Time_ptr _t1 = dynamic_cast< ::amalthea::Time* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::Time >(_t0);*/
        ::amalthea::DelayConstraint::setUpper(_t1);
        return;
    }
    case ::amalthea::AmaltheaPackage::DELAYCONSTRAINT__LOWER:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::Time_ptr _t1 = dynamic_cast< ::amalthea::Time* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::Time >(_t0);*/
        ::amalthea::DelayConstraint::setLower(_t1);
        return;
    }
    }
    throw std::runtime_error(
            "DelayConstraint::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean DelayConstraint::eIsSet(::ecore::EInt _featureID)
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
    case ::amalthea::AmaltheaPackage::DELAYCONSTRAINT__MAPPINGTYPE:
    {
        return ::ecorecpp::mapping::set_traits < ::amalthea::MappingType
                > ::is_set(m_mappingType);
    }
    case ::amalthea::AmaltheaPackage::DELAYCONSTRAINT__SOURCE:
    {
        return (bool) m_source;
    }
    case ::amalthea::AmaltheaPackage::DELAYCONSTRAINT__TARGET:
    {
        return (bool) m_target;
    }
    case ::amalthea::AmaltheaPackage::DELAYCONSTRAINT__UPPER:
    {
        return (bool) m_upper;
    }
    case ::amalthea::AmaltheaPackage::DELAYCONSTRAINT__LOWER:
    {
        return (bool) m_lower;
    }
    }
    throw std::runtime_error(
            "DelayConstraint::eIsSet Error. FeatureID:" + _featureID);
}

void DelayConstraint::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "DelayConstraint::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr DelayConstraint::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getDelayConstraint();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void DelayConstraint::_inverseAdd(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::DELAYCONSTRAINT__SOURCE:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::DELAYCONSTRAINT__TARGET:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::DELAYCONSTRAINT__UPPER:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::DELAYCONSTRAINT__LOWER:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void DelayConstraint::_inverseRemove(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::DELAYCONSTRAINT__SOURCE:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::DELAYCONSTRAINT__TARGET:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::DELAYCONSTRAINT__UPPER:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::DELAYCONSTRAINT__LOWER:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

