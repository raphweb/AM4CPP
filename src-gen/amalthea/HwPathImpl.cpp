// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/HwPathImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "HwPath.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/ProcessingUnit.hpp>
#include <amalthea/HwDestination.hpp>
#include <amalthea/HwAccessElement.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(HwPathImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void HwPath::_initialize()
{
    // Supertypes

    // References

    /*PROTECTED REGION ID(HwPathImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

::amalthea::HwAccessElement_ptr HwPath::getContainingAccessElement()
{
    /*PROTECTED REGION ID(HwPathImpl_getContainingAccessElement) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    throw "UnsupportedOperationException: amalthea::HwPath::getContainingAccessElement";
    /*PROTECTED REGION END*/
}

// EObject
::ecore::EJavaObject HwPath::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    }
    throw std::runtime_error("HwPath::eGet Error. FeatureID:" + _featureID);
}

void HwPath::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    }
    throw std::runtime_error("HwPath::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean HwPath::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::HWPATH__SOURCE:
    {
        return (bool) m_source;
    }
    case ::amalthea::AmaltheaPackage::HWPATH__DESTINATION:
    {
        return (bool) m_destination;
    }
    }
    throw std::runtime_error("HwPath::eIsSet Error. FeatureID:" + _featureID);
}

void HwPath::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error("HwPath::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr HwPath::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getHwPath();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void HwPath::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void HwPath::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

