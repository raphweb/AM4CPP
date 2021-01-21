// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/ModeLabelConditionImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "ModeLabelCondition.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/ModeCondition.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/ModeLabel.hpp>
#include <amalthea/ModeValueMapEntry.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(ModeLabelConditionImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void ModeLabelCondition::_initialize()
{
    // Supertypes
    ::amalthea::ModeCondition::_initialize();

    // References

    /*PROTECTED REGION ID(ModeLabelConditionImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

::ecore::EBoolean ModeLabelCondition::isSatisfiedBy(
        std::vector< ::amalthea::ModeValueMapEntry_ptr > _context)
{
    /*PROTECTED REGION ID(ModeLabelConditionImpl_isSatisfiedBy) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    throw "UnsupportedOperationException: amalthea::ModeLabelCondition::isSatisfiedBy";
    /*PROTECTED REGION END*/
}

// EObject
::ecore::EJavaObject ModeLabelCondition::eGet(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EBoolean _resolve)
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
        return amalthea::ModeCondition::eGet(_featureID, _resolve);
    }
    case ::amalthea::AmaltheaPackage::MODELABELCONDITION__LABEL1:
    {
        if (m_label1)
            _any = ::ecore::as < ::ecore::EObject > (m_label1);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::MODELABELCONDITION__LABEL2:
    {
        if (m_label2)
            _any = ::ecore::as < ::ecore::EObject > (m_label2);
        return _any;
    }
    }
    throw std::runtime_error(
            "ModeLabelCondition::eGet Error. FeatureID:" + _featureID);
}

void ModeLabelCondition::eSet(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
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
        amalthea::ModeCondition::eSet(_featureID, _newValue);
        return;
    }
    case ::amalthea::AmaltheaPackage::MODELABELCONDITION__LABEL1:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::ModeLabel_ptr _t1 =
                dynamic_cast< ::amalthea::ModeLabel* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::ModeLabel >(_t0);*/
        ::amalthea::ModeLabelCondition::setLabel1(_t1);
        return;
    }
    case ::amalthea::AmaltheaPackage::MODELABELCONDITION__LABEL2:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::ModeLabel_ptr _t1 =
                dynamic_cast< ::amalthea::ModeLabel* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::ModeLabel >(_t0);*/
        ::amalthea::ModeLabelCondition::setLabel2(_t1);
        return;
    }
    }
    throw std::runtime_error(
            "ModeLabelCondition::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean ModeLabelCondition::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        return amalthea::IAnnotatable::eIsSet(_featureID);
    }
    case ::amalthea::AmaltheaPackage::MODECONDITION__RELATION:
    {
        return amalthea::ModeCondition::eIsSet(_featureID);
    }
    case ::amalthea::AmaltheaPackage::MODELABELCONDITION__LABEL1:
    {
        return (bool) m_label1;
    }
    case ::amalthea::AmaltheaPackage::MODELABELCONDITION__LABEL2:
    {
        return (bool) m_label2;
    }
    }
    throw std::runtime_error(
            "ModeLabelCondition::eIsSet Error. FeatureID:" + _featureID);
}

void ModeLabelCondition::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "ModeLabelCondition::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr ModeLabelCondition::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getModeLabelCondition();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void ModeLabelCondition::_inverseAdd(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::MODELABELCONDITION__LABEL1:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::MODELABELCONDITION__LABEL2:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void ModeLabelCondition::_inverseRemove(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::MODELABELCONDITION__LABEL1:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::MODELABELCONDITION__LABEL2:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

