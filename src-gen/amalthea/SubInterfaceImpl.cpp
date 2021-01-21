// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/SubInterfaceImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "SubInterface.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/ComponentInterface.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Tag.hpp>
#include <amalthea/TypeDefinition.hpp>
#include <amalthea/SubInterface.hpp>
#include <amalthea/INamed.hpp>
#include <amalthea/Namespace.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(SubInterfaceImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void SubInterface::_initialize()
{
    // Supertypes
    ::amalthea::ComponentInterface::_initialize();

    // References

    /*PROTECTED REGION ID(SubInterfaceImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

std::vector< ::ecore::EString > SubInterface::getNamePrefixSegments()
{
    /*PROTECTED REGION ID(SubInterfaceImpl_getNamePrefixSegments) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    throw "UnsupportedOperationException: amalthea::SubInterface::getNamePrefixSegments";
    /*PROTECTED REGION END*/
}

// EObject
::ecore::EJavaObject SubInterface::eGet(::ecore::EInt _featureID,
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
    case ::amalthea::AmaltheaPackage::COMPONENTINTERFACE__DATATYPE:
    case ::amalthea::AmaltheaPackage::COMPONENTINTERFACE__SUBINTERFACES:
    {
        return amalthea::ComponentInterface::eGet(_featureID, _resolve);
    }
    case ::amalthea::AmaltheaPackage::SUBINTERFACE__CONTAININGINTERFACE:
    {
        if (m_containingInterface)
            _any = ::ecore::as < ::ecore::EObject > (m_containingInterface);
        return _any;
    }
    }
    throw std::runtime_error(
            "SubInterface::eGet Error. FeatureID:" + _featureID);
}

void SubInterface::eSet(::ecore::EInt _featureID,
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
    case ::amalthea::AmaltheaPackage::COMPONENTINTERFACE__DATATYPE:
    case ::amalthea::AmaltheaPackage::COMPONENTINTERFACE__SUBINTERFACES:
    {
        amalthea::ComponentInterface::eSet(_featureID, _newValue);
        return;
    }
    case ::amalthea::AmaltheaPackage::SUBINTERFACE__CONTAININGINTERFACE:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::ComponentInterface_ptr _t1 =
                dynamic_cast< ::amalthea::ComponentInterface* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::ComponentInterface >(_t0);*/
        ::amalthea::SubInterface::setContainingInterface(_t1);
        return;
    }
    }
    throw std::runtime_error(
            "SubInterface::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean SubInterface::eIsSet(::ecore::EInt _featureID)
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
    case ::amalthea::AmaltheaPackage::COMPONENTINTERFACE__DATATYPE:
    case ::amalthea::AmaltheaPackage::COMPONENTINTERFACE__SUBINTERFACES:
    {
        return amalthea::ComponentInterface::eIsSet(_featureID);
    }
    case ::amalthea::AmaltheaPackage::SUBINTERFACE__CONTAININGINTERFACE:
    {
        return (bool) m_containingInterface;
    }
    }
    throw std::runtime_error(
            "SubInterface::eIsSet Error. FeatureID:" + _featureID);
}

void SubInterface::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "SubInterface::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr SubInterface::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getSubInterface();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void SubInterface::_inverseAdd(::ecore::EInt _featureID,
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
    case ::amalthea::AmaltheaPackage::COMPONENTINTERFACE__DATATYPE:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::COMPONENTINTERFACE__SUBINTERFACES:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::SubInterface_ptr _t1 =
                dynamic_cast< ::amalthea::SubInterface* >(_t0.get());

        // add to a list
        auto &container =
                (::ecorecpp::mapping::ReferenceEListImpl<
                        ::amalthea::SubInterface_ptr, -1, true, true >&) ::amalthea::ComponentInterface::getSubInterfaces();
        container.basicAdd(_t1);
    }
        return;
    case ::amalthea::AmaltheaPackage::SUBINTERFACE__CONTAININGINTERFACE:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::ComponentInterface_ptr _t1 =
                dynamic_cast< ::amalthea::ComponentInterface* >(_t0.get());

        // set reference
        basicsetContainingInterface(_t1);
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void SubInterface::_inverseRemove(::ecore::EInt _featureID,
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
    case ::amalthea::AmaltheaPackage::COMPONENTINTERFACE__DATATYPE:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::COMPONENTINTERFACE__SUBINTERFACES:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_oldValue);
        ::amalthea::SubInterface_ptr _t1 =
                dynamic_cast< ::amalthea::SubInterface* >(_t0.get());

        // add to a list
        auto &container =
                (::ecorecpp::mapping::ReferenceEListImpl<
                        ::amalthea::SubInterface_ptr, -1, true, true >&) ::amalthea::ComponentInterface::getSubInterfaces();
        container.basicRemove(_t1);
    }
        return;
    case ::amalthea::AmaltheaPackage::SUBINTERFACE__CONTAININGINTERFACE:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_oldValue);
        ::amalthea::ComponentInterface_ptr _t1 =
                dynamic_cast< ::amalthea::ComponentInterface* >(_t0.get());

        // set reference
        if (basicgetContainingInterface() == _t1)
            basicsetContainingInterface(nullptr);
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

