// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/ComponentScopeImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "ComponentScope.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/DataGroupScope.hpp>
#include <amalthea/Component.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(ComponentScopeImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void ComponentScope::_initialize()
{
    // Supertypes
    ::amalthea::DataGroupScope::_initialize();

    // References

    /*PROTECTED REGION ID(ComponentScopeImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject ComponentScope::eGet(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::COMPONENTSCOPE__COMPONENT:
    {
        if (m_component)
            _any = ::ecore::as < ::ecore::EObject > (m_component);
        return _any;
    }
    }
    throw std::runtime_error(
            "ComponentScope::eGet Error. FeatureID:" + _featureID);
}

void ComponentScope::eSet(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::COMPONENTSCOPE__COMPONENT:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::Component_ptr _t1 =
                dynamic_cast< ::amalthea::Component* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::Component >(_t0);*/
        ::amalthea::ComponentScope::setComponent(_t1);
        return;
    }
    }
    throw std::runtime_error(
            "ComponentScope::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean ComponentScope::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::COMPONENTSCOPE__COMPONENT:
    {
        return (bool) m_component;
    }
    }
    throw std::runtime_error(
            "ComponentScope::eIsSet Error. FeatureID:" + _featureID);
}

void ComponentScope::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "ComponentScope::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr ComponentScope::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getComponentScope();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void ComponentScope::_inverseAdd(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::COMPONENTSCOPE__COMPONENT:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void ComponentScope::_inverseRemove(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::COMPONENTSCOPE__COMPONENT:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

