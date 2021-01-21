// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/ComponentInstanceImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "ComponentInstance.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/ReferableBaseObject.hpp>
#include <amalthea/ITaggable.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Tag.hpp>
#include <amalthea/ISystem.hpp>
#include <amalthea/Component.hpp>
#include <amalthea/INamed.hpp>
#include <amalthea/Namespace.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(ComponentInstanceImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void ComponentInstance::_initialize()
{
    // Supertypes
    ::amalthea::ReferableBaseObject::_initialize();
    ::amalthea::ITaggable::_initialize();

    // References

    /*PROTECTED REGION ID(ComponentInstanceImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

std::vector< ::ecore::EString > ComponentInstance::getNamePrefixSegments()
{
    /*PROTECTED REGION ID(ComponentInstanceImpl_getNamePrefixSegments) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    throw "UnsupportedOperationException: amalthea::ComponentInstance::getNamePrefixSegments";
    /*PROTECTED REGION END*/
}

// EObject
::ecore::EJavaObject ComponentInstance::eGet(::ecore::EInt _featureID,
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
    case ::amalthea::AmaltheaPackage::COMPONENTINSTANCE__CONTAININGSYSTEM:
    {
        if (m_containingSystem)
            _any = ::ecore::as < ::ecore::EObject > (m_containingSystem);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::COMPONENTINSTANCE__TYPE:
    {
        if (m_type)
            _any = ::ecore::as < ::ecore::EObject > (m_type);
        return _any;
    }
    }
    throw std::runtime_error(
            "ComponentInstance::eGet Error. FeatureID:" + _featureID);
}

void ComponentInstance::eSet(::ecore::EInt _featureID,
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
    case ::amalthea::AmaltheaPackage::COMPONENTINSTANCE__CONTAININGSYSTEM:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::ISystem_ptr _t1 =
                dynamic_cast< ::amalthea::ISystem* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::ISystem >(_t0);*/
        ::amalthea::ComponentInstance::setContainingSystem(_t1);
        return;
    }
    case ::amalthea::AmaltheaPackage::COMPONENTINSTANCE__TYPE:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::Component_ptr _t1 =
                dynamic_cast< ::amalthea::Component* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::Component >(_t0);*/
        ::amalthea::ComponentInstance::setType(_t1);
        return;
    }
    }
    throw std::runtime_error(
            "ComponentInstance::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean ComponentInstance::eIsSet(::ecore::EInt _featureID)
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
    case ::amalthea::AmaltheaPackage::COMPONENTINSTANCE__CONTAININGSYSTEM:
    {
        return (bool) m_containingSystem;
    }
    case ::amalthea::AmaltheaPackage::COMPONENTINSTANCE__TYPE:
    {
        return (bool) m_type;
    }
    }
    throw std::runtime_error(
            "ComponentInstance::eIsSet Error. FeatureID:" + _featureID);
}

void ComponentInstance::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "ComponentInstance::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr ComponentInstance::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getComponentInstance();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void ComponentInstance::_inverseAdd(::ecore::EInt _featureID,
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
    case ::amalthea::AmaltheaPackage::COMPONENTINSTANCE__CONTAININGSYSTEM:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::ISystem_ptr _t1 =
                dynamic_cast< ::amalthea::ISystem* >(_t0.get());

        // set reference
        basicsetContainingSystem(_t1);
    }
        return;
    case ::amalthea::AmaltheaPackage::COMPONENTINSTANCE__TYPE:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void ComponentInstance::_inverseRemove(::ecore::EInt _featureID,
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
    case ::amalthea::AmaltheaPackage::COMPONENTINSTANCE__CONTAININGSYSTEM:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_oldValue);
        ::amalthea::ISystem_ptr _t1 =
                dynamic_cast< ::amalthea::ISystem* >(_t0.get());

        // set reference
        if (basicgetContainingSystem() == _t1)
            basicsetContainingSystem(nullptr);
    }
        return;
    case ::amalthea::AmaltheaPackage::COMPONENTINSTANCE__TYPE:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

