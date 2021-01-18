// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/MemoryClassificationImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "MemoryClassification.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/Classification.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/MemoryClassifier.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(MemoryClassificationImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void MemoryClassification::_initialize()
{
    // Supertypes
    ::amalthea::Classification::_initialize();

    // References

    /*PROTECTED REGION ID(MemoryClassificationImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject MemoryClassification::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
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
    case ::amalthea::AmaltheaPackage::MEMORYCLASSIFICATION__CLASSIFIERS:
    {
        _any = m_classifiers->asEListOf< ::ecore::EObject_ptr >();
        return _any;
    }
    }
    throw std::runtime_error(
            "MemoryClassification::eGet Error. FeatureID:" + _featureID);
}

void MemoryClassification::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
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
    case ::amalthea::AmaltheaPackage::MEMORYCLASSIFICATION__CLASSIFIERS:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::amalthea::MemoryClassification::getClassifiers().clear();
        ::amalthea::MemoryClassification::getClassifiers().insert_all(*_t0);
        return;
    }
    }
    throw std::runtime_error(
            "MemoryClassification::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean MemoryClassification::eIsSet(::ecore::EInt _featureID)
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
    case ::amalthea::AmaltheaPackage::MEMORYCLASSIFICATION__CLASSIFIERS:
    {
        return m_classifiers && m_classifiers->size();
    }
    }
    throw std::runtime_error(
            "MemoryClassification::eIsSet Error. FeatureID:" + _featureID);
}

void MemoryClassification::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "MemoryClassification::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr MemoryClassification::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getMemoryClassification();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void MemoryClassification::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::MEMORYCLASSIFICATION__CLASSIFIERS:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void MemoryClassification::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::MEMORYCLASSIFICATION__CLASSIFIERS:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

