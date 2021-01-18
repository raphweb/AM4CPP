// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/CacheImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "Cache.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/HwModule.hpp>
#include <amalthea/HwPathElement.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Tag.hpp>
#include <amalthea/HwPort.hpp>
#include <amalthea/PowerDomain.hpp>
#include <amalthea/FrequencyDomain.hpp>
#include <amalthea/CacheDefinition.hpp>
#include <amalthea/INamed.hpp>
#include <amalthea/Namespace.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(CacheImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void Cache::_initialize()
{
    // Supertypes
    ::amalthea::HwModule::_initialize();
    ::amalthea::HwPathElement::_initialize();

    // References

    /*PROTECTED REGION ID(CacheImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject Cache::eGet(::ecore::EInt _featureID,
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
    case ::amalthea::AmaltheaPackage::CACHE__DEFINITION:
    {
        if (m_definition)
            _any = ::ecore::as < ::ecore::EObject > (m_definition);
        return _any;
    }
    }
    throw std::runtime_error("Cache::eGet Error. FeatureID:" + _featureID);
}

void Cache::eSet(::ecore::EInt _featureID,
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
    case ::amalthea::AmaltheaPackage::CACHE__DEFINITION:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::CacheDefinition_ptr _t1 =
                dynamic_cast< ::amalthea::CacheDefinition* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::CacheDefinition >(_t0);*/
        ::amalthea::Cache::setDefinition(_t1);
        return;
    }
    }
    throw std::runtime_error("Cache::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean Cache::eIsSet(::ecore::EInt _featureID)
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
    case ::amalthea::AmaltheaPackage::CACHE__DEFINITION:
    {
        return (bool) m_definition;
    }
    }
    throw std::runtime_error("Cache::eIsSet Error. FeatureID:" + _featureID);
}

void Cache::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error("Cache::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr Cache::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getCache();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void Cache::_inverseAdd(::ecore::EInt _featureID,
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
    case ::amalthea::AmaltheaPackage::CACHE__DEFINITION:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void Cache::_inverseRemove(::ecore::EInt _featureID,
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
    case ::amalthea::AmaltheaPackage::CACHE__DEFINITION:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

