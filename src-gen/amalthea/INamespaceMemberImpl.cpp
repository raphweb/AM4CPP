// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/INamespaceMemberImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "INamespaceMember.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/Namespace.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(INamespaceMemberImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void INamespaceMember::_initialize()
{
    // Supertypes

    // References

    /*PROTECTED REGION ID(INamespaceMemberImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject INamespaceMember::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::INAMESPACEMEMBER__NAMESPACE:
    {
        if (m_namespace)
            _any = ::ecore::as < ::ecore::EObject > (m_namespace);
        return _any;
    }
    }
    throw std::runtime_error(
            "INamespaceMember::eGet Error. FeatureID:" + _featureID);
}

void INamespaceMember::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::INAMESPACEMEMBER__NAMESPACE:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::Namespace_ptr _t1 =
                dynamic_cast< ::amalthea::Namespace* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::Namespace >(_t0);*/
        ::amalthea::INamespaceMember::setNamespace(_t1);
        return;
    }
    }
    throw std::runtime_error(
            "INamespaceMember::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean INamespaceMember::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::INAMESPACEMEMBER__NAMESPACE:
    {
        return (bool) m_namespace;
    }
    }
    throw std::runtime_error(
            "INamespaceMember::eIsSet Error. FeatureID:" + _featureID);
}

void INamespaceMember::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "INamespaceMember::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr INamespaceMember::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getINamespaceMember();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void INamespaceMember::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::INAMESPACEMEMBER__NAMESPACE:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void INamespaceMember::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::INAMESPACEMEMBER__NAMESPACE:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

