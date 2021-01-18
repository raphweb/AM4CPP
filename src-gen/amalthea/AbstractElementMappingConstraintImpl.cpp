// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/AbstractElementMappingConstraintImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "AbstractElementMappingConstraint.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/MemoryMappingConstraint.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/MemoryClassification.hpp>
#include <amalthea/AbstractMemoryElement.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(AbstractElementMappingConstraintImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void AbstractElementMappingConstraint::_initialize()
{
    // Supertypes
    ::amalthea::MemoryMappingConstraint::_initialize();

    // References

    /*PROTECTED REGION ID(AbstractElementMappingConstraintImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject AbstractElementMappingConstraint::eGet(
        ::ecore::EInt _featureID, ::ecore::EBoolean _resolve)
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
        return amalthea::MemoryMappingConstraint::eGet(_featureID, _resolve);
    }
    case ::amalthea::AmaltheaPackage::ABSTRACTELEMENTMAPPINGCONSTRAINT__ABSTRACTELEMENT:
    {
        if (m_abstractElement)
            _any = ::ecore::as < ::ecore::EObject > (m_abstractElement);
        return _any;
    }
    }
    throw std::runtime_error(
            "AbstractElementMappingConstraint::eGet Error. FeatureID:"
                    + _featureID);
}

void AbstractElementMappingConstraint::eSet(::ecore::EInt _featureID,
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
        amalthea::MemoryMappingConstraint::eSet(_featureID, _newValue);
        return;
    }
    case ::amalthea::AmaltheaPackage::ABSTRACTELEMENTMAPPINGCONSTRAINT__ABSTRACTELEMENT:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::AbstractMemoryElement_ptr _t1 =
                dynamic_cast< ::amalthea::AbstractMemoryElement* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::AbstractMemoryElement >(_t0);*/
        ::amalthea::AbstractElementMappingConstraint::setAbstractElement(_t1);
        return;
    }
    }
    throw std::runtime_error(
            "AbstractElementMappingConstraint::eSet Error. FeatureID:"
                    + _featureID);
}

::ecore::EBoolean AbstractElementMappingConstraint::eIsSet(
        ::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        return amalthea::IAnnotatable::eIsSet(_featureID);
    }
    case ::amalthea::AmaltheaPackage::MEMORYMAPPINGCONSTRAINT__MEMORYCLASSIFICATION:
    {
        return amalthea::MemoryMappingConstraint::eIsSet(_featureID);
    }
    case ::amalthea::AmaltheaPackage::ABSTRACTELEMENTMAPPINGCONSTRAINT__ABSTRACTELEMENT:
    {
        return (bool) m_abstractElement;
    }
    }
    throw std::runtime_error(
            "AbstractElementMappingConstraint::eIsSet Error. FeatureID:"
                    + _featureID);
}

void AbstractElementMappingConstraint::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "AbstractElementMappingConstraint::eUnset Error. FeatureID:"
                    + _featureID);
}

::ecore::EClass_ptr AbstractElementMappingConstraint::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getAbstractElementMappingConstraint();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void AbstractElementMappingConstraint::_inverseAdd(::ecore::EInt _featureID,
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
    case ::amalthea::AmaltheaPackage::ABSTRACTELEMENTMAPPINGCONSTRAINT__ABSTRACTELEMENT:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void AbstractElementMappingConstraint::_inverseRemove(::ecore::EInt _featureID,
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
    case ::amalthea::AmaltheaPackage::ABSTRACTELEMENTMAPPINGCONSTRAINT__ABSTRACTELEMENT:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

