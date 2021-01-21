// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/CoreClassificationImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "CoreClassification.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/Classification.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/CoreClassifier.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(CoreClassificationImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void CoreClassification::_initialize()
{
    // Supertypes
    ::amalthea::Classification::_initialize();

    // References

    /*PROTECTED REGION ID(CoreClassificationImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject CoreClassification::eGet(::ecore::EInt _featureID,
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
    case ::amalthea::AmaltheaPackage::CLASSIFICATION__GROUPING:
    {
        return amalthea::Classification::eGet(_featureID, _resolve);
    }
    case ::amalthea::AmaltheaPackage::CORECLASSIFICATION__CLASSIFIERS:
    {
        _any = m_classifiers->asEListOf< ::ecore::EObject_ptr >();
        return _any;
    }
    }
    throw std::runtime_error(
            "CoreClassification::eGet Error. FeatureID:" + _featureID);
}

void CoreClassification::eSet(::ecore::EInt _featureID,
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
    case ::amalthea::AmaltheaPackage::CLASSIFICATION__GROUPING:
    {
        amalthea::Classification::eSet(_featureID, _newValue);
        return;
    }
    case ::amalthea::AmaltheaPackage::CORECLASSIFICATION__CLASSIFIERS:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::amalthea::CoreClassification::getClassifiers().clear();
        ::amalthea::CoreClassification::getClassifiers().insert_all(*_t0);
        return;
    }
    }
    throw std::runtime_error(
            "CoreClassification::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean CoreClassification::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        return amalthea::IAnnotatable::eIsSet(_featureID);
    }
    case ::amalthea::AmaltheaPackage::CLASSIFICATION__CONDITION:
    case ::amalthea::AmaltheaPackage::CLASSIFICATION__GROUPING:
    {
        return amalthea::Classification::eIsSet(_featureID);
    }
    case ::amalthea::AmaltheaPackage::CORECLASSIFICATION__CLASSIFIERS:
    {
        return m_classifiers && m_classifiers->size();
    }
    }
    throw std::runtime_error(
            "CoreClassification::eIsSet Error. FeatureID:" + _featureID);
}

void CoreClassification::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "CoreClassification::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr CoreClassification::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getCoreClassification();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void CoreClassification::_inverseAdd(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::CORECLASSIFICATION__CLASSIFIERS:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void CoreClassification::_inverseRemove(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::CORECLASSIFICATION__CLASSIFIERS:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

