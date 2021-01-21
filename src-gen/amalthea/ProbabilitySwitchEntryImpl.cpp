// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/ProbabilitySwitchEntryImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "ProbabilitySwitchEntry.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/BaseObject.hpp>
#include <amalthea/IActivityGraphItemContainer.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/ActivityGraphItem.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(ProbabilitySwitchEntryImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void ProbabilitySwitchEntry::_initialize()
{
    // Supertypes
    ::amalthea::BaseObject::_initialize();
    ::amalthea::IActivityGraphItemContainer::_initialize();

    // References

    /*PROTECTED REGION ID(ProbabilitySwitchEntryImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject ProbabilitySwitchEntry::eGet(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        return amalthea::IAnnotatable::eGet(_featureID, _resolve);
    }
    case ::amalthea::AmaltheaPackage::IACTIVITYGRAPHITEMCONTAINER__ITEMS:
    {
        return amalthea::IActivityGraphItemContainer::eGet(_featureID, _resolve);
    }
    case ::amalthea::AmaltheaPackage::PROBABILITYSWITCHENTRY__PROBABILITY:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EDouble
                > ::toAny(_any, m_probability);
        return _any;
    }
    }
    throw std::runtime_error(
            "ProbabilitySwitchEntry::eGet Error. FeatureID:" + _featureID);
}

void ProbabilitySwitchEntry::eSet(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        amalthea::IAnnotatable::eSet(_featureID, _newValue);
        return;
    }
    case ::amalthea::AmaltheaPackage::IACTIVITYGRAPHITEMCONTAINER__ITEMS:
    {
        amalthea::IActivityGraphItemContainer::eSet(_featureID, _newValue);
        return;
    }
    case ::amalthea::AmaltheaPackage::PROBABILITYSWITCHENTRY__PROBABILITY:
    {
        ::ecore::EDouble _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EDouble
                > ::fromAny(_newValue, _t0);
        ::amalthea::ProbabilitySwitchEntry::setProbability(_t0);
        return;
    }
    }
    throw std::runtime_error(
            "ProbabilitySwitchEntry::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean ProbabilitySwitchEntry::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        return amalthea::IAnnotatable::eIsSet(_featureID);
    }
    case ::amalthea::AmaltheaPackage::IACTIVITYGRAPHITEMCONTAINER__ITEMS:
    {
        return amalthea::IActivityGraphItemContainer::eIsSet(_featureID);
    }
    case ::amalthea::AmaltheaPackage::PROBABILITYSWITCHENTRY__PROBABILITY:
    {
        return m_probability != 0.0;
    }
    }
    throw std::runtime_error(
            "ProbabilitySwitchEntry::eIsSet Error. FeatureID:" + _featureID);
}

void ProbabilitySwitchEntry::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "ProbabilitySwitchEntry::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr ProbabilitySwitchEntry::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getProbabilitySwitchEntry();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void ProbabilitySwitchEntry::_inverseAdd(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::IACTIVITYGRAPHITEMCONTAINER__ITEMS:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void ProbabilitySwitchEntry::_inverseRemove(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::IACTIVITYGRAPHITEMCONTAINER__ITEMS:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

