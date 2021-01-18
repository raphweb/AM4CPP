// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/IDisplayNameImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "IDisplayName.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(IDisplayNameImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void IDisplayName::_initialize()
{
    // Supertypes

    // References

    /*PROTECTED REGION ID(IDisplayNameImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject IDisplayName::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IDISPLAYNAME__DISPLAYNAME:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::toAny(_any, m_displayName);
        return _any;
    }
    }
    throw std::runtime_error(
            "IDisplayName::eGet Error. FeatureID:" + _featureID);
}

void IDisplayName::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IDISPLAYNAME__DISPLAYNAME:
    {
        ::ecore::EString _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::fromAny(_newValue, _t0);
        ::amalthea::IDisplayName::setDisplayName(_t0);
        return;
    }
    }
    throw std::runtime_error(
            "IDisplayName::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean IDisplayName::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IDISPLAYNAME__DISPLAYNAME:
    {
        return ::ecorecpp::mapping::set_traits < ::ecore::EString
                > ::is_set(m_displayName);
    }
    }
    throw std::runtime_error(
            "IDisplayName::eIsSet Error. FeatureID:" + _featureID);
}

void IDisplayName::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "IDisplayName::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr IDisplayName::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getIDisplayName();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void IDisplayName::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void IDisplayName::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

