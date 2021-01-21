// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/ProcessingUnitDefinitionImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "ProcessingUnitDefinition.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/HwDefinition.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Tag.hpp>
#include <amalthea/HwFeature.hpp>
#include <amalthea/CoreClassifier.hpp>
#include <amalthea/INamed.hpp>
#include <amalthea/Namespace.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(ProcessingUnitDefinitionImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void ProcessingUnitDefinition::_initialize()
{
    // Supertypes
    ::amalthea::HwDefinition::_initialize();

    // References

    /*PROTECTED REGION ID(ProcessingUnitDefinitionImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject ProcessingUnitDefinition::eGet(::ecore::EInt _featureID,
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
    case ::amalthea::AmaltheaPackage::ITAGGABLE__TAGS:
    {
        return amalthea::ITaggable::eGet(_featureID, _resolve);
    }
    case ::amalthea::AmaltheaPackage::PROCESSINGUNITDEFINITION__PUTYPE:
    {
        ::ecorecpp::mapping::any_traits < ::amalthea::PuType
                > ::toAny(_any, m_puType);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::PROCESSINGUNITDEFINITION__FEATURES:
    {
        _any = m_features->asEListOf< ::ecore::EObject_ptr >();
        return _any;
    }
    case ::amalthea::AmaltheaPackage::PROCESSINGUNITDEFINITION__CLASSIFIERS:
    {
        _any = m_classifiers->asEListOf< ::ecore::EObject_ptr >();
        return _any;
    }
    }
    throw std::runtime_error(
            "ProcessingUnitDefinition::eGet Error. FeatureID:" + _featureID);
}

void ProcessingUnitDefinition::eSet(::ecore::EInt _featureID,
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
    case ::amalthea::AmaltheaPackage::ITAGGABLE__TAGS:
    {
        amalthea::ITaggable::eSet(_featureID, _newValue);
        return;
    }
    case ::amalthea::AmaltheaPackage::PROCESSINGUNITDEFINITION__PUTYPE:
    {
        ::amalthea::PuType _t0;
        ::ecorecpp::mapping::any_traits < ::amalthea::PuType
                > ::fromAny(_newValue, _t0);
        ::amalthea::ProcessingUnitDefinition::setPuType(_t0);
        return;
    }
    case ::amalthea::AmaltheaPackage::PROCESSINGUNITDEFINITION__FEATURES:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::amalthea::ProcessingUnitDefinition::getFeatures().clear();
        ::amalthea::ProcessingUnitDefinition::getFeatures().insert_all(*_t0);
        return;
    }
    case ::amalthea::AmaltheaPackage::PROCESSINGUNITDEFINITION__CLASSIFIERS:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::amalthea::ProcessingUnitDefinition::getClassifiers().clear();
        ::amalthea::ProcessingUnitDefinition::getClassifiers().insert_all(*_t0);
        return;
    }
    }
    throw std::runtime_error(
            "ProcessingUnitDefinition::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean ProcessingUnitDefinition::eIsSet(::ecore::EInt _featureID)
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
    case ::amalthea::AmaltheaPackage::ITAGGABLE__TAGS:
    {
        return amalthea::ITaggable::eIsSet(_featureID);
    }
    case ::amalthea::AmaltheaPackage::PROCESSINGUNITDEFINITION__PUTYPE:
    {
        return ::ecorecpp::mapping::set_traits < ::amalthea::PuType
                > ::is_set(m_puType);
    }
    case ::amalthea::AmaltheaPackage::PROCESSINGUNITDEFINITION__FEATURES:
    {
        return m_features && m_features->size();
    }
    case ::amalthea::AmaltheaPackage::PROCESSINGUNITDEFINITION__CLASSIFIERS:
    {
        return m_classifiers && m_classifiers->size();
    }
    }
    throw std::runtime_error(
            "ProcessingUnitDefinition::eIsSet Error. FeatureID:" + _featureID);
}

void ProcessingUnitDefinition::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "ProcessingUnitDefinition::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr ProcessingUnitDefinition::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getProcessingUnitDefinition();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void ProcessingUnitDefinition::_inverseAdd(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::ITAGGABLE__TAGS:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::PROCESSINGUNITDEFINITION__FEATURES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::PROCESSINGUNITDEFINITION__CLASSIFIERS:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void ProcessingUnitDefinition::_inverseRemove(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::ITAGGABLE__TAGS:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::PROCESSINGUNITDEFINITION__FEATURES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::PROCESSINGUNITDEFINITION__CLASSIFIERS:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

