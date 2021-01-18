// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/ProcessingUnitImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "ProcessingUnit.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/HwModule.hpp>
#include <amalthea/HwDestination.hpp>
#include <amalthea/HwPathElement.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Tag.hpp>
#include <amalthea/HwPort.hpp>
#include <amalthea/PowerDomain.hpp>
#include <amalthea/FrequencyDomain.hpp>
#include <amalthea/ProcessingUnitDefinition.hpp>
#include <amalthea/HwAccessElement.hpp>
#include <amalthea/Cache.hpp>
#include <amalthea/INamed.hpp>
#include <amalthea/Namespace.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(ProcessingUnitImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void ProcessingUnit::_initialize()
{
    // Supertypes
    ::amalthea::HwModule::_initialize();
    ::amalthea::HwDestination::_initialize();
    ::amalthea::HwPathElement::_initialize();

    // References
    for (size_t i = 0; i < m_accessElements->size(); i++)
    {
        (*m_accessElements)[i]->_initialize();
    }
    for (size_t i = 0; i < m_caches->size(); i++)
    {
        (*m_caches)[i]->_initialize();
    }

    /*PROTECTED REGION ID(ProcessingUnitImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject ProcessingUnit::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
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
    case ::amalthea::AmaltheaPackage::HWMODULE__PORTS:
    case ::amalthea::AmaltheaPackage::HWMODULE__POWERDOMAIN:
    case ::amalthea::AmaltheaPackage::HWMODULE__FREQUENCYDOMAIN:
    {
        return amalthea::HwModule::eGet(_featureID, _resolve);
    }
    case ::amalthea::AmaltheaPackage::PROCESSINGUNIT__DEFINITION:
    {
        if (m_definition)
            _any = ::ecore::as < ::ecore::EObject > (m_definition);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::PROCESSINGUNIT__ACCESSELEMENTS:
    {
        _any = m_accessElements->asEListOf< ::ecore::EObject_ptr >();
        return _any;
    }
    case ::amalthea::AmaltheaPackage::PROCESSINGUNIT__CACHES:
    {
        _any = m_caches->asEListOf< ::ecore::EObject_ptr >();
        return _any;
    }
    }
    throw std::runtime_error(
            "ProcessingUnit::eGet Error. FeatureID:" + _featureID);
}

void ProcessingUnit::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
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
    case ::amalthea::AmaltheaPackage::HWMODULE__PORTS:
    case ::amalthea::AmaltheaPackage::HWMODULE__POWERDOMAIN:
    case ::amalthea::AmaltheaPackage::HWMODULE__FREQUENCYDOMAIN:
    {
        amalthea::HwModule::eSet(_featureID, _newValue);
        return;
    }
    case ::amalthea::AmaltheaPackage::PROCESSINGUNIT__DEFINITION:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::ProcessingUnitDefinition_ptr _t1 =
                dynamic_cast< ::amalthea::ProcessingUnitDefinition* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::ProcessingUnitDefinition >(_t0);*/
        ::amalthea::ProcessingUnit::setDefinition(_t1);
        return;
    }
    case ::amalthea::AmaltheaPackage::PROCESSINGUNIT__ACCESSELEMENTS:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::amalthea::ProcessingUnit::getAccessElements().clear();
        ::amalthea::ProcessingUnit::getAccessElements().insert_all(*_t0);
        return;
    }
    case ::amalthea::AmaltheaPackage::PROCESSINGUNIT__CACHES:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::amalthea::ProcessingUnit::getCaches().clear();
        ::amalthea::ProcessingUnit::getCaches().insert_all(*_t0);
        return;
    }
    }
    throw std::runtime_error(
            "ProcessingUnit::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean ProcessingUnit::eIsSet(::ecore::EInt _featureID)
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
    case ::amalthea::AmaltheaPackage::HWMODULE__PORTS:
    case ::amalthea::AmaltheaPackage::HWMODULE__POWERDOMAIN:
    case ::amalthea::AmaltheaPackage::HWMODULE__FREQUENCYDOMAIN:
    {
        return amalthea::HwModule::eIsSet(_featureID);
    }
    case ::amalthea::AmaltheaPackage::PROCESSINGUNIT__DEFINITION:
    {
        return (bool) m_definition;
    }
    case ::amalthea::AmaltheaPackage::PROCESSINGUNIT__ACCESSELEMENTS:
    {
        return m_accessElements && m_accessElements->size();
    }
    case ::amalthea::AmaltheaPackage::PROCESSINGUNIT__CACHES:
    {
        return m_caches && m_caches->size();
    }
    }
    throw std::runtime_error(
            "ProcessingUnit::eIsSet Error. FeatureID:" + _featureID);
}

void ProcessingUnit::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "ProcessingUnit::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr ProcessingUnit::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getProcessingUnit();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void ProcessingUnit::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
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
    case ::amalthea::AmaltheaPackage::HWMODULE__PORTS:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::HWMODULE__POWERDOMAIN:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::HWMODULE__FREQUENCYDOMAIN:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::PROCESSINGUNIT__DEFINITION:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::PROCESSINGUNIT__ACCESSELEMENTS:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::HwAccessElement_ptr _t1 =
                dynamic_cast< ::amalthea::HwAccessElement* >(_t0.get());

        // add to a list
        auto &container =
                (::ecorecpp::mapping::ReferenceEListImpl<
                        ::amalthea::HwAccessElement_ptr, -1, true, true >&) ::amalthea::ProcessingUnit::getAccessElements();
        container.basicAdd(_t1);
    }
        return;
    case ::amalthea::AmaltheaPackage::PROCESSINGUNIT__CACHES:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void ProcessingUnit::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_oldValue)
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
    case ::amalthea::AmaltheaPackage::HWMODULE__PORTS:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::HWMODULE__POWERDOMAIN:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::HWMODULE__FREQUENCYDOMAIN:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::PROCESSINGUNIT__DEFINITION:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::PROCESSINGUNIT__ACCESSELEMENTS:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_oldValue);
        ::amalthea::HwAccessElement_ptr _t1 =
                dynamic_cast< ::amalthea::HwAccessElement* >(_t0.get());

        // add to a list
        auto &container =
                (::ecorecpp::mapping::ReferenceEListImpl<
                        ::amalthea::HwAccessElement_ptr, -1, true, true >&) ::amalthea::ProcessingUnit::getAccessElements();
        container.basicRemove(_t1);
    }
        return;
    case ::amalthea::AmaltheaPackage::PROCESSINGUNIT__CACHES:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

