// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/SystemImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "System.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/ReferableBaseObject.hpp>
#include <amalthea/ITaggable.hpp>
#include <amalthea/ISystem.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Tag.hpp>
#include <amalthea/ComponentInstance.hpp>
#include <amalthea/Connector.hpp>
#include <amalthea/QualifiedPort.hpp>
#include <amalthea/INamed.hpp>
#include <amalthea/Namespace.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(SystemImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void System::_initialize()
{
    // Supertypes
    ::amalthea::ReferableBaseObject::_initialize();
    ::amalthea::ITaggable::_initialize();
    ::amalthea::ISystem::_initialize();

    // References

    /*PROTECTED REGION ID(SystemImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject System::eGet(::ecore::EInt _featureID,
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
    case ::amalthea::AmaltheaPackage::ISYSTEM__COMPONENTINSTANCES:
    case ::amalthea::AmaltheaPackage::ISYSTEM__CONNECTORS:
    case ::amalthea::AmaltheaPackage::ISYSTEM__GROUNDEDPORTS:
    {
        return amalthea::ISystem::eGet(_featureID, _resolve);
    }
    }
    throw std::runtime_error("System::eGet Error. FeatureID:" + _featureID);
}

void System::eSet(::ecore::EInt _featureID,
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
    case ::amalthea::AmaltheaPackage::ISYSTEM__COMPONENTINSTANCES:
    case ::amalthea::AmaltheaPackage::ISYSTEM__CONNECTORS:
    case ::amalthea::AmaltheaPackage::ISYSTEM__GROUNDEDPORTS:
    {
        amalthea::ISystem::eSet(_featureID, _newValue);
        return;
    }
    }
    throw std::runtime_error("System::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean System::eIsSet(::ecore::EInt _featureID)
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
    case ::amalthea::AmaltheaPackage::ISYSTEM__COMPONENTINSTANCES:
    case ::amalthea::AmaltheaPackage::ISYSTEM__CONNECTORS:
    case ::amalthea::AmaltheaPackage::ISYSTEM__GROUNDEDPORTS:
    case ::amalthea::AmaltheaPackage::ISYSTEM__INNERPORTS:
    {
        return amalthea::ISystem::eIsSet(_featureID);
    }
    }
    throw std::runtime_error("System::eIsSet Error. FeatureID:" + _featureID);
}

void System::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error("System::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr System::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getSystem();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void System::_inverseAdd(::ecore::EInt _featureID,
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
    case ::amalthea::AmaltheaPackage::ISYSTEM__COMPONENTINSTANCES:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::ComponentInstance_ptr _t1 =
                dynamic_cast< ::amalthea::ComponentInstance* >(_t0.get());

        // add to a list
        auto &container =
                (::ecorecpp::mapping::ReferenceEListImpl<
                        ::amalthea::ComponentInstance_ptr, -1, true, true >&) ::amalthea::ISystem::getComponentInstances();
        container.basicAdd(_t1);
    }
        return;
    case ::amalthea::AmaltheaPackage::ISYSTEM__CONNECTORS:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::Connector_ptr _t1 =
                dynamic_cast< ::amalthea::Connector* >(_t0.get());

        // add to a list
        auto &container =
                (::ecorecpp::mapping::ReferenceEListImpl<
                        ::amalthea::Connector_ptr, -1, true, true >&) ::amalthea::ISystem::getConnectors();
        container.basicAdd(_t1);
    }
        return;
    case ::amalthea::AmaltheaPackage::ISYSTEM__GROUNDEDPORTS:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void System::_inverseRemove(::ecore::EInt _featureID,
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
    case ::amalthea::AmaltheaPackage::ISYSTEM__COMPONENTINSTANCES:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_oldValue);
        ::amalthea::ComponentInstance_ptr _t1 =
                dynamic_cast< ::amalthea::ComponentInstance* >(_t0.get());

        // add to a list
        auto &container =
                (::ecorecpp::mapping::ReferenceEListImpl<
                        ::amalthea::ComponentInstance_ptr, -1, true, true >&) ::amalthea::ISystem::getComponentInstances();
        container.basicRemove(_t1);
    }
        return;
    case ::amalthea::AmaltheaPackage::ISYSTEM__CONNECTORS:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_oldValue);
        ::amalthea::Connector_ptr _t1 =
                dynamic_cast< ::amalthea::Connector* >(_t0.get());

        // add to a list
        auto &container =
                (::ecorecpp::mapping::ReferenceEListImpl<
                        ::amalthea::Connector_ptr, -1, true, true >&) ::amalthea::ISystem::getConnectors();
        container.basicRemove(_t1);
    }
        return;
    case ::amalthea::AmaltheaPackage::ISYSTEM__GROUNDEDPORTS:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

