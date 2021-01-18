// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/CommonElementsImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "CommonElements.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/BaseObject.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Tag.hpp>
#include <amalthea/Namespace.hpp>
#include <amalthea/CoreClassifier.hpp>
#include <amalthea/MemoryClassifier.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(CommonElementsImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void CommonElements::_initialize()
{
    // Supertypes
    ::amalthea::BaseObject::_initialize();

    // References
    for (size_t i = 0; i < m_tags->size(); i++)
    {
        (*m_tags)[i]->_initialize();
    }
    for (size_t i = 0; i < m_namespaces->size(); i++)
    {
        (*m_namespaces)[i]->_initialize();
    }
    for (size_t i = 0; i < m_coreClassifiers->size(); i++)
    {
        (*m_coreClassifiers)[i]->_initialize();
    }
    for (size_t i = 0; i < m_memoryClassifiers->size(); i++)
    {
        (*m_memoryClassifiers)[i]->_initialize();
    }

    /*PROTECTED REGION ID(CommonElementsImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject CommonElements::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        return amalthea::IAnnotatable::eGet(_featureID, _resolve);
    }
    case ::amalthea::AmaltheaPackage::COMMONELEMENTS__TAGS:
    {
        _any = m_tags->asEListOf< ::ecore::EObject_ptr >();
        return _any;
    }
    case ::amalthea::AmaltheaPackage::COMMONELEMENTS__NAMESPACES:
    {
        _any = m_namespaces->asEListOf< ::ecore::EObject_ptr >();
        return _any;
    }
    case ::amalthea::AmaltheaPackage::COMMONELEMENTS__CORECLASSIFIERS:
    {
        _any = m_coreClassifiers->asEListOf< ::ecore::EObject_ptr >();
        return _any;
    }
    case ::amalthea::AmaltheaPackage::COMMONELEMENTS__MEMORYCLASSIFIERS:
    {
        _any = m_memoryClassifiers->asEListOf< ::ecore::EObject_ptr >();
        return _any;
    }
    }
    throw std::runtime_error(
            "CommonElements::eGet Error. FeatureID:" + _featureID);
}

void CommonElements::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        amalthea::IAnnotatable::eSet(_featureID, _newValue);
        return;
    }
    case ::amalthea::AmaltheaPackage::COMMONELEMENTS__TAGS:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::amalthea::CommonElements::getTags().clear();
        ::amalthea::CommonElements::getTags().insert_all(*_t0);
        return;
    }
    case ::amalthea::AmaltheaPackage::COMMONELEMENTS__NAMESPACES:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::amalthea::CommonElements::getNamespaces().clear();
        ::amalthea::CommonElements::getNamespaces().insert_all(*_t0);
        return;
    }
    case ::amalthea::AmaltheaPackage::COMMONELEMENTS__CORECLASSIFIERS:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::amalthea::CommonElements::getCoreClassifiers().clear();
        ::amalthea::CommonElements::getCoreClassifiers().insert_all(*_t0);
        return;
    }
    case ::amalthea::AmaltheaPackage::COMMONELEMENTS__MEMORYCLASSIFIERS:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::amalthea::CommonElements::getMemoryClassifiers().clear();
        ::amalthea::CommonElements::getMemoryClassifiers().insert_all(*_t0);
        return;
    }
    }
    throw std::runtime_error(
            "CommonElements::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean CommonElements::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        return amalthea::IAnnotatable::eIsSet(_featureID);
    }
    case ::amalthea::AmaltheaPackage::COMMONELEMENTS__TAGS:
    {
        return m_tags && m_tags->size();
    }
    case ::amalthea::AmaltheaPackage::COMMONELEMENTS__NAMESPACES:
    {
        return m_namespaces && m_namespaces->size();
    }
    case ::amalthea::AmaltheaPackage::COMMONELEMENTS__CORECLASSIFIERS:
    {
        return m_coreClassifiers && m_coreClassifiers->size();
    }
    case ::amalthea::AmaltheaPackage::COMMONELEMENTS__MEMORYCLASSIFIERS:
    {
        return m_memoryClassifiers && m_memoryClassifiers->size();
    }
    }
    throw std::runtime_error(
            "CommonElements::eIsSet Error. FeatureID:" + _featureID);
}

void CommonElements::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "CommonElements::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr CommonElements::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getCommonElements();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void CommonElements::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::COMMONELEMENTS__TAGS:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::COMMONELEMENTS__NAMESPACES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::COMMONELEMENTS__CORECLASSIFIERS:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::COMMONELEMENTS__MEMORYCLASSIFIERS:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void CommonElements::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::COMMONELEMENTS__TAGS:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::COMMONELEMENTS__NAMESPACES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::COMMONELEMENTS__CORECLASSIFIERS:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::COMMONELEMENTS__MEMORYCLASSIFIERS:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

