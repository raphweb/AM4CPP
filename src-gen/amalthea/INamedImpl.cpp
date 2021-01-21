// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/INamedImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "INamed.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/INamed.hpp>
#include <amalthea/Namespace.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(INamedImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void INamed::_initialize()
{
    // Supertypes

    // References

    /*PROTECTED REGION ID(INamedImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

::amalthea::INamed_ptr INamed::getNamedContainer()
{
    /*PROTECTED REGION ID(INamedImpl_getNamedContainer) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    throw "UnsupportedOperationException: amalthea::INamed::getNamedContainer";
    /*PROTECTED REGION END*/
}

::ecore::EString INamed::getNamePrefix()
{
    /*PROTECTED REGION ID(INamedImpl_getNamePrefix) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    throw "UnsupportedOperationException: amalthea::INamed::getNamePrefix";
    /*PROTECTED REGION END*/
}

std::vector< ::ecore::EString > INamed::getQualifiedNameSegments()
{
    /*PROTECTED REGION ID(INamedImpl_getQualifiedNameSegments) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    throw "UnsupportedOperationException: amalthea::INamed::getQualifiedNameSegments";
    /*PROTECTED REGION END*/
}

::ecore::EString INamed::getDefaultNameSeparator()
{
    /*PROTECTED REGION ID(INamedImpl_getDefaultNameSeparator) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    throw "UnsupportedOperationException: amalthea::INamed::getDefaultNameSeparator";
    /*PROTECTED REGION END*/
}

::amalthea::Namespace_ptr INamed::getNamespace()
{
    /*PROTECTED REGION ID(INamedImpl_getNamespace) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    throw "UnsupportedOperationException: amalthea::INamed::getNamespace";
    /*PROTECTED REGION END*/
}

std::vector< ::ecore::EString > INamed::getNamePrefixSegments()
{
    /*PROTECTED REGION ID(INamedImpl_getNamePrefixSegments) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    throw "UnsupportedOperationException: amalthea::INamed::getNamePrefixSegments";
    /*PROTECTED REGION END*/
}

// EObject
::ecore::EJavaObject INamed::eGet(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::INAMED__NAME:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::toAny(_any, m_name);
        return _any;
    }
    }
    throw std::runtime_error("INamed::eGet Error. FeatureID:" + _featureID);
}

void INamed::eSet(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::INAMED__NAME:
    {
        ::ecore::EString _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::fromAny(_newValue, _t0);
        ::amalthea::INamed::setName(_t0);
        return;
    }
    }
    throw std::runtime_error("INamed::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean INamed::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::INAMED__NAME:
    {
        return ::ecorecpp::mapping::set_traits < ::ecore::EString
                > ::is_set(m_name);
    }
    case ::amalthea::AmaltheaPackage::INAMED__QUALIFIEDNAME:
    {
        return ::ecorecpp::mapping::set_traits < ::ecore::EString
                > ::is_set(m_qualifiedName);
    }
    }
    throw std::runtime_error("INamed::eIsSet Error. FeatureID:" + _featureID);
}

void INamed::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error("INamed::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr INamed::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getINamed();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void INamed::_inverseAdd(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void INamed::_inverseRemove(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

