// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/PhysicalSectionConstraintImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "PhysicalSectionConstraint.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/ReferableBaseObject.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Section.hpp>
#include <amalthea/Memory.hpp>
#include <amalthea/INamed.hpp>
#include <amalthea/Namespace.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(PhysicalSectionConstraintImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void PhysicalSectionConstraint::_initialize()
{
    // Supertypes
    ::amalthea::ReferableBaseObject::_initialize();

    // References

    /*PROTECTED REGION ID(PhysicalSectionConstraintImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject PhysicalSectionConstraint::eGet(::ecore::EInt _featureID,
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
    case ::amalthea::AmaltheaPackage::PHYSICALSECTIONCONSTRAINT__SECTION:
    {
        if (m_section)
            _any = ::ecore::as < ::ecore::EObject > (m_section);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::PHYSICALSECTIONCONSTRAINT__MEMORIES:
    {
        _any = m_memories->asEListOf< ::ecore::EObject_ptr >();
        return _any;
    }
    }
    throw std::runtime_error(
            "PhysicalSectionConstraint::eGet Error. FeatureID:" + _featureID);
}

void PhysicalSectionConstraint::eSet(::ecore::EInt _featureID,
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
    case ::amalthea::AmaltheaPackage::PHYSICALSECTIONCONSTRAINT__SECTION:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::Section_ptr _t1 =
                dynamic_cast< ::amalthea::Section* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::Section >(_t0);*/
        ::amalthea::PhysicalSectionConstraint::setSection(_t1);
        return;
    }
    case ::amalthea::AmaltheaPackage::PHYSICALSECTIONCONSTRAINT__MEMORIES:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::amalthea::PhysicalSectionConstraint::getMemories().clear();
        ::amalthea::PhysicalSectionConstraint::getMemories().insert_all(*_t0);
        return;
    }
    }
    throw std::runtime_error(
            "PhysicalSectionConstraint::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean PhysicalSectionConstraint::eIsSet(::ecore::EInt _featureID)
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
    case ::amalthea::AmaltheaPackage::PHYSICALSECTIONCONSTRAINT__SECTION:
    {
        return (bool) m_section;
    }
    case ::amalthea::AmaltheaPackage::PHYSICALSECTIONCONSTRAINT__MEMORIES:
    {
        return m_memories && m_memories->size();
    }
    }
    throw std::runtime_error(
            "PhysicalSectionConstraint::eIsSet Error. FeatureID:" + _featureID);
}

void PhysicalSectionConstraint::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "PhysicalSectionConstraint::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr PhysicalSectionConstraint::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getPhysicalSectionConstraint();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void PhysicalSectionConstraint::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::PHYSICALSECTIONCONSTRAINT__SECTION:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::PHYSICALSECTIONCONSTRAINT__MEMORIES:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void PhysicalSectionConstraint::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::PHYSICALSECTIONCONSTRAINT__SECTION:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::PHYSICALSECTIONCONSTRAINT__MEMORIES:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

