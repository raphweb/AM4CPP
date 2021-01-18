// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/ModeValueMapEntryImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "ModeValueMapEntry.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/ModeLabel.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(ModeValueMapEntryImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void ModeValueMapEntry::_initialize()
{
    // Supertypes

    // References

    /*PROTECTED REGION ID(ModeValueMapEntryImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject ModeValueMapEntry::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::MODEVALUEMAPENTRY__KEY:
    {
        if (m_key)
            _any = ::ecore::as < ::ecore::EObject > (m_key);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::MODEVALUEMAPENTRY__VALUE:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::toAny(_any, m_value);
        return _any;
    }
    }
    throw std::runtime_error(
            "ModeValueMapEntry::eGet Error. FeatureID:" + _featureID);
}

void ModeValueMapEntry::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::MODEVALUEMAPENTRY__KEY:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::ModeLabel_ptr _t1 =
                dynamic_cast< ::amalthea::ModeLabel* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::ModeLabel >(_t0);*/
        ::amalthea::ModeValueMapEntry::setKey(_t1);
        return;
    }
    case ::amalthea::AmaltheaPackage::MODEVALUEMAPENTRY__VALUE:
    {
        ::ecore::EString _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::fromAny(_newValue, _t0);
        ::amalthea::ModeValueMapEntry::setValue(_t0);
        return;
    }
    }
    throw std::runtime_error(
            "ModeValueMapEntry::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean ModeValueMapEntry::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::MODEVALUEMAPENTRY__KEY:
    {
        return (bool) m_key;
    }
    case ::amalthea::AmaltheaPackage::MODEVALUEMAPENTRY__VALUE:
    {
        return ::ecorecpp::mapping::set_traits < ::ecore::EString
                > ::is_set(m_value);
    }
    }
    throw std::runtime_error(
            "ModeValueMapEntry::eIsSet Error. FeatureID:" + _featureID);
}

void ModeValueMapEntry::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "ModeValueMapEntry::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr ModeValueMapEntry::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getModeValueMapEntry();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void ModeValueMapEntry::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::MODEVALUEMAPENTRY__KEY:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void ModeValueMapEntry::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::MODEVALUEMAPENTRY__KEY:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

