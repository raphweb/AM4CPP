// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/ISRImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "ISR.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/Process.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Tag.hpp>
#include <amalthea/DataSize.hpp>
#include <amalthea/MemoryMapping.hpp>
#include <amalthea/Component.hpp>
#include <amalthea/ActivityGraph.hpp>
#include <amalthea/Stimulus.hpp>
#include <amalthea/INamed.hpp>
#include <amalthea/Namespace.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(ISRImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void ISR::_initialize()
{
    // Supertypes
    ::amalthea::Process::_initialize();

    // References

    /*PROTECTED REGION ID(ISRImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject ISR::eGet(::ecore::EInt _featureID,
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
    case ::amalthea::AmaltheaPackage::ABSTRACTMEMORYELEMENT__SIZE:
    {
        return amalthea::AbstractMemoryElement::eGet(_featureID, _resolve);
    }
    case ::amalthea::AmaltheaPackage::PROCESS__ACTIVITYGRAPH:
    case ::amalthea::AmaltheaPackage::PROCESS__STIMULI:
    {
        return amalthea::Process::eGet(_featureID, _resolve);
    }
    case ::amalthea::AmaltheaPackage::ISR__CATEGORY:
    {
        ::ecorecpp::mapping::any_traits < ::amalthea::ISRCategory
                > ::toAny(_any, m_category);
        return _any;
    }
    }
    throw std::runtime_error("ISR::eGet Error. FeatureID:" + _featureID);
}

void ISR::eSet(::ecore::EInt _featureID,
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
    case ::amalthea::AmaltheaPackage::ABSTRACTMEMORYELEMENT__SIZE:
    {
        amalthea::AbstractMemoryElement::eSet(_featureID, _newValue);
        return;
    }
    case ::amalthea::AmaltheaPackage::PROCESS__ACTIVITYGRAPH:
    case ::amalthea::AmaltheaPackage::PROCESS__STIMULI:
    {
        amalthea::Process::eSet(_featureID, _newValue);
        return;
    }
    case ::amalthea::AmaltheaPackage::ISR__CATEGORY:
    {
        ::amalthea::ISRCategory _t0;
        ::ecorecpp::mapping::any_traits < ::amalthea::ISRCategory
                > ::fromAny(_newValue, _t0);
        ::amalthea::ISR::setCategory(_t0);
        return;
    }
    }
    throw std::runtime_error("ISR::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean ISR::eIsSet(::ecore::EInt _featureID)
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
    case ::amalthea::AmaltheaPackage::ABSTRACTMEMORYELEMENT__SIZE:
    case ::amalthea::AmaltheaPackage::ABSTRACTMEMORYELEMENT__MAPPINGS:
    {
        return amalthea::AbstractMemoryElement::eIsSet(_featureID);
    }
    case ::amalthea::AmaltheaPackage::ABSTRACTPROCESS__REFERRINGCOMPONENTS:
    {
        return amalthea::AbstractProcess::eIsSet(_featureID);
    }
    case ::amalthea::AmaltheaPackage::PROCESS__ACTIVITYGRAPH:
    case ::amalthea::AmaltheaPackage::PROCESS__STIMULI:
    {
        return amalthea::Process::eIsSet(_featureID);
    }
    case ::amalthea::AmaltheaPackage::ISR__CATEGORY:
    {
        return ::ecorecpp::mapping::set_traits < ::amalthea::ISRCategory
                > ::is_set(m_category);
    }
    }
    throw std::runtime_error("ISR::eIsSet Error. FeatureID:" + _featureID);
}

void ISR::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error("ISR::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr ISR::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getISR();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void ISR::_inverseAdd(::ecore::EInt _featureID,
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
    case ::amalthea::AmaltheaPackage::ABSTRACTMEMORYELEMENT__SIZE:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::PROCESS__ACTIVITYGRAPH:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::PROCESS__STIMULI:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void ISR::_inverseRemove(::ecore::EInt _featureID,
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
    case ::amalthea::AmaltheaPackage::ABSTRACTMEMORYELEMENT__SIZE:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::PROCESS__ACTIVITYGRAPH:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::PROCESS__STIMULI:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

