// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/EarliestDeadlineFirstImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "EarliestDeadlineFirst.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/DynamicPriority.hpp>
#include <amalthea/CustomProperty.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(EarliestDeadlineFirstImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void EarliestDeadlineFirst::_initialize()
{
    // Supertypes
    ::amalthea::DynamicPriority::_initialize();

    // References

    /*PROTECTED REGION ID(EarliestDeadlineFirstImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject EarliestDeadlineFirst::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        return amalthea::IAnnotatable::eGet(_featureID, _resolve);
    }
    }
    throw std::runtime_error(
            "EarliestDeadlineFirst::eGet Error. FeatureID:" + _featureID);
}

void EarliestDeadlineFirst::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        amalthea::IAnnotatable::eSet(_featureID, _newValue);
        return;
    }
    }
    throw std::runtime_error(
            "EarliestDeadlineFirst::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean EarliestDeadlineFirst::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        return amalthea::IAnnotatable::eIsSet(_featureID);
    }
    }
    throw std::runtime_error(
            "EarliestDeadlineFirst::eIsSet Error. FeatureID:" + _featureID);
}

void EarliestDeadlineFirst::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "EarliestDeadlineFirst::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr EarliestDeadlineFirst::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getEarliestDeadlineFirst();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void EarliestDeadlineFirst::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void EarliestDeadlineFirst::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}
