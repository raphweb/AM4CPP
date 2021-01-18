// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/ComponentImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "Component.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/ReferableBaseObject.hpp>
#include <amalthea/ITaggable.hpp>
#include <amalthea/INamespaceMember.hpp>
#include <amalthea/IComponentStructureMember.hpp>
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
#include <amalthea/INamed.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(ComponentImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void Component::_initialize()
{
    // Supertypes
    ::amalthea::ReferableBaseObject::_initialize();
    ::amalthea::ITaggable::_initialize();
    ::amalthea::INamespaceMember::_initialize();
    ::amalthea::IComponentStructureMember::_initialize();

    // References
    for (size_t i = 0; i < m_ports->size(); i++)
    {
        (*m_ports)[i]->_initialize();
    }

    /*PROTECTED REGION ID(ComponentImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject Component::eGet(::ecore::EInt _featureID,
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
    {
        _any = m_ports->asEListOf< ::ecore::EObject_ptr >();
        return _any;
    }
    case ::amalthea::AmaltheaPackage::COMPONENT__PROCESSES:
    {
        _any = m_processes->asEListOf< ::ecore::EObject_ptr >();
        return _any;
    }
    case ::amalthea::AmaltheaPackage::COMPONENT__RUNNABLES:
    {
        _any = m_runnables->asEListOf< ::ecore::EObject_ptr >();
        return _any;
    }
    case ::amalthea::AmaltheaPackage::COMPONENT__LABELS:
    {
        _any = m_labels->asEListOf< ::ecore::EObject_ptr >();
        return _any;
    }
    case ::amalthea::AmaltheaPackage::COMPONENT__SEMAPHORES:
    {
        _any = m_semaphores->asEListOf< ::ecore::EObject_ptr >();
        return _any;
    }
    case ::amalthea::AmaltheaPackage::COMPONENT__OSEVENTS:
    {
        _any = m_osEvents->asEListOf< ::ecore::EObject_ptr >();
        return _any;
    }
    }
    throw std::runtime_error("Component::eGet Error. FeatureID:" + _featureID);
}

void Component::eSet(::ecore::EInt _featureID,
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
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::amalthea::Component::getPorts().clear();
        ::amalthea::Component::getPorts().insert_all(*_t0);
        return;
    }
    case ::amalthea::AmaltheaPackage::COMPONENT__PROCESSES:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::amalthea::Component::getProcesses().clear();
        ::amalthea::Component::getProcesses().insert_all(*_t0);
        return;
    }
    case ::amalthea::AmaltheaPackage::COMPONENT__RUNNABLES:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::amalthea::Component::getRunnables().clear();
        ::amalthea::Component::getRunnables().insert_all(*_t0);
        return;
    }
    case ::amalthea::AmaltheaPackage::COMPONENT__LABELS:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::amalthea::Component::getLabels().clear();
        ::amalthea::Component::getLabels().insert_all(*_t0);
        return;
    }
    case ::amalthea::AmaltheaPackage::COMPONENT__SEMAPHORES:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::amalthea::Component::getSemaphores().clear();
        ::amalthea::Component::getSemaphores().insert_all(*_t0);
        return;
    }
    case ::amalthea::AmaltheaPackage::COMPONENT__OSEVENTS:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::amalthea::Component::getOsEvents().clear();
        ::amalthea::Component::getOsEvents().insert_all(*_t0);
        return;
    }
    }
    throw std::runtime_error("Component::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean Component::eIsSet(::ecore::EInt _featureID)
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
    {
        return m_ports && m_ports->size();
    }
    case ::amalthea::AmaltheaPackage::COMPONENT__PROCESSES:
    {
        return m_processes && m_processes->size();
    }
    case ::amalthea::AmaltheaPackage::COMPONENT__RUNNABLES:
    {
        return m_runnables && m_runnables->size();
    }
    case ::amalthea::AmaltheaPackage::COMPONENT__LABELS:
    {
        return m_labels && m_labels->size();
    }
    case ::amalthea::AmaltheaPackage::COMPONENT__SEMAPHORES:
    {
        return m_semaphores && m_semaphores->size();
    }
    case ::amalthea::AmaltheaPackage::COMPONENT__OSEVENTS:
    {
        return m_osEvents && m_osEvents->size();
    }
    }
    throw std::runtime_error(
            "Component::eIsSet Error. FeatureID:" + _featureID);
}

void Component::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "Component::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr Component::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getComponent();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void Component::_inverseAdd(::ecore::EInt _featureID,
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

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void Component::_inverseRemove(::ecore::EInt _featureID,
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

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

