// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/IReferableImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "IReferable.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/INamed.hpp>
#include <amalthea/Namespace.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(IReferableImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void IReferable::_initialize()
{
    // Supertypes
    ::amalthea::INamed::_initialize();

    // References

    /*PROTECTED REGION ID(IReferableImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

::ecore::EString IReferable::getEncodedQualifiedName()
{
    /*PROTECTED REGION ID(IReferableImpl_getEncodedQualifiedName) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    throw "UnsupportedOperationException: amalthea::IReferable::getEncodedQualifiedName";
    /*PROTECTED REGION END*/
}

::ecore::EBoolean IReferable::validateInvariants(
        ::ecore::EDiagnosticChain _diagnostics,
        std::map< ::ecore::EJavaObject, ::ecore::EJavaObject > const &_context)
{
    /*PROTECTED REGION ID(IReferableImpl_validateInvariants) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    throw "UnsupportedOperationException: amalthea::IReferable::validateInvariants";
    /*PROTECTED REGION END*/
}

// EObject
::ecore::EJavaObject IReferable::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::INAMED__NAME:
    {
        return amalthea::INamed::eGet(_featureID, _resolve);
    }
    }
    throw std::runtime_error("IReferable::eGet Error. FeatureID:" + _featureID);
}

void IReferable::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::INAMED__NAME:
    {
        amalthea::INamed::eSet(_featureID, _newValue);
        return;
    }
    }
    throw std::runtime_error("IReferable::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean IReferable::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::INAMED__NAME:
    case ::amalthea::AmaltheaPackage::INAMED__QUALIFIEDNAME:
    {
        return amalthea::INamed::eIsSet(_featureID);
    }
    case ::amalthea::AmaltheaPackage::IREFERABLE__UNIQUENAME:
    {
        return ::ecorecpp::mapping::set_traits < ::ecore::EString
                > ::is_set(m_uniqueName);
    }
    }
    throw std::runtime_error(
            "IReferable::eIsSet Error. FeatureID:" + _featureID);
}

void IReferable::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "IReferable::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr IReferable::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getIReferable();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void IReferable::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void IReferable::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

