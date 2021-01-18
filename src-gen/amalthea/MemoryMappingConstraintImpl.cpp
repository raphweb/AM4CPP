// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/MemoryMappingConstraintImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "MemoryMappingConstraint.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/BaseObject.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/MemoryClassification.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(MemoryMappingConstraintImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void MemoryMappingConstraint::_initialize()
{
    // Supertypes
    ::amalthea::BaseObject::_initialize();

    // References
    if (m_memoryClassification)
    {
        m_memoryClassification->_initialize();
    }

    /*PROTECTED REGION ID(MemoryMappingConstraintImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject MemoryMappingConstraint::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        return amalthea::IAnnotatable::eGet(_featureID, _resolve);
    }
    case ::amalthea::AmaltheaPackage::MEMORYMAPPINGCONSTRAINT__MEMORYCLASSIFICATION:
    {
        if (m_memoryClassification)
            _any = ::ecore::as < ::ecore::EObject > (m_memoryClassification);
        return _any;
    }
    }
    throw std::runtime_error(
            "MemoryMappingConstraint::eGet Error. FeatureID:" + _featureID);
}

void MemoryMappingConstraint::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        amalthea::IAnnotatable::eSet(_featureID, _newValue);
        return;
    }
    case ::amalthea::AmaltheaPackage::MEMORYMAPPINGCONSTRAINT__MEMORYCLASSIFICATION:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::MemoryClassification_ptr _t1 =
                dynamic_cast< ::amalthea::MemoryClassification* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::MemoryClassification >(_t0);*/
        ::amalthea::MemoryMappingConstraint::setMemoryClassification(_t1);
        return;
    }
    }
    throw std::runtime_error(
            "MemoryMappingConstraint::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean MemoryMappingConstraint::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        return amalthea::IAnnotatable::eIsSet(_featureID);
    }
    case ::amalthea::AmaltheaPackage::MEMORYMAPPINGCONSTRAINT__MEMORYCLASSIFICATION:
    {
        return (bool) m_memoryClassification;
    }
    }
    throw std::runtime_error(
            "MemoryMappingConstraint::eIsSet Error. FeatureID:" + _featureID);
}

void MemoryMappingConstraint::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "MemoryMappingConstraint::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr MemoryMappingConstraint::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getMemoryMappingConstraint();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void MemoryMappingConstraint::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::MEMORYMAPPINGCONSTRAINT__MEMORYCLASSIFICATION:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void MemoryMappingConstraint::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::MEMORYMAPPINGCONSTRAINT__MEMORYCLASSIFICATION:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

