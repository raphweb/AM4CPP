// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/DataPairingConstraintImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "DataPairingConstraint.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/PairingConstraint.hpp>
#include <amalthea/DataConstraint.hpp>
#include <amalthea/BaseObject.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/DataConstraintTarget.hpp>
#include <amalthea/LabelGroup.hpp>
#include <amalthea/INamed.hpp>
#include <amalthea/Namespace.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(DataPairingConstraintImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void DataPairingConstraint::_initialize()
{
    // Supertypes
    ::amalthea::PairingConstraint::_initialize();
    ::amalthea::DataConstraint::_initialize();
    ::amalthea::BaseObject::_initialize();

    // References
    if (m_group)
    {
        m_group->_initialize();
    }

    /*PROTECTED REGION ID(DataPairingConstraintImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject DataPairingConstraint::eGet(::ecore::EInt _featureID,
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
    case ::amalthea::AmaltheaPackage::DATAPAIRINGCONSTRAINT__GROUP:
    {
        if (m_group)
            _any = ::ecore::as < ::ecore::EObject > (m_group);
        return _any;
    }
    }
    throw std::runtime_error(
            "DataPairingConstraint::eGet Error. FeatureID:" + _featureID);
}

void DataPairingConstraint::eSet(::ecore::EInt _featureID,
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
    case ::amalthea::AmaltheaPackage::DATAPAIRINGCONSTRAINT__GROUP:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::LabelGroup_ptr _t1 =
                dynamic_cast< ::amalthea::LabelGroup* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::LabelGroup >(_t0);*/
        ::amalthea::DataPairingConstraint::setGroup(_t1);
        return;
    }
    }
    throw std::runtime_error(
            "DataPairingConstraint::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean DataPairingConstraint::eIsSet(::ecore::EInt _featureID)
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
    case ::amalthea::AmaltheaPackage::DATAPAIRINGCONSTRAINT__GROUP:
    {
        return (bool) m_group;
    }
    }
    throw std::runtime_error(
            "DataPairingConstraint::eIsSet Error. FeatureID:" + _featureID);
}

void DataPairingConstraint::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "DataPairingConstraint::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr DataPairingConstraint::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getDataPairingConstraint();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void DataPairingConstraint::_inverseAdd(::ecore::EInt _featureID,
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
    case ::amalthea::AmaltheaPackage::DATAPAIRINGCONSTRAINT__GROUP:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void DataPairingConstraint::_inverseRemove(::ecore::EInt _featureID,
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
    case ::amalthea::AmaltheaPackage::DATAPAIRINGCONSTRAINT__GROUP:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

