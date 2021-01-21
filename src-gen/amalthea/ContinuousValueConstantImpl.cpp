// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/ContinuousValueConstantImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "ContinuousValueConstant.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/IContinuousValueDeviation.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(ContinuousValueConstantImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void ContinuousValueConstant::_initialize()
{
    // Supertypes
    ::amalthea::IContinuousValueDeviation::_initialize();

    // References

    /*PROTECTED REGION ID(ContinuousValueConstantImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

::ecore::EDoubleObject ContinuousValueConstant::getLowerBound()
{
    /*PROTECTED REGION ID(ContinuousValueConstantImpl_getLowerBound) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    throw "UnsupportedOperationException: amalthea::ContinuousValueConstant::getLowerBound";
    /*PROTECTED REGION END*/
}

::ecore::EDoubleObject ContinuousValueConstant::getUpperBound()
{
    /*PROTECTED REGION ID(ContinuousValueConstantImpl_getUpperBound) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    throw "UnsupportedOperationException: amalthea::ContinuousValueConstant::getUpperBound";
    /*PROTECTED REGION END*/
}

::ecore::EDoubleObject ContinuousValueConstant::getAverage()
{
    /*PROTECTED REGION ID(ContinuousValueConstantImpl_getAverage) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    throw "UnsupportedOperationException: amalthea::ContinuousValueConstant::getAverage";
    /*PROTECTED REGION END*/
}

// EObject
::ecore::EJavaObject ContinuousValueConstant::eGet(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::CONTINUOUSVALUECONSTANT__VALUE:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EDouble
                > ::toAny(_any, m_value);
        return _any;
    }
    }
    throw std::runtime_error(
            "ContinuousValueConstant::eGet Error. FeatureID:" + _featureID);
}

void ContinuousValueConstant::eSet(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::CONTINUOUSVALUECONSTANT__VALUE:
    {
        ::ecore::EDouble _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EDouble
                > ::fromAny(_newValue, _t0);
        ::amalthea::ContinuousValueConstant::setValue(_t0);
        return;
    }
    }
    throw std::runtime_error(
            "ContinuousValueConstant::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean ContinuousValueConstant::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::CONTINUOUSVALUECONSTANT__VALUE:
    {
        return m_value != 0.0;
    }
    }
    throw std::runtime_error(
            "ContinuousValueConstant::eIsSet Error. FeatureID:" + _featureID);
}

void ContinuousValueConstant::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "ContinuousValueConstant::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr ContinuousValueConstant::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getContinuousValueConstant();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void ContinuousValueConstant::_inverseAdd(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void ContinuousValueConstant::_inverseRemove(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

