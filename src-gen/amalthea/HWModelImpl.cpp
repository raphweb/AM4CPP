// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/HWModelImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "HWModel.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/BaseObject.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/HwDefinition.hpp>
#include <amalthea/HwFeatureCategory.hpp>
#include <amalthea/HwStructure.hpp>
#include <amalthea/HwDomain.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(HWModelImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void HWModel::_initialize()
{
    // Supertypes
    ::amalthea::BaseObject::_initialize();

    // References
    for (size_t i = 0; i < m_definitions->size(); i++)
    {
        (*m_definitions)[i]->_initialize();
    }
    for (size_t i = 0; i < m_featureCategories->size(); i++)
    {
        (*m_featureCategories)[i]->_initialize();
    }
    for (size_t i = 0; i < m_structures->size(); i++)
    {
        (*m_structures)[i]->_initialize();
    }
    for (size_t i = 0; i < m_domains->size(); i++)
    {
        (*m_domains)[i]->_initialize();
    }

    /*PROTECTED REGION ID(HWModelImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject HWModel::eGet(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        return amalthea::IAnnotatable::eGet(_featureID, _resolve);
    }
    case ::amalthea::AmaltheaPackage::HWMODEL__DEFINITIONS:
    {
        _any = m_definitions->asEListOf< ::ecore::EObject_ptr >();
        return _any;
    }
    case ::amalthea::AmaltheaPackage::HWMODEL__FEATURECATEGORIES:
    {
        _any = m_featureCategories->asEListOf< ::ecore::EObject_ptr >();
        return _any;
    }
    case ::amalthea::AmaltheaPackage::HWMODEL__STRUCTURES:
    {
        _any = m_structures->asEListOf< ::ecore::EObject_ptr >();
        return _any;
    }
    case ::amalthea::AmaltheaPackage::HWMODEL__DOMAINS:
    {
        _any = m_domains->asEListOf< ::ecore::EObject_ptr >();
        return _any;
    }
    }
    throw std::runtime_error("HWModel::eGet Error. FeatureID:" + _featureID);
}

void HWModel::eSet(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        amalthea::IAnnotatable::eSet(_featureID, _newValue);
        return;
    }
    case ::amalthea::AmaltheaPackage::HWMODEL__DEFINITIONS:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::amalthea::HWModel::getDefinitions().clear();
        ::amalthea::HWModel::getDefinitions().insert_all(*_t0);
        return;
    }
    case ::amalthea::AmaltheaPackage::HWMODEL__FEATURECATEGORIES:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::amalthea::HWModel::getFeatureCategories().clear();
        ::amalthea::HWModel::getFeatureCategories().insert_all(*_t0);
        return;
    }
    case ::amalthea::AmaltheaPackage::HWMODEL__STRUCTURES:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::amalthea::HWModel::getStructures().clear();
        ::amalthea::HWModel::getStructures().insert_all(*_t0);
        return;
    }
    case ::amalthea::AmaltheaPackage::HWMODEL__DOMAINS:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::amalthea::HWModel::getDomains().clear();
        ::amalthea::HWModel::getDomains().insert_all(*_t0);
        return;
    }
    }
    throw std::runtime_error("HWModel::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean HWModel::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        return amalthea::IAnnotatable::eIsSet(_featureID);
    }
    case ::amalthea::AmaltheaPackage::HWMODEL__DEFINITIONS:
    {
        return m_definitions && m_definitions->size();
    }
    case ::amalthea::AmaltheaPackage::HWMODEL__FEATURECATEGORIES:
    {
        return m_featureCategories && m_featureCategories->size();
    }
    case ::amalthea::AmaltheaPackage::HWMODEL__STRUCTURES:
    {
        return m_structures && m_structures->size();
    }
    case ::amalthea::AmaltheaPackage::HWMODEL__DOMAINS:
    {
        return m_domains && m_domains->size();
    }
    }
    throw std::runtime_error("HWModel::eIsSet Error. FeatureID:" + _featureID);
}

void HWModel::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error("HWModel::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr HWModel::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getHWModel();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void HWModel::_inverseAdd(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::HWMODEL__DEFINITIONS:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::HWMODEL__FEATURECATEGORIES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::HWMODEL__STRUCTURES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::HWMODEL__DOMAINS:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void HWModel::_inverseRemove(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::HWMODEL__DEFINITIONS:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::HWMODEL__FEATURECATEGORIES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::HWMODEL__STRUCTURES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::HWMODEL__DOMAINS:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

