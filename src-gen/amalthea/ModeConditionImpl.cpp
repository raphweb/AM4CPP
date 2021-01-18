// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/ModeConditionImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "ModeCondition.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/ModeConditionDisjunctionEntry.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/ModeValueMapEntry.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(ModeConditionImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void ModeCondition::_initialize()
{
    // Supertypes
    ::amalthea::ModeConditionDisjunctionEntry::_initialize();

    // References

    /*PROTECTED REGION ID(ModeConditionImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

::ecore::EBoolean ModeCondition::isSatisfiedBy(
        std::vector< ::amalthea::ModeValueMapEntry_ptr > _context)
{
    /*PROTECTED REGION ID(ModeConditionImpl_isSatisfiedBy) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    throw "UnsupportedOperationException: amalthea::ModeCondition::isSatisfiedBy";
    /*PROTECTED REGION END*/
}

// EObject
::ecore::EJavaObject ModeCondition::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        return amalthea::IAnnotatable::eGet(_featureID, _resolve);
    }
    case ::amalthea::AmaltheaPackage::MODECONDITION__RELATION:
    {
        ::ecorecpp::mapping::any_traits < ::amalthea::RelationalOperator
                > ::toAny(_any, m_relation);
        return _any;
    }
    }
    throw std::runtime_error(
            "ModeCondition::eGet Error. FeatureID:" + _featureID);
}

void ModeCondition::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        amalthea::IAnnotatable::eSet(_featureID, _newValue);
        return;
    }
    case ::amalthea::AmaltheaPackage::MODECONDITION__RELATION:
    {
        ::amalthea::RelationalOperator _t0;
        ::ecorecpp::mapping::any_traits < ::amalthea::RelationalOperator
                > ::fromAny(_newValue, _t0);
        ::amalthea::ModeCondition::setRelation(_t0);
        return;
    }
    }
    throw std::runtime_error(
            "ModeCondition::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean ModeCondition::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        return amalthea::IAnnotatable::eIsSet(_featureID);
    }
    case ::amalthea::AmaltheaPackage::MODECONDITION__RELATION:
    {
        return ::ecorecpp::mapping::set_traits < ::amalthea::RelationalOperator
                > ::is_set(m_relation);
    }
    }
    throw std::runtime_error(
            "ModeCondition::eIsSet Error. FeatureID:" + _featureID);
}

void ModeCondition::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "ModeCondition::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr ModeCondition::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getModeCondition();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void ModeCondition::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
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
void ModeCondition::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_oldValue)
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

