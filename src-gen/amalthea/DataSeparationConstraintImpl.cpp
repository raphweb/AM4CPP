// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/DataSeparationConstraintImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "DataSeparationConstraint.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/SeparationConstraint.hpp>
#include <amalthea/DataConstraint.hpp>
#include <amalthea/BaseObject.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/DataConstraintTarget.hpp>
#include <amalthea/LabelEntityGroup.hpp>
#include <amalthea/INamed.hpp>
#include <amalthea/Namespace.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(DataSeparationConstraintImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void DataSeparationConstraint::_initialize()
{
    // Supertypes
    ::amalthea::SeparationConstraint::_initialize();
    ::amalthea::DataConstraint::_initialize();
    ::amalthea::BaseObject::_initialize();

    // References
    for (size_t i = 0; i < m_groups->size(); i++)
    {
        (*m_groups)[i]->_initialize();
    }

    /*PROTECTED REGION ID(DataSeparationConstraintImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject DataSeparationConstraint::eGet(::ecore::EInt _featureID,
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
    case ::amalthea::AmaltheaPackage::DATACONSTRAINT__TARGET:
    {
        return amalthea::DataConstraint::eGet(_featureID, _resolve);
    }
    case ::amalthea::AmaltheaPackage::DATASEPARATIONCONSTRAINT__GROUPS:
    {
        _any = m_groups->asEListOf< ::ecore::EObject_ptr >();
        return _any;
    }
    }
    throw std::runtime_error(
            "DataSeparationConstraint::eGet Error. FeatureID:" + _featureID);
}

void DataSeparationConstraint::eSet(::ecore::EInt _featureID,
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
    case ::amalthea::AmaltheaPackage::DATACONSTRAINT__TARGET:
    {
        amalthea::DataConstraint::eSet(_featureID, _newValue);
        return;
    }
    case ::amalthea::AmaltheaPackage::DATASEPARATIONCONSTRAINT__GROUPS:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::amalthea::DataSeparationConstraint::getGroups().clear();
        ::amalthea::DataSeparationConstraint::getGroups().insert_all(*_t0);
        return;
    }
    }
    throw std::runtime_error(
            "DataSeparationConstraint::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean DataSeparationConstraint::eIsSet(::ecore::EInt _featureID)
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
    case ::amalthea::AmaltheaPackage::DATACONSTRAINT__TARGET:
    {
        return amalthea::DataConstraint::eIsSet(_featureID);
    }
    case ::amalthea::AmaltheaPackage::DATASEPARATIONCONSTRAINT__GROUPS:
    {
        return m_groups && m_groups->size();
    }
    }
    throw std::runtime_error(
            "DataSeparationConstraint::eIsSet Error. FeatureID:" + _featureID);
}

void DataSeparationConstraint::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "DataSeparationConstraint::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr DataSeparationConstraint::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getDataSeparationConstraint();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void DataSeparationConstraint::_inverseAdd(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::DATACONSTRAINT__TARGET:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::DATASEPARATIONCONSTRAINT__GROUPS:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void DataSeparationConstraint::_inverseRemove(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::DATACONSTRAINT__TARGET:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::DATASEPARATIONCONSTRAINT__GROUPS:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

