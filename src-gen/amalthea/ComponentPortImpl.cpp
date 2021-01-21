// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/ComponentPortImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "ComponentPort.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/ReferableBaseObject.hpp>
#include <amalthea/ITaggable.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Tag.hpp>
#include <amalthea/Component.hpp>
#include <amalthea/ComponentInterface.hpp>
#include <amalthea/INamed.hpp>
#include <amalthea/Namespace.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(ComponentPortImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void ComponentPort::_initialize()
{
    // Supertypes
    ::amalthea::ReferableBaseObject::_initialize();
    ::amalthea::ITaggable::_initialize();

    // References

    /*PROTECTED REGION ID(ComponentPortImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

std::vector< ::ecore::EString > ComponentPort::getNamePrefixSegments()
{
    /*PROTECTED REGION ID(ComponentPortImpl_getNamePrefixSegments) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    throw "UnsupportedOperationException: amalthea::ComponentPort::getNamePrefixSegments";
    /*PROTECTED REGION END*/
}

// EObject
::ecore::EJavaObject ComponentPort::eGet(::ecore::EInt _featureID,
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
    case ::amalthea::AmaltheaPackage::COMPONENTPORT__CONTAININGCOMPONENT:
    {
        if (m_containingComponent)
            _any = ::ecore::as < ::ecore::EObject > (m_containingComponent);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::COMPONENTPORT__KIND:
    {
        ::ecorecpp::mapping::any_traits < ::amalthea::InterfaceKind
                > ::toAny(_any, m_kind);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::COMPONENTPORT__INTERFACE:
    {
        if (m_interface)
            _any = ::ecore::as < ::ecore::EObject > (m_interface);
        return _any;
    }
    }
    throw std::runtime_error(
            "ComponentPort::eGet Error. FeatureID:" + _featureID);
}

void ComponentPort::eSet(::ecore::EInt _featureID,
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
    case ::amalthea::AmaltheaPackage::COMPONENTPORT__CONTAININGCOMPONENT:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::Component_ptr _t1 =
                dynamic_cast< ::amalthea::Component* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::Component >(_t0);*/
        ::amalthea::ComponentPort::setContainingComponent(_t1);
        return;
    }
    case ::amalthea::AmaltheaPackage::COMPONENTPORT__KIND:
    {
        ::amalthea::InterfaceKind _t0;
        ::ecorecpp::mapping::any_traits < ::amalthea::InterfaceKind
                > ::fromAny(_newValue, _t0);
        ::amalthea::ComponentPort::setKind(_t0);
        return;
    }
    case ::amalthea::AmaltheaPackage::COMPONENTPORT__INTERFACE:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::ComponentInterface_ptr _t1 =
                dynamic_cast< ::amalthea::ComponentInterface* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::ComponentInterface >(_t0);*/
        ::amalthea::ComponentPort::setInterface(_t1);
        return;
    }
    }
    throw std::runtime_error(
            "ComponentPort::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean ComponentPort::eIsSet(::ecore::EInt _featureID)
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
    case ::amalthea::AmaltheaPackage::COMPONENTPORT__CONTAININGCOMPONENT:
    {
        return (bool) m_containingComponent;
    }
    case ::amalthea::AmaltheaPackage::COMPONENTPORT__KIND:
    {
        return ::ecorecpp::mapping::set_traits < ::amalthea::InterfaceKind
                > ::is_set(m_kind);
    }
    case ::amalthea::AmaltheaPackage::COMPONENTPORT__INTERFACE:
    {
        return (bool) m_interface;
    }
    }
    throw std::runtime_error(
            "ComponentPort::eIsSet Error. FeatureID:" + _featureID);
}

void ComponentPort::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "ComponentPort::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr ComponentPort::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getComponentPort();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void ComponentPort::_inverseAdd(::ecore::EInt _featureID,
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
    case ::amalthea::AmaltheaPackage::COMPONENTPORT__CONTAININGCOMPONENT:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::Component_ptr _t1 =
                dynamic_cast< ::amalthea::Component* >(_t0.get());

        // set reference
        basicsetContainingComponent(_t1);
    }
        return;
    case ::amalthea::AmaltheaPackage::COMPONENTPORT__INTERFACE:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void ComponentPort::_inverseRemove(::ecore::EInt _featureID,
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
    case ::amalthea::AmaltheaPackage::COMPONENTPORT__CONTAININGCOMPONENT:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_oldValue);
        ::amalthea::Component_ptr _t1 =
                dynamic_cast< ::amalthea::Component* >(_t0.get());

        // set reference
        if (basicgetContainingComponent() == _t1)
            basicsetContainingComponent(nullptr);
    }
        return;
    case ::amalthea::AmaltheaPackage::COMPONENTPORT__INTERFACE:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

