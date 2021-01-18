// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/CompositeImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "Composite.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/Component.hpp>
#include <amalthea/ISystem.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Tag.hpp>
#include <amalthea/Namespace.hpp>
#include <amalthea/ComponentStructure.hpp>
#include <amalthea/ComponentPort.hpp>
#include <amalthea/AbstractProcess.hpp>
#include <amalthea/Runnable.hpp>
#include <amalthea/Label.hpp>
#include <amalthea/Semaphore.hpp>
#include <amalthea/OsEvent.hpp>
#include <amalthea/ComponentInstance.hpp>
#include <amalthea/Connector.hpp>
#include <amalthea/QualifiedPort.hpp>
#include <amalthea/INamed.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(CompositeImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void Composite::_initialize()
{
    // Supertypes
    ::amalthea::Component::_initialize();
    ::amalthea::ISystem::_initialize();

    // References

    /*PROTECTED REGION ID(CompositeImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject Composite::eGet(::ecore::EInt _featureID,
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
    case ::amalthea::AmaltheaPackage::INAMESPACEMEMBER__NAMESPACE:
    {
        return amalthea::INamespaceMember::eGet(_featureID, _resolve);
    }
    case ::amalthea::AmaltheaPackage::ICOMPONENTSTRUCTUREMEMBER__STRUCTURE:
    {
        return amalthea::IComponentStructureMember::eGet(_featureID, _resolve);
    }
    case ::amalthea::AmaltheaPackage::COMPONENT__PORTS:
    case ::amalthea::AmaltheaPackage::COMPONENT__PROCESSES:
    case ::amalthea::AmaltheaPackage::COMPONENT__RUNNABLES:
    case ::amalthea::AmaltheaPackage::COMPONENT__LABELS:
    case ::amalthea::AmaltheaPackage::COMPONENT__SEMAPHORES:
    case ::amalthea::AmaltheaPackage::COMPONENT__OSEVENTS:
    {
        return amalthea::Component::eGet(_featureID, _resolve);
    }
    case ::amalthea::AmaltheaPackage::ISYSTEM__COMPONENTINSTANCES:
    case ::amalthea::AmaltheaPackage::ISYSTEM__CONNECTORS:
    case ::amalthea::AmaltheaPackage::ISYSTEM__GROUNDEDPORTS:
    {
        return amalthea::ISystem::eGet(_featureID, _resolve);
    }
    }
    throw std::runtime_error("Composite::eGet Error. FeatureID:" + _featureID);
}

void Composite::eSet(::ecore::EInt _featureID,
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
    case ::amalthea::AmaltheaPackage::INAMESPACEMEMBER__NAMESPACE:
    {
        amalthea::INamespaceMember::eSet(_featureID, _newValue);
        return;
    }
    case ::amalthea::AmaltheaPackage::ICOMPONENTSTRUCTUREMEMBER__STRUCTURE:
    {
        amalthea::IComponentStructureMember::eSet(_featureID, _newValue);
        return;
    }
    case ::amalthea::AmaltheaPackage::COMPONENT__PORTS:
    case ::amalthea::AmaltheaPackage::COMPONENT__PROCESSES:
    case ::amalthea::AmaltheaPackage::COMPONENT__RUNNABLES:
    case ::amalthea::AmaltheaPackage::COMPONENT__LABELS:
    case ::amalthea::AmaltheaPackage::COMPONENT__SEMAPHORES:
    case ::amalthea::AmaltheaPackage::COMPONENT__OSEVENTS:
    {
        amalthea::Component::eSet(_featureID, _newValue);
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
    throw std::runtime_error("Composite::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean Composite::eIsSet(::ecore::EInt _featureID)
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
    case ::amalthea::AmaltheaPackage::INAMESPACEMEMBER__NAMESPACE:
    {
        return amalthea::INamespaceMember::eIsSet(_featureID);
    }
    case ::amalthea::AmaltheaPackage::ICOMPONENTSTRUCTUREMEMBER__STRUCTURE:
    {
        return amalthea::IComponentStructureMember::eIsSet(_featureID);
    }
    case ::amalthea::AmaltheaPackage::COMPONENT__PORTS:
    case ::amalthea::AmaltheaPackage::COMPONENT__PROCESSES:
    case ::amalthea::AmaltheaPackage::COMPONENT__RUNNABLES:
    case ::amalthea::AmaltheaPackage::COMPONENT__LABELS:
    case ::amalthea::AmaltheaPackage::COMPONENT__SEMAPHORES:
    case ::amalthea::AmaltheaPackage::COMPONENT__OSEVENTS:
    {
        return amalthea::Component::eIsSet(_featureID);
    }
    case ::amalthea::AmaltheaPackage::ISYSTEM__COMPONENTINSTANCES:
    case ::amalthea::AmaltheaPackage::ISYSTEM__CONNECTORS:
    case ::amalthea::AmaltheaPackage::ISYSTEM__GROUNDEDPORTS:
    case ::amalthea::AmaltheaPackage::ISYSTEM__INNERPORTS:
    {
        return amalthea::ISystem::eIsSet(_featureID);
    }
    }
    throw std::runtime_error(
            "Composite::eIsSet Error. FeatureID:" + _featureID);
}

void Composite::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "Composite::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr Composite::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getComposite();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void Composite::_inverseAdd(::ecore::EInt _featureID,
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
    case ::amalthea::AmaltheaPackage::INAMESPACEMEMBER__NAMESPACE:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::ICOMPONENTSTRUCTUREMEMBER__STRUCTURE:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::COMPONENT__PORTS:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::ComponentPort_ptr _t1 =
                dynamic_cast< ::amalthea::ComponentPort* >(_t0.get());

        // add to a list
        auto &container =
                (::ecorecpp::mapping::ReferenceEListImpl<
                        ::amalthea::ComponentPort_ptr, -1, true, true >&) ::amalthea::Component::getPorts();
        container.basicAdd(_t1);
    }
        return;
    case ::amalthea::AmaltheaPackage::COMPONENT__PROCESSES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::COMPONENT__RUNNABLES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::COMPONENT__LABELS:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::COMPONENT__SEMAPHORES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::COMPONENT__OSEVENTS:
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
void Composite::_inverseRemove(::ecore::EInt _featureID,
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
    case ::amalthea::AmaltheaPackage::INAMESPACEMEMBER__NAMESPACE:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::ICOMPONENTSTRUCTUREMEMBER__STRUCTURE:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::COMPONENT__PORTS:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_oldValue);
        ::amalthea::ComponentPort_ptr _t1 =
                dynamic_cast< ::amalthea::ComponentPort* >(_t0.get());

        // add to a list
        auto &container =
                (::ecorecpp::mapping::ReferenceEListImpl<
                        ::amalthea::ComponentPort_ptr, -1, true, true >&) ::amalthea::Component::getPorts();
        container.basicRemove(_t1);
    }
        return;
    case ::amalthea::AmaltheaPackage::COMPONENT__PROCESSES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::COMPONENT__RUNNABLES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::COMPONENT__LABELS:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::COMPONENT__SEMAPHORES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::COMPONENT__OSEVENTS:
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

