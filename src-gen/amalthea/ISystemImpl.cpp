// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/ISystemImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "ISystem.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/ComponentInstance.hpp>
#include <amalthea/Connector.hpp>
#include <amalthea/QualifiedPort.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(ISystemImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void ISystem::_initialize()
{
    // Supertypes

    // References
    for (size_t i = 0; i < m_componentInstances->size(); i++)
    {
        (*m_componentInstances)[i]->_initialize();
    }
    for (size_t i = 0; i < m_connectors->size(); i++)
    {
        (*m_connectors)[i]->_initialize();
    }
    for (size_t i = 0; i < m_groundedPorts->size(); i++)
    {
        (*m_groundedPorts)[i]->_initialize();
    }

    /*PROTECTED REGION ID(ISystemImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject ISystem::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::ISYSTEM__COMPONENTINSTANCES:
    {
        _any = m_componentInstances->asEListOf< ::ecore::EObject_ptr >();
        return _any;
    }
    case ::amalthea::AmaltheaPackage::ISYSTEM__CONNECTORS:
    {
        _any = m_connectors->asEListOf< ::ecore::EObject_ptr >();
        return _any;
    }
    case ::amalthea::AmaltheaPackage::ISYSTEM__GROUNDEDPORTS:
    {
        _any = m_groundedPorts->asEListOf< ::ecore::EObject_ptr >();
        return _any;
    }
    }
    throw std::runtime_error("ISystem::eGet Error. FeatureID:" + _featureID);
}

void ISystem::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::ISYSTEM__COMPONENTINSTANCES:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::amalthea::ISystem::getComponentInstances().clear();
        ::amalthea::ISystem::getComponentInstances().insert_all(*_t0);
        return;
    }
    case ::amalthea::AmaltheaPackage::ISYSTEM__CONNECTORS:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::amalthea::ISystem::getConnectors().clear();
        ::amalthea::ISystem::getConnectors().insert_all(*_t0);
        return;
    }
    case ::amalthea::AmaltheaPackage::ISYSTEM__GROUNDEDPORTS:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::amalthea::ISystem::getGroundedPorts().clear();
        ::amalthea::ISystem::getGroundedPorts().insert_all(*_t0);
        return;
    }
    }
    throw std::runtime_error("ISystem::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean ISystem::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::ISYSTEM__COMPONENTINSTANCES:
    {
        return m_componentInstances && m_componentInstances->size();
    }
    case ::amalthea::AmaltheaPackage::ISYSTEM__CONNECTORS:
    {
        return m_connectors && m_connectors->size();
    }
    case ::amalthea::AmaltheaPackage::ISYSTEM__GROUNDEDPORTS:
    {
        return m_groundedPorts && m_groundedPorts->size();
    }
    case ::amalthea::AmaltheaPackage::ISYSTEM__INNERPORTS:
    {
        return m_innerPorts && m_innerPorts->size();
    }
    }
    throw std::runtime_error("ISystem::eIsSet Error. FeatureID:" + _featureID);
}

void ISystem::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error("ISystem::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr ISystem::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getISystem();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void ISystem::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
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
void ISystem::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
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

