// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/MainInterfaceImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "MainInterface.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/ComponentInterface.hpp>
#include <amalthea/INamespaceMember.hpp>
#include <amalthea/IComponentStructureMember.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Tag.hpp>
#include <amalthea/TypeDefinition.hpp>
#include <amalthea/SubInterface.hpp>
#include <amalthea/Namespace.hpp>
#include <amalthea/ComponentStructure.hpp>
#include <amalthea/INamed.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(MainInterfaceImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void MainInterface::_initialize()
{
    // Supertypes
    ::amalthea::ComponentInterface::_initialize();
    ::amalthea::INamespaceMember::_initialize();
    ::amalthea::IComponentStructureMember::_initialize();

    // References

    /*PROTECTED REGION ID(MainInterfaceImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject MainInterface::eGet(::ecore::EInt _featureID,
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
    case ::amalthea::AmaltheaPackage::INAMESPACEMEMBER__NAMESPACE:
    {
        return amalthea::INamespaceMember::eGet(_featureID, _resolve);
    }
    case ::amalthea::AmaltheaPackage::ICOMPONENTSTRUCTUREMEMBER__STRUCTURE:
    {
        return amalthea::IComponentStructureMember::eGet(_featureID, _resolve);
    }
    case ::amalthea::AmaltheaPackage::MAININTERFACE__VERSION:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::toAny(_any, m_version);
        return _any;
    }
    }
    throw std::runtime_error(
            "MainInterface::eGet Error. FeatureID:" + _featureID);
}

void MainInterface::eSet(::ecore::EInt _featureID,
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
    case ::amalthea::AmaltheaPackage::MAININTERFACE__VERSION:
    {
        ::ecore::EString _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::fromAny(_newValue, _t0);
        ::amalthea::MainInterface::setVersion(_t0);
        return;
    }
    }
    throw std::runtime_error(
            "MainInterface::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean MainInterface::eIsSet(::ecore::EInt _featureID)
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
    case ::amalthea::AmaltheaPackage::INAMESPACEMEMBER__NAMESPACE:
    {
        return amalthea::INamespaceMember::eIsSet(_featureID);
    }
    case ::amalthea::AmaltheaPackage::ICOMPONENTSTRUCTUREMEMBER__STRUCTURE:
    {
        return amalthea::IComponentStructureMember::eIsSet(_featureID);
    }
    case ::amalthea::AmaltheaPackage::MAININTERFACE__VERSION:
    {
        return m_version != "1.0";
    }
    }
    throw std::runtime_error(
            "MainInterface::eIsSet Error. FeatureID:" + _featureID);
}

void MainInterface::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "MainInterface::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr MainInterface::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getMainInterface();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void MainInterface::_inverseAdd(::ecore::EInt _featureID,
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
    case ::amalthea::AmaltheaPackage::INAMESPACEMEMBER__NAMESPACE:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::ICOMPONENTSTRUCTUREMEMBER__STRUCTURE:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void MainInterface::_inverseRemove(::ecore::EInt _featureID,
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
    case ::amalthea::AmaltheaPackage::INAMESPACEMEMBER__NAMESPACE:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::ICOMPONENTSTRUCTUREMEMBER__STRUCTURE:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

