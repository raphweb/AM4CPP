// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/IComponentContainerImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "IComponentContainer.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/Component.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(IComponentContainerImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void IComponentContainer::_initialize()
{
    // Supertypes

    // References
    for (size_t i = 0; i < m_components->size(); i++)
    {
        (*m_components)[i]->_initialize();
    }

    /*PROTECTED REGION ID(IComponentContainerImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject IComponentContainer::eGet(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::ICOMPONENTCONTAINER__COMPONENTS:
    {
        _any = m_components->asEListOf< ::ecore::EObject_ptr >();
        return _any;
    }
    }
    throw std::runtime_error(
            "IComponentContainer::eGet Error. FeatureID:" + _featureID);
}

void IComponentContainer::eSet(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::ICOMPONENTCONTAINER__COMPONENTS:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::amalthea::IComponentContainer::getComponents().clear();
        ::amalthea::IComponentContainer::getComponents().insert_all(*_t0);
        return;
    }
    }
    throw std::runtime_error(
            "IComponentContainer::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean IComponentContainer::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::ICOMPONENTCONTAINER__COMPONENTS:
    {
        return m_components && m_components->size();
    }
    }
    throw std::runtime_error(
            "IComponentContainer::eIsSet Error. FeatureID:" + _featureID);
}

void IComponentContainer::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "IComponentContainer::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr IComponentContainer::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getIComponentContainer();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void IComponentContainer::_inverseAdd(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::ICOMPONENTCONTAINER__COMPONENTS:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void IComponentContainer::_inverseRemove(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::ICOMPONENTCONTAINER__COMPONENTS:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

