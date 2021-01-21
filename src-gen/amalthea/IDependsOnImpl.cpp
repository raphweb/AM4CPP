// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/IDependsOnImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "IDependsOn.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/DataDependency.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(IDependsOnImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void IDependsOn::_initialize()
{
    // Supertypes

    // References
    if (m_dependsOn)
    {
        m_dependsOn->_initialize();
    }

    /*PROTECTED REGION ID(IDependsOnImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject IDependsOn::eGet(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IDEPENDSON__DEPENDSON:
    {
        if (m_dependsOn)
            _any = ::ecore::as < ::ecore::EObject > (m_dependsOn);
        return _any;
    }
    }
    throw std::runtime_error("IDependsOn::eGet Error. FeatureID:" + _featureID);
}

void IDependsOn::eSet(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IDEPENDSON__DEPENDSON:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::DataDependency_ptr _t1 =
                dynamic_cast< ::amalthea::DataDependency* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::DataDependency >(_t0);*/
        ::amalthea::IDependsOn::setDependsOn(_t1);
        return;
    }
    }
    throw std::runtime_error("IDependsOn::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean IDependsOn::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IDEPENDSON__DEPENDSON:
    {
        return (bool) m_dependsOn;
    }
    }
    throw std::runtime_error(
            "IDependsOn::eIsSet Error. FeatureID:" + _featureID);
}

void IDependsOn::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "IDependsOn::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr IDependsOn::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getIDependsOn();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void IDependsOn::_inverseAdd(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IDEPENDSON__DEPENDSON:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void IDependsOn::_inverseRemove(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IDEPENDSON__DEPENDSON:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

