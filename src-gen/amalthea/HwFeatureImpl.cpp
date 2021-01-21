// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/HwFeatureImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "HwFeature.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/ReferableBaseObject.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/HwFeatureCategory.hpp>
#include <amalthea/INamed.hpp>
#include <amalthea/Namespace.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(HwFeatureImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void HwFeature::_initialize()
{
    // Supertypes
    ::amalthea::ReferableBaseObject::_initialize();

    // References

    /*PROTECTED REGION ID(HwFeatureImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

std::vector< ::ecore::EString > HwFeature::getNamePrefixSegments()
{
    /*PROTECTED REGION ID(HwFeatureImpl_getNamePrefixSegments) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    throw "UnsupportedOperationException: amalthea::HwFeature::getNamePrefixSegments";
    /*PROTECTED REGION END*/
}

::ecore::EString HwFeature::toString()
{
    /*PROTECTED REGION ID(HwFeatureImpl_toString) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    throw "UnsupportedOperationException: amalthea::HwFeature::toString";
    /*PROTECTED REGION END*/
}

// EObject
::ecore::EJavaObject HwFeature::eGet(::ecore::EInt _featureID,
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
    case ::amalthea::AmaltheaPackage::HWFEATURE__CONTAININGCATEGORY:
    {
        if (m_containingCategory)
            _any = ::ecore::as < ::ecore::EObject > (m_containingCategory);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::HWFEATURE__VALUE:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EDouble
                > ::toAny(_any, m_value);
        return _any;
    }
    }
    throw std::runtime_error("HwFeature::eGet Error. FeatureID:" + _featureID);
}

void HwFeature::eSet(::ecore::EInt _featureID,
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
    case ::amalthea::AmaltheaPackage::HWFEATURE__CONTAININGCATEGORY:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::HwFeatureCategory_ptr _t1 =
                dynamic_cast< ::amalthea::HwFeatureCategory* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::HwFeatureCategory >(_t0);*/
        ::amalthea::HwFeature::setContainingCategory(_t1);
        return;
    }
    case ::amalthea::AmaltheaPackage::HWFEATURE__VALUE:
    {
        ::ecore::EDouble _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EDouble
                > ::fromAny(_newValue, _t0);
        ::amalthea::HwFeature::setValue(_t0);
        return;
    }
    }
    throw std::runtime_error("HwFeature::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean HwFeature::eIsSet(::ecore::EInt _featureID)
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
    case ::amalthea::AmaltheaPackage::HWFEATURE__CONTAININGCATEGORY:
    {
        return (bool) m_containingCategory;
    }
    case ::amalthea::AmaltheaPackage::HWFEATURE__VALUE:
    {
        return m_value != 0.0;
    }
    }
    throw std::runtime_error(
            "HwFeature::eIsSet Error. FeatureID:" + _featureID);
}

void HwFeature::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "HwFeature::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr HwFeature::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getHwFeature();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void HwFeature::_inverseAdd(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::HWFEATURE__CONTAININGCATEGORY:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::HwFeatureCategory_ptr _t1 =
                dynamic_cast< ::amalthea::HwFeatureCategory* >(_t0.get());

        // set reference
        basicsetContainingCategory(_t1);
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void HwFeature::_inverseRemove(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::HWFEATURE__CONTAININGCATEGORY:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_oldValue);
        ::amalthea::HwFeatureCategory_ptr _t1 =
                dynamic_cast< ::amalthea::HwFeatureCategory* >(_t0.get());

        // set reference
        if (basicgetContainingCategory() == _t1)
            basicsetContainingCategory(nullptr);
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

