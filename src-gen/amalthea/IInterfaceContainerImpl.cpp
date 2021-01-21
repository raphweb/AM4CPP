// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/IInterfaceContainerImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "IInterfaceContainer.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/MainInterface.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(IInterfaceContainerImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void IInterfaceContainer::_initialize()
{
    // Supertypes

    // References
    for (size_t i = 0; i < m_interfaces->size(); i++)
    {
        (*m_interfaces)[i]->_initialize();
    }

    /*PROTECTED REGION ID(IInterfaceContainerImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject IInterfaceContainer::eGet(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IINTERFACECONTAINER__INTERFACES:
    {
        _any = m_interfaces->asEListOf< ::ecore::EObject_ptr >();
        return _any;
    }
    }
    throw std::runtime_error(
            "IInterfaceContainer::eGet Error. FeatureID:" + _featureID);
}

void IInterfaceContainer::eSet(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IINTERFACECONTAINER__INTERFACES:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::amalthea::IInterfaceContainer::getInterfaces().clear();
        ::amalthea::IInterfaceContainer::getInterfaces().insert_all(*_t0);
        return;
    }
    }
    throw std::runtime_error(
            "IInterfaceContainer::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean IInterfaceContainer::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IINTERFACECONTAINER__INTERFACES:
    {
        return m_interfaces && m_interfaces->size();
    }
    }
    throw std::runtime_error(
            "IInterfaceContainer::eIsSet Error. FeatureID:" + _featureID);
}

void IInterfaceContainer::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "IInterfaceContainer::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr IInterfaceContainer::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getIInterfaceContainer();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void IInterfaceContainer::_inverseAdd(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IINTERFACECONTAINER__INTERFACES:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void IInterfaceContainer::_inverseRemove(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IINTERFACECONTAINER__INTERFACES:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

