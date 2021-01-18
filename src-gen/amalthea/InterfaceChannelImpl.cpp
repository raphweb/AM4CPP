// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/InterfaceChannelImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "InterfaceChannel.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/ComponentInterface.hpp>
#include <amalthea/Channel.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(InterfaceChannelImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void InterfaceChannel::_initialize()
{
    // Supertypes

    // References

    /*PROTECTED REGION ID(InterfaceChannelImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject InterfaceChannel::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::INTERFACECHANNEL__KEY:
    {
        if (m_key)
            _any = ::ecore::as < ::ecore::EObject > (m_key);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::INTERFACECHANNEL__VALUE:
    {
        if (m_value)
            _any = ::ecore::as < ::ecore::EObject > (m_value);
        return _any;
    }
    }
    throw std::runtime_error(
            "InterfaceChannel::eGet Error. FeatureID:" + _featureID);
}

void InterfaceChannel::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::INTERFACECHANNEL__KEY:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::ComponentInterface_ptr _t1 =
                dynamic_cast< ::amalthea::ComponentInterface* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::ComponentInterface >(_t0);*/
        ::amalthea::InterfaceChannel::setKey(_t1);
        return;
    }
    case ::amalthea::AmaltheaPackage::INTERFACECHANNEL__VALUE:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::Channel_ptr _t1 =
                dynamic_cast< ::amalthea::Channel* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::Channel >(_t0);*/
        ::amalthea::InterfaceChannel::setValue(_t1);
        return;
    }
    }
    throw std::runtime_error(
            "InterfaceChannel::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean InterfaceChannel::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::INTERFACECHANNEL__KEY:
    {
        return (bool) m_key;
    }
    case ::amalthea::AmaltheaPackage::INTERFACECHANNEL__VALUE:
    {
        return (bool) m_value;
    }
    }
    throw std::runtime_error(
            "InterfaceChannel::eIsSet Error. FeatureID:" + _featureID);
}

void InterfaceChannel::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "InterfaceChannel::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr InterfaceChannel::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getInterfaceChannel();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void InterfaceChannel::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::INTERFACECHANNEL__KEY:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::INTERFACECHANNEL__VALUE:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void InterfaceChannel::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::INTERFACECHANNEL__KEY:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::INTERFACECHANNEL__VALUE:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

