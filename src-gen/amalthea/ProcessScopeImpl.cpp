// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/ProcessScopeImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "ProcessScope.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/DataGroupScope.hpp>
#include <amalthea/AbstractProcess.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(ProcessScopeImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void ProcessScope::_initialize()
{
    // Supertypes
    ::amalthea::DataGroupScope::_initialize();

    // References

    /*PROTECTED REGION ID(ProcessScopeImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject ProcessScope::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::PROCESSSCOPE__PROCESS:
    {
        if (m_process)
            _any = ::ecore::as < ::ecore::EObject > (m_process);
        return _any;
    }
    }
    throw std::runtime_error(
            "ProcessScope::eGet Error. FeatureID:" + _featureID);
}

void ProcessScope::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::PROCESSSCOPE__PROCESS:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::AbstractProcess_ptr _t1 =
                dynamic_cast< ::amalthea::AbstractProcess* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::AbstractProcess >(_t0);*/
        ::amalthea::ProcessScope::setProcess(_t1);
        return;
    }
    }
    throw std::runtime_error(
            "ProcessScope::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean ProcessScope::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::PROCESSSCOPE__PROCESS:
    {
        return (bool) m_process;
    }
    }
    throw std::runtime_error(
            "ProcessScope::eIsSet Error. FeatureID:" + _featureID);
}

void ProcessScope::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "ProcessScope::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr ProcessScope::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getProcessScope();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void ProcessScope::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::PROCESSSCOPE__PROCESS:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void ProcessScope::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::PROCESSSCOPE__PROCESS:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

