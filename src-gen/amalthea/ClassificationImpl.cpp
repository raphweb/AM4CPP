// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/ClassificationImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "Classification.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/BaseObject.hpp>
#include <amalthea/CustomProperty.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(ClassificationImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void Classification::_initialize()
{
    // Supertypes
    ::amalthea::BaseObject::_initialize();

    // References

    /*PROTECTED REGION ID(ClassificationImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject Classification::eGet(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        return amalthea::IAnnotatable::eGet(_featureID, _resolve);
    }
    case ::amalthea::AmaltheaPackage::CLASSIFICATION__CONDITION:
    {
        ::ecorecpp::mapping::any_traits < ::amalthea::Condition
                > ::toAny(_any, m_condition);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::CLASSIFICATION__GROUPING:
    {
        ::ecorecpp::mapping::any_traits < ::amalthea::GroupingType
                > ::toAny(_any, m_grouping);
        return _any;
    }
    }
    throw std::runtime_error(
            "Classification::eGet Error. FeatureID:" + _featureID);
}

void Classification::eSet(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        amalthea::IAnnotatable::eSet(_featureID, _newValue);
        return;
    }
    case ::amalthea::AmaltheaPackage::CLASSIFICATION__CONDITION:
    {
        ::amalthea::Condition _t0;
        ::ecorecpp::mapping::any_traits < ::amalthea::Condition
                > ::fromAny(_newValue, _t0);
        ::amalthea::Classification::setCondition(_t0);
        return;
    }
    case ::amalthea::AmaltheaPackage::CLASSIFICATION__GROUPING:
    {
        ::amalthea::GroupingType _t0;
        ::ecorecpp::mapping::any_traits < ::amalthea::GroupingType
                > ::fromAny(_newValue, _t0);
        ::amalthea::Classification::setGrouping(_t0);
        return;
    }
    }
    throw std::runtime_error(
            "Classification::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean Classification::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        return amalthea::IAnnotatable::eIsSet(_featureID);
    }
    case ::amalthea::AmaltheaPackage::CLASSIFICATION__CONDITION:
    {
        return ::ecorecpp::mapping::set_traits < ::amalthea::Condition
                > ::is_set(m_condition);
    }
    case ::amalthea::AmaltheaPackage::CLASSIFICATION__GROUPING:
    {
        return ::ecorecpp::mapping::set_traits < ::amalthea::GroupingType
                > ::is_set(m_grouping);
    }
    }
    throw std::runtime_error(
            "Classification::eIsSet Error. FeatureID:" + _featureID);
}

void Classification::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "Classification::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr Classification::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getClassification();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void Classification::_inverseAdd(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void Classification::_inverseRemove(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

