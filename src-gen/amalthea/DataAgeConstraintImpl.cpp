// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/DataAgeConstraintImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "DataAgeConstraint.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/ReferableBaseObject.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Runnable.hpp>
#include <amalthea/Label.hpp>
#include <amalthea/DataAge.hpp>
#include <amalthea/INamed.hpp>
#include <amalthea/Namespace.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(DataAgeConstraintImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void DataAgeConstraint::_initialize()
{
    // Supertypes
    ::amalthea::ReferableBaseObject::_initialize();

    // References
    if (m_dataAge)
    {
        m_dataAge->_initialize();
    }

    /*PROTECTED REGION ID(DataAgeConstraintImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject DataAgeConstraint::eGet(::ecore::EInt _featureID,
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
    case ::amalthea::AmaltheaPackage::DATAAGECONSTRAINT__RUNNABLE:
    {
        if (m_runnable)
            _any = ::ecore::as < ::ecore::EObject > (m_runnable);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::DATAAGECONSTRAINT__LABEL:
    {
        if (m_label)
            _any = ::ecore::as < ::ecore::EObject > (m_label);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::DATAAGECONSTRAINT__DATAAGE:
    {
        if (m_dataAge)
            _any = ::ecore::as < ::ecore::EObject > (m_dataAge);
        return _any;
    }
    }
    throw std::runtime_error(
            "DataAgeConstraint::eGet Error. FeatureID:" + _featureID);
}

void DataAgeConstraint::eSet(::ecore::EInt _featureID,
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
    case ::amalthea::AmaltheaPackage::DATAAGECONSTRAINT__RUNNABLE:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::Runnable_ptr _t1 =
                dynamic_cast< ::amalthea::Runnable* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::Runnable >(_t0);*/
        ::amalthea::DataAgeConstraint::setRunnable(_t1);
        return;
    }
    case ::amalthea::AmaltheaPackage::DATAAGECONSTRAINT__LABEL:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::Label_ptr _t1 =
                dynamic_cast< ::amalthea::Label* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::Label >(_t0);*/
        ::amalthea::DataAgeConstraint::setLabel(_t1);
        return;
    }
    case ::amalthea::AmaltheaPackage::DATAAGECONSTRAINT__DATAAGE:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::DataAge_ptr _t1 =
                dynamic_cast< ::amalthea::DataAge* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::DataAge >(_t0);*/
        ::amalthea::DataAgeConstraint::setDataAge(_t1);
        return;
    }
    }
    throw std::runtime_error(
            "DataAgeConstraint::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean DataAgeConstraint::eIsSet(::ecore::EInt _featureID)
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
    case ::amalthea::AmaltheaPackage::DATAAGECONSTRAINT__RUNNABLE:
    {
        return (bool) m_runnable;
    }
    case ::amalthea::AmaltheaPackage::DATAAGECONSTRAINT__LABEL:
    {
        return (bool) m_label;
    }
    case ::amalthea::AmaltheaPackage::DATAAGECONSTRAINT__DATAAGE:
    {
        return (bool) m_dataAge;
    }
    }
    throw std::runtime_error(
            "DataAgeConstraint::eIsSet Error. FeatureID:" + _featureID);
}

void DataAgeConstraint::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "DataAgeConstraint::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr DataAgeConstraint::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getDataAgeConstraint();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void DataAgeConstraint::_inverseAdd(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::DATAAGECONSTRAINT__RUNNABLE:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::DATAAGECONSTRAINT__LABEL:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::DATAAGECONSTRAINT__DATAAGE:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void DataAgeConstraint::_inverseRemove(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::DATAAGECONSTRAINT__RUNNABLE:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::DATAAGECONSTRAINT__LABEL:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::DATAAGECONSTRAINT__DATAAGE:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

