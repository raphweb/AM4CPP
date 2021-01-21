// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/SynchronizationConstraintImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "SynchronizationConstraint.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/TimingConstraint.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Time.hpp>
#include <amalthea/INamed.hpp>
#include <amalthea/Namespace.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(SynchronizationConstraintImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void SynchronizationConstraint::_initialize()
{
    // Supertypes
    ::amalthea::TimingConstraint::_initialize();

    // References
    if (m_tolerance)
    {
        m_tolerance->_initialize();
    }

    /*PROTECTED REGION ID(SynchronizationConstraintImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject SynchronizationConstraint::eGet(::ecore::EInt _featureID,
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
    case ::amalthea::AmaltheaPackage::SYNCHRONIZATIONCONSTRAINT__MULTIPLEOCCURRENCESALLOWED:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EBoolean
                > ::toAny(_any, m_multipleOccurrencesAllowed);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::SYNCHRONIZATIONCONSTRAINT__TOLERANCE:
    {
        if (m_tolerance)
            _any = ::ecore::as < ::ecore::EObject > (m_tolerance);
        return _any;
    }
    }
    throw std::runtime_error(
            "SynchronizationConstraint::eGet Error. FeatureID:" + _featureID);
}

void SynchronizationConstraint::eSet(::ecore::EInt _featureID,
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
    case ::amalthea::AmaltheaPackage::SYNCHRONIZATIONCONSTRAINT__MULTIPLEOCCURRENCESALLOWED:
    {
        ::ecore::EBoolean _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EBoolean
                > ::fromAny(_newValue, _t0);
        ::amalthea::SynchronizationConstraint::setMultipleOccurrencesAllowed(
                _t0);
        return;
    }
    case ::amalthea::AmaltheaPackage::SYNCHRONIZATIONCONSTRAINT__TOLERANCE:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::Time_ptr _t1 = dynamic_cast< ::amalthea::Time* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::Time >(_t0);*/
        ::amalthea::SynchronizationConstraint::setTolerance(_t1);
        return;
    }
    }
    throw std::runtime_error(
            "SynchronizationConstraint::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean SynchronizationConstraint::eIsSet(::ecore::EInt _featureID)
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
    case ::amalthea::AmaltheaPackage::SYNCHRONIZATIONCONSTRAINT__MULTIPLEOCCURRENCESALLOWED:
    {
        return m_multipleOccurrencesAllowed != false;
    }
    case ::amalthea::AmaltheaPackage::SYNCHRONIZATIONCONSTRAINT__TOLERANCE:
    {
        return (bool) m_tolerance;
    }
    }
    throw std::runtime_error(
            "SynchronizationConstraint::eIsSet Error. FeatureID:" + _featureID);
}

void SynchronizationConstraint::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "SynchronizationConstraint::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr SynchronizationConstraint::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getSynchronizationConstraint();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void SynchronizationConstraint::_inverseAdd(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::SYNCHRONIZATIONCONSTRAINT__TOLERANCE:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void SynchronizationConstraint::_inverseRemove(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::SYNCHRONIZATIONCONSTRAINT__TOLERANCE:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

