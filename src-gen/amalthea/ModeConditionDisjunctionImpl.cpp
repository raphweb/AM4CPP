// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/ModeConditionDisjunctionImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "ModeConditionDisjunction.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/BaseObject.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/ModeConditionDisjunctionEntry.hpp>
#include <amalthea/ModeValueMapEntry.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(ModeConditionDisjunctionImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void ModeConditionDisjunction::_initialize()
{
    // Supertypes
    ::amalthea::BaseObject::_initialize();

    // References
    for (size_t i = 0; i < m_entries->size(); i++)
    {
        (*m_entries)[i]->_initialize();
    }

    /*PROTECTED REGION ID(ModeConditionDisjunctionImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

::ecore::EBoolean ModeConditionDisjunction::isSatisfiedBy(
        std::vector< ::amalthea::ModeValueMapEntry_ptr > _context)
{
    /*PROTECTED REGION ID(ModeConditionDisjunctionImpl_isSatisfiedBy) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    throw "UnsupportedOperationException: amalthea::ModeConditionDisjunction::isSatisfiedBy";
    /*PROTECTED REGION END*/
}

// EObject
::ecore::EJavaObject ModeConditionDisjunction::eGet(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        return amalthea::IAnnotatable::eGet(_featureID, _resolve);
    }
    case ::amalthea::AmaltheaPackage::MODECONDITIONDISJUNCTION__ENTRIES:
    {
        _any = m_entries->asEListOf< ::ecore::EObject_ptr >();
        return _any;
    }
    }
    throw std::runtime_error(
            "ModeConditionDisjunction::eGet Error. FeatureID:" + _featureID);
}

void ModeConditionDisjunction::eSet(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        amalthea::IAnnotatable::eSet(_featureID, _newValue);
        return;
    }
    case ::amalthea::AmaltheaPackage::MODECONDITIONDISJUNCTION__ENTRIES:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::amalthea::ModeConditionDisjunction::getEntries().clear();
        ::amalthea::ModeConditionDisjunction::getEntries().insert_all(*_t0);
        return;
    }
    }
    throw std::runtime_error(
            "ModeConditionDisjunction::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean ModeConditionDisjunction::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        return amalthea::IAnnotatable::eIsSet(_featureID);
    }
    case ::amalthea::AmaltheaPackage::MODECONDITIONDISJUNCTION__ENTRIES:
    {
        return m_entries && m_entries->size();
    }
    }
    throw std::runtime_error(
            "ModeConditionDisjunction::eIsSet Error. FeatureID:" + _featureID);
}

void ModeConditionDisjunction::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "ModeConditionDisjunction::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr ModeConditionDisjunction::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getModeConditionDisjunction();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void ModeConditionDisjunction::_inverseAdd(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::MODECONDITIONDISJUNCTION__ENTRIES:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void ModeConditionDisjunction::_inverseRemove(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::MODECONDITIONDISJUNCTION__ENTRIES:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

