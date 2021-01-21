// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/QualifiedPortImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "QualifiedPort.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/BaseObject.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/ComponentInstance.hpp>
#include <amalthea/ComponentPort.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(QualifiedPortImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void QualifiedPort::_initialize()
{
    // Supertypes
    ::amalthea::BaseObject::_initialize();

    // References

    /*PROTECTED REGION ID(QualifiedPortImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject QualifiedPort::eGet(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        return amalthea::IAnnotatable::eGet(_featureID, _resolve);
    }
    case ::amalthea::AmaltheaPackage::QUALIFIEDPORT__INSTANCE:
    {
        if (m_instance)
            _any = ::ecore::as < ::ecore::EObject > (m_instance);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::QUALIFIEDPORT__PORT:
    {
        if (m_port)
            _any = ::ecore::as < ::ecore::EObject > (m_port);
        return _any;
    }
    }
    throw std::runtime_error(
            "QualifiedPort::eGet Error. FeatureID:" + _featureID);
}

void QualifiedPort::eSet(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        amalthea::IAnnotatable::eSet(_featureID, _newValue);
        return;
    }
    case ::amalthea::AmaltheaPackage::QUALIFIEDPORT__INSTANCE:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::ComponentInstance_ptr _t1 =
                dynamic_cast< ::amalthea::ComponentInstance* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::ComponentInstance >(_t0);*/
        ::amalthea::QualifiedPort::setInstance(_t1);
        return;
    }
    case ::amalthea::AmaltheaPackage::QUALIFIEDPORT__PORT:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::ComponentPort_ptr _t1 =
                dynamic_cast< ::amalthea::ComponentPort* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::ComponentPort >(_t0);*/
        ::amalthea::QualifiedPort::setPort(_t1);
        return;
    }
    }
    throw std::runtime_error(
            "QualifiedPort::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean QualifiedPort::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        return amalthea::IAnnotatable::eIsSet(_featureID);
    }
    case ::amalthea::AmaltheaPackage::QUALIFIEDPORT__INSTANCE:
    {
        return (bool) m_instance;
    }
    case ::amalthea::AmaltheaPackage::QUALIFIEDPORT__PORT:
    {
        return (bool) m_port;
    }
    }
    throw std::runtime_error(
            "QualifiedPort::eIsSet Error. FeatureID:" + _featureID);
}

void QualifiedPort::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "QualifiedPort::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr QualifiedPort::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getQualifiedPort();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void QualifiedPort::_inverseAdd(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::QUALIFIEDPORT__INSTANCE:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::QUALIFIEDPORT__PORT:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void QualifiedPort::_inverseRemove(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::QUALIFIEDPORT__INSTANCE:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::QUALIFIEDPORT__PORT:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

