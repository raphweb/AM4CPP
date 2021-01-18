// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/SporadicActivationImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "SporadicActivation.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/Activation.hpp>
#include <amalthea/IDescription.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Tag.hpp>
#include <amalthea/ITimeDeviation.hpp>
#include <amalthea/INamed.hpp>
#include <amalthea/Namespace.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(SporadicActivationImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void SporadicActivation::_initialize()
{
    // Supertypes
    ::amalthea::Activation::_initialize();
    ::amalthea::IDescription::_initialize();

    // References
    if (m_occurrence)
    {
        m_occurrence->_initialize();
    }

    /*PROTECTED REGION ID(SporadicActivationImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject SporadicActivation::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
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
    case ::amalthea::AmaltheaPackage::IDESCRIPTION__DESCRIPTION:
    {
        return amalthea::IDescription::eGet(_featureID, _resolve);
    }
    case ::amalthea::AmaltheaPackage::SPORADICACTIVATION__OCCURRENCE:
    {
        if (m_occurrence)
            _any = ::ecore::as < ::ecore::EObject > (m_occurrence);
        return _any;
    }
    }
    throw std::runtime_error(
            "SporadicActivation::eGet Error. FeatureID:" + _featureID);
}

void SporadicActivation::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
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
    case ::amalthea::AmaltheaPackage::IDESCRIPTION__DESCRIPTION:
    {
        amalthea::IDescription::eSet(_featureID, _newValue);
        return;
    }
    case ::amalthea::AmaltheaPackage::SPORADICACTIVATION__OCCURRENCE:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::ITimeDeviation_ptr _t1 =
                dynamic_cast< ::amalthea::ITimeDeviation* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::ITimeDeviation >(_t0);*/
        ::amalthea::SporadicActivation::setOccurrence(_t1);
        return;
    }
    }
    throw std::runtime_error(
            "SporadicActivation::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean SporadicActivation::eIsSet(::ecore::EInt _featureID)
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
    case ::amalthea::AmaltheaPackage::IDESCRIPTION__DESCRIPTION:
    {
        return amalthea::IDescription::eIsSet(_featureID);
    }
    case ::amalthea::AmaltheaPackage::SPORADICACTIVATION__OCCURRENCE:
    {
        return (bool) m_occurrence;
    }
    }
    throw std::runtime_error(
            "SporadicActivation::eIsSet Error. FeatureID:" + _featureID);
}

void SporadicActivation::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "SporadicActivation::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr SporadicActivation::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getSporadicActivation();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void SporadicActivation::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
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
    case ::amalthea::AmaltheaPackage::SPORADICACTIVATION__OCCURRENCE:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void SporadicActivation::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_oldValue)
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
    case ::amalthea::AmaltheaPackage::SPORADICACTIVATION__OCCURRENCE:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

